#include<iostream>
#include<string>
int main()
{
    std::string s("string");
    auto a=s.begin();
    std::cout<<++*a;

}
