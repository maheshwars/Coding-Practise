#include<iostream>
#include<string>
int main()
{
    std::string s1="hello",s2="world";
    std::cout<<s1+s2;
    std::cout<<s1+' '+s2;
    // error:: std::cout<<"hello" + ", "+s2;
    std::cout<<s1+", "+"World";
}
