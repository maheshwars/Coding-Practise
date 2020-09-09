#include<iostream>
#include<vector>
using namespace std;

int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int ecnt=0;
        int ocnt=0;
        vector <int>even;
        vector <int>odd;
        int arr[2*n];

        for(int j=0;j<(2*n);j++){
           cin>>arr[j];
           if(arr[j]%2==0){
            ecnt++;
            even.push_back(j+1);
           }
           else{
            ocnt++;
            odd.push_back(j+1);
           }
        }
        if(2*n<5){
            cout<<1<<" "<<2<<endl;
        }
        else{
                if(ecnt>0&& ocnt>0 && ecnt%2==0){
                    for(int l=2;l<ecnt;l=l+2){
                        cout<<even[l]<<" "<<even[l+1]<<endl;
                    }
                    for(int k=0;k<ocnt;k=k+2){
                        cout<<odd[k]<<" "<<odd[k+1]<<endl;
                    }
                }
                else if(ecnt>0 && ocnt>0 && ecnt%2!=0){
                    for(int m=1;m<ecnt;m=m+2){
                        cout<<even[m]<<" "<<even[m+1]<<endl;
                    }
                    for(int n=1;n<ocnt;n=n+2){
                        cout<<odd[n]<<" "<<odd[n+1]<<endl;
                    }
                }
                else if(ecnt==0){
                        for(int o=2;o<ocnt;o=o+2){
                        cout<<odd[o]<<" "<<odd[o+1]<<endl;
                    }

                }
                else if(ocnt==0){
                    for(int p=2;p<ecnt;p=p+2){
                        cout<<even[p]<<" "<<even[p+1]<<endl;
                    }
                }

        }

    }
    return 0;
}
