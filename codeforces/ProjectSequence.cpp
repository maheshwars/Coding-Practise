#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;

class Project{
private:
    vector<Project*> children;
    map <string, Project*> umap;
    string name;
    int dependencies = 0;

public:
    Project(string nam){
    name = nam;
    }
    void inc_dependencies(){
    dependencies++;
    }
    void dec_dependencies(){
    dependencies--;
    }

    string getName(){
    return name;
    }
    vector<Project*> getChildren(){
    return children;
    }
    int getDependencies(){
    return dependencies;
    }

    void addNeighbor(Project* node){
        if(umap.find(node->getName())==umap.end()){
        node->inc_dependencies();
        children.push_back(node);
        umap.insert(make_pair(name, node));
        //cout<<"\n-"<<umap.size()<<"-\n";
        //cout<<"."<<node->getDependencies()<<".\n";
        //cout<<children[0]->getName();
        //cout<<"yes";
        }
    }


};

class Graph{
private:
    vector<Project*> Nodes;
    unordered_map<string, Project*> unmap;
    int y=0;
public:
    Project* getOrCreate(string name){
        if(unmap.find(name)==unmap.end()){
            Project* node= NULL;
            node = new Project(name);
            Nodes.push_back(node);
            unmap.insert(pair<string,Project*>(name,node));
            //cout<<"-"<<Nodes[y++].getName();
        }
        else
        //cout<<"\nun"<<unmap.at(name)->getDependencies()<<"\n";
        return unmap.at(name) ;
    }

    void addEdge(string startName, string endName){
        Project *start = getOrCreate(startName);
        Project *endd = getOrCreate(endName);
        start->addNeighbor(endd);

    }

    vector<Project*> getNodes(){
    return Nodes;
    }

};

Graph buildGraph(vector<string> projects, vector<vector<string>> dependencies){
    Graph graph;
    for(string project : projects){
        graph.getOrCreate(project);
    }

    for(vector<string> dependency: dependencies){
        string first = dependency[0];
        string second = dependency[1];
        graph.addEdge(first,second);

    }
    return graph;
}

int addNonDependent(vector<Project> &order,vector<Project*>projects,int offset){
    //cout<<".";
    for(Project* project : projects){
            //cout<<project->getName()<<"-"<<project->getDependencies()<<"_";
        if(project->getDependencies()==0){
            //cout<<project->getName();
            order.push_back(*project);
            //cout<<order.size();
            offset++;
            //cout<<offset;
        }
    }
    //cout<<"\ne";
    return offset;
}

vector<Project> orderProjects(vector<Project*> projects){
    vector<Project> order ;
    int endoflist= addNonDependent(order, projects, 0);
    //cout<<endoflist<<"-\n";
    int toBeProcessed=0;
    //cout<<order.size();
    while(toBeProcessed<order.size()){
            //cout<<order[toBeProcessed].getName();
        Project current = order [toBeProcessed];
        //cout<<current->getName();
        //if(current == NULL){
          //  return NULL;
        //}

        vector<Project*> children = current.getChildren();
        for(Project* child : children){
            child->dec_dependencies();
        }
        endoflist = addNonDependent(order, children, endoflist);
        toBeProcessed++;
    }
    return order;
}

vector<Project> findBuildOrder(vector<string> projects,vector<vector<string>> dependencies){
     Graph graph = buildGraph(projects, dependencies);
     vector<Project*> pr = graph.getNodes();
     /*for(int x=0;x<pr.size();x++){
        cout<<"1";
     cout<<"\n"<<pr[x]->getName();
     cout<<pr[x]->getChildren().size();
     cout<<pr[x]->getDependencies();

     }*/
     //cout<<pr.size();
     return orderProjects(pr);
}


int main(){
    vector<string> pro{"a","b","c","d","e","f"};
    //string p,dep;
    vector<vector<string>> dependencies{{"a","d"},{"f","b"},{"b","d"},{"f","a"},{"d","c"}};
    /*while(getline(cin,)!='\n'){
        pro.pushback();
    }
    while(getline(cin,dep!='\n')){
        dependencies.push_back(dep);
    }
    for(int i=0;i<dependencies.size();i++){
        cout<<dependencies[i];
    }*/
    vector<Project> result = findBuildOrder(pro,dependencies);
    for(int i=0;i<result.size();i++){
        cout<<result[i].getName()<<" ";

    }

    return 0;
}
