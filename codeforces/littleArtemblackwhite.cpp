#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        int p=n*m;
        char arr[n][m];
        if(p%2==0){

            for(int j=0;j<n;j++){
                for(int k=0;k<m;k++)
            {
                if(j%2==0){
                    if(k%2==0)
                        arr[j][k]='W';
                    else
                        arr[j][k]='B';
                }
                else{

                    if(k%2==0)
                        arr[j][k]='B';
                    else
                        arr[j][k]='W';


                    }
            }

        }
        arr[0][0]='B';
        }
        else{
                for(int j=0;j<n;j++){
                for(int k=0;k<m;k++){
                if(k%2==0)
                    arr[j][k]='B';
                if(k&2!=0)
                    arr[j][k]='W';

                    }
            if(j%2!=0)
            arr[j][m-1]='W';
                }
        }
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cout<<arr[j][k];
            }
            cout<<endl;
        }
    }
    return 0;
}
