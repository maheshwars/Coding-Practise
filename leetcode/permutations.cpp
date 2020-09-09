#include<iostream>
#include<vector>
#include<list>
using namespace std;;

int main(){
    vector<int> nums{1,2,3,4};
    vector<list<int>> ans;
    vector<vector<int>> ret;
    list<int> l{};
    ans.push_back(l);
    list <int> :: iterator it;

    for(int a : nums){

        vector<list<int>> sub;
        for(list<int> &lis: ans){
            list<int> temp = lis;

            int s = temp.size();
            //cout<<"'s"<<s<<"'";
            it=lis.begin();
            advance(it, 0);
            lis.insert(it, a);
            //cout<<"'a"<<lis.size()<<"'-";

            for(int x=1;x<=s;x++){
                list<int> t=temp;
                it=t.begin();
                advance(it, x);
                t.insert(it, a);
                sub.push_back(t);

            }

        }
        for(list<int>su : sub){
            ans.push_back(su);
        }

        }
    for(list<int> li: ans){
        vector<int> temp;
        for(int t :li){
            temp.push_back(t);
        }
        ret.push_back(temp);
    }

    for(list<int> re: ans){
        cout<<"[";
        for(int r: re )
            cout<<r<<", ";
        cout<<"],\n ";
    }

return 0;
}
