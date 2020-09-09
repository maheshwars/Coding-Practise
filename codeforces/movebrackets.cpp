#include<iostream>
#include<string>
using namespace std;

int main(){

    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        int n;
        cin>>n;
        cin.ignore();
        string brac;
        getline(cin, brac);
        int opCount=0;
        int er=0;
        for(int j=0;j<n;j++){
            if(brac[j]=='('){
                opCount++;
                }

            if((brac[j]==')') && opCount<1){
                er++;
               }
            if((brac[j]==')') && opCount>0){
                opCount--;
               }
        }
        cout<<er<<endl;
    }
    return 0;
}
