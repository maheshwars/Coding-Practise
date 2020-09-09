#include<iostream>
#include<stdio.h>
using namespace std;

int length(char arr[])
{int  len=0;
 int i=0;
    while(arr[i]!='\0')
    {
        i++;
        len++;
    }
    return len;
}

class strng
{
private:
    char a[500];
public:
    void getdata()
    {
        cout<<"\n Enter the string: ";
        gets(a);
    }
    void display()
    {
        cout<<"The string is : "<<a;
    }
    strng operator+(strng &stri)
    {
        int l1=length(a);
        int l2=length(stri.a);
        int j=0;
        for(int i=l1;i<=(l1+l2)-1;i++)
        {
            a[i]=stri.a[j];
            j++;
        }
        return (*this);
    }
};
main()
{
    strng x,y,z;
    x.getdata();
    y.getdata();
    x+y;
    x.display();
}
