#include<iostream>
#include<string>
int main()
{
    std::string s="0123456789ABCDEF";
    std::cout<<"Enter numbers between 0 to 15 with spaces between ";
    std::cout<<"them and press any other character than integer, then enter when done:  ";
    std::string result;
    int n;
    while(std::cin>>n)
    {
        if(n<s.size())
        result+=s[n];
    }
    std::cout<<result;
}
