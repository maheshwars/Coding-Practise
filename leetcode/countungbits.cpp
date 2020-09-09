#include<iostream>
#include<vector>
using namespace std;

vector<int> countbits(int num) {
        vector<int> ans(num+1,0);
        int m=2;
        for(int i=0; i<=num;i++){
            if(i==0){
                ans[i]=0;
                //cout<<"zero";
            }
            else if(i==1){
                ans[i]=1;
                //cout<<" one";
            }
            else {
                    //cout<<" two ";
                if(i==m){
                    ans[i]=1;
                    m = m*2;
                }
                else{
                ans[i]=ans[m/2] + ans[i-m/2];

                }
            }

        }
        return ans;
    }


int main(){
vector<int> ans;
int num;
cin>>num;

ans = countbits(num);
for(int n : ans){
    cout<<n<<" | ";
}


return 0;
}
