#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        int cntOdd = 0;
        int cnteve = 0;
        cin>>n;

        int arr[n];
        for(int j=0; j<n; j++){
            cin>>arr[j];
            if(j%2==0 && arr[j]%2!=0){
                cnteve+=1;
            }
            else if(j%2!=0 && arr[j]%2==0){
                cntOdd+=1;
            }
        }
        if(cnteve==cntOdd)
            cout<<cnteve;
        else
            cout<<-1;
    }
}
