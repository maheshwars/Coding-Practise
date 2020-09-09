#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        int a1,b1,a2,b2,len1,len2,bre1,bre2;
        cin>>a1>>b1;
        cin>>a2>>b2;
        if(a1>b1){
            len1 = a1;
            bre1 = b1;
        }
        else{
            len1 = b1;
            bre1= a1;
        }
        if(a2>b2){
            len2 = a2;
            bre2 = b2;
        }
        else{
            len2 = b2;
            bre2 = a2;
        }
        if(bre1+bre2==len1 && bre1+bre2 == len2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
