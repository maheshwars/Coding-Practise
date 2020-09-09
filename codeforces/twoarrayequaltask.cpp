#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        unordered_set <int> sett ;
        int flag=1;
        int n;
        cin>>n;
        int a[n];
        int b[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        for(int j=0;j<n;j++)
            cin>>b[j];
        if(a[0]!=b[0]){
            cout<<"NO";
            flag=-1;
            continue;
        }
        sett.insert(a[0]);
        for(int k=1;k<n;k++){

            if(sett.find(a[k])==sett.end()){
               sett.insert(a[k]);
            }
            if(a[k]<b[k]){
                if(sett.find(1)==sett.end()){
                 cout<<"NO"<<endl;
                 flag=-1;
                    continue;
                }

            }
            else{
                if(sett.find(-1)==sett.end()){
                  cout<<"NO"<<endl;
                  flag=-1;
                    continue;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
