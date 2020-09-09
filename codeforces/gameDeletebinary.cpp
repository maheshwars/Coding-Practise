#include<iostream>
#include<string>
using namespace std;


int main(){

    int t;
    cin>>t;
    string bstring;
    for(int i=0;i<t;i++){
        int count0=0;
        int count1=0;
        cin>>bstring;
        for(int i =0; i<bstring.length();i++){
            if(bstring[i]=='0')
                count0+=1;
            else
                count1+=1;
        }
        int c = min(count0,count1);
        if(c%2==0)
            cout<<"NET"<<endl;
        else
            cout<<"DA"<<endl;
    }
    return 0;
}
