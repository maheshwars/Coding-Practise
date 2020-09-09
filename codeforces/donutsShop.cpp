#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c,cheap1,cheap2;
        cin>>a>>b>>c;
        int p1 = a;
        float p2 = c/b;
        //cout<<" p1 p2 "<<p1<<"-"<<p2<<endl;
        if(p1<p2){
            cheap1 = 1;
            cheap2 = -1;
        }
        if(p1==p2){
            cheap1 = 1;
            cheap2 = -1;
        }
        if(p1>p2){
            cheap2 = b;
            //cout<<"cheap2:"<<cheap2;
            if(a>=c)
                cheap1=-1;
            else
                cheap1 = 1;
        }
        cout<<cheap1<<" "<<cheap2<<endl;
    }


    return 0;
}
