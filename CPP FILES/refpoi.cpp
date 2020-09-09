#include<iostream>
int main()
{
    int a=1;
    int *p;
    p=&a;


    int &r=a;
    std::cout<<a<<"\n"<<*p<<"\n"<<p<<"\n"<<&a<<"\n"<<r<<"\n"<<&r;
}
