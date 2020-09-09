
#include<iostream>
using namespace std;
int main(){
    int N,K;
    cin>>N>>K;
    string S,s;

    int i=97;
    int j=0;
    while(j<K){
        S+=char(i);
        i++;
        if(i>122)
            i=97;
        j++;
        //cout<<"while ";
    }
    s=S;
    for(int k=0;k<(N/K)-1;k++){
        S+=s;
        //cout<<"for ";
    }
    cout<<S;

    return 0;
}
