#include<iostream>
#include<math.h>
using namespace std;

bool pfSquare(int n){
    long double s =  sqrt(n);
    return (s- floor(s)==0);
}
int main(){

    int N;
    cin>>N;
    cout<<N;
    unsigned long long int area=1;
    for(int i=1;i<=N;i++){
       if(pfSquare(i)){
        area=(area*i);
        if(area>1000000007)
            area=area%1000000007;
        cout<<area<<" ";
       }
    }
    cout<<area%1000000007;
    return 0;

}
