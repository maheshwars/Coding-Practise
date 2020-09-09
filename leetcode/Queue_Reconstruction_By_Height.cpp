#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
using namespace std;

int main(){
    vector<vector<int>> people{{7,0},{4,4},{7,1},{5,0},{6,1},{5,2}};
    list<vector<int>> peep;
    sort(people.begin(),people.end(),[] (vector<int> p1, vector<int>p2)
        {
            if(p1[0]==p2[0])
                return p1[1]<p2[1];
            else
                return p1[0]>p2[0];
        });
    list<vector<int>>::iterator it = peep.begin();
    for(int i=0;i<people.size();i++){
        it = peep.begin();
        advance(it, people[i][1]);
        peep.insert(it,people[i]);
    }

    it = peep.begin();
    for(int i=0;i<people.size();i++){
        people[i]=*it;
        it++;
    }

    for(vector<int> p: people){
        cout<<"["<<p[0]<<","<<p[1]<<"]"<<" ,";
    }

return 0;
}
