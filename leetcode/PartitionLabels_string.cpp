//There is a better solution in just one traversal in leetcode solution.
#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

int main(){
    string S = "ababcbacadefegdehijhklij";
    unordered_map<char,int> umap;
    for(int i=0;i<S.length();i++){
        umap[S[i]] = i;
        }
    vector<int> lengths;
    int len=0;
    while(S.length()>0){

        int part =umap.at(S[0])-len;

        for(int i=1;i<=part;i++){
            int temp = umap.at(S[i])-len;
            if(temp>part){
                part = temp;
            }
        }
        lengths.push_back(part+1);
        S = S.substr(part+1,S.length()-part-1);
        len+= part+1;
    }

    for(int a : lengths){
        cout<<a ;
    }
return 0;
}
