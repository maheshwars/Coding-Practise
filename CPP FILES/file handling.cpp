#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;

main()
{
    ifstream fin("client.txt",ios::in);
    if(!fin)
    {
        cout<<"File couldn't be opened ";
        exit(1);
    }

}
