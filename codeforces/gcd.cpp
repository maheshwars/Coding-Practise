#include<iostream>
using namespace std;


/*int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}*/

int main(){

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>>n;
        int gcdd;
        if(n%2==0)
            gcdd = n/2;
        else
            gcdd = (n-1)/2;

        cout<<gcdd<<endl;
    }
    return 0;
}
