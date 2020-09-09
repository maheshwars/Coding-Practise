 #include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;

int main(){

  int n;
  int x=0,y=0,v=0;
  cin>>n;
  double time[n];
  for(int i =0;i<n;i++){
    cin>>x>>y>>v;
    double dis = sqrt(x*x + y*y);
    time[i] = dis/v;
  }

  unordered_map <double, int> count;
  for(int j =0; j<n; j++){
  count[time[j]]+=1;
  }
  int ct =0;
  unordered_map<double,int> :: iterator itr;
  for( itr = count.begin();itr!=count.end();itr++){

    if(itr->second>1){

      int x = itr->second;
      ct += (x*(x-1))/2;

    }
  }
  cout<<ct;
  return 0;
}
