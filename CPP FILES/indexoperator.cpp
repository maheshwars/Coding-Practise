#include<iostream>
#include<string>

int main()
{
    std::string s="some string";
    for(int index=0; index!=s.size()&&!isspace(s[index]); ++index)
    {
        s[index]=toupper(s[index]);
    }
    std::cout<<s<<s.size();

}
