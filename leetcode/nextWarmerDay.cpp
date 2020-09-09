#include<iostream>
#include<stack>
using namespace std;

int main(){

stack<int>s;
s.push(1);
s.push(2);
for(int a :s){
    cout<<a;
}
return 0;
}
