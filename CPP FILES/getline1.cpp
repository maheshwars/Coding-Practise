#include<iostream>
#include<string>
int main()
{

    std::string line;
    while(getline(std::cin,line))
    {
        std::cout<<line<<std::endl<<line.size()<<std::endl;
    }

}
