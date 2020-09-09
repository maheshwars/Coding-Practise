#include<iostream>
int main()
{
    double b=2;
    const double a=1;
    const double *ptr=&a;
    ptr=&b;
    std::cout<<a<<"\n"<<&a<<std::endl<<*ptr<<std::endl<<ptr;
}
