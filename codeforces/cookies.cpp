#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        int a,b,n,m,v,c;
        int ncnt=0;
        int mcnt = 0;
        cin>>a>>b>>n>>m;
        if(n+m>a+b){
            cout<<"NO"<<endl;
            continue;
        }
        v=a;
        c=b;
        if(v>c){
                if(n>0){
                n=n-(v-c);
                v=c;
                }
                else{
                    cout<<"NO"<<endl;
                    continue;
                }
        }
        if(c>v){
                if(n>0){

            n=n-(c-v);
            c=v;
                }
                else{
                    cout<<"NO"<<endl;
                    continue;
                }

        }
        if(v==c){
            if(v>m){
                cout<<"NO"<<endl;\
                continue;
            }
            else {
                cout<<"YES"<<endl;
                continue;
            }

        }

    }

    return 0;
}
