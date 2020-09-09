#include<iostream>
int main()
{
int ival=101;
int &rvalue=ival;
int *p=&rvalue;// 1st way
rvalue=4;
int *m;// 2nd
m=&ival;//way
// *p=rvalue not allowed bcoz rvalue is a reference
std::cout<<rvalue<<std::endl<<&rvalue<<std::endl<<*p<<std::endl<<p<<std::endl<<*m<<std::endl<<m<<std::endl<<ival;
return 0;
}
