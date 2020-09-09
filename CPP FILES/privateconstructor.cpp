#include<iostream>
using namespace std;

class A{

A(){
cout<<"\n I am A's Constructor";
}
friend class B;

};
class B{
A s;
public:
B(){cout<<"\nI am B's cons";}


};

int main(){
 B a;


return 0;
}

