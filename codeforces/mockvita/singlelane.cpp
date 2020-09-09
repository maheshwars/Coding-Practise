#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

unsigned int factorial(unsigned n){
	return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int main(){
	int n;
	unsigned int gr,fact;
  	cin>>n;
  	vector<unsigned int> speed;
  	cout<<std::setprecision(6)<<std::fixed;
  	if(n<=0){

  	cout<<0.000000;
    return 0;
    }
  	else{
            int inp;
            //cout<<"yes";
      for(int i=0;i<n;i++){
        cin>>inp;
        speed.push_back(inp);
      }
    //cout<<"nfac";
    fact = factorial(n);
    //cout<<fact<<"-";
      if(n%2==0)
        gr = (2*fact) +2;
       else
         gr = (2*fact)-1;

    //cout<<gr<<endl;
      cout<<float(gr/double(fact));

    }



return 0;
}
