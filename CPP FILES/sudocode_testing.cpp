#include<iostream>

using namespace std;

int main(){

int a[5][5]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}} ,j,k;

for(j=0;j<5;j++){
    for(k=0;k<5;k++){
        a[j][k]= a[k][j];
    }
}

for(j=0;j<5;j++){
    for(k=0;k<5;k++){
        cout<<a[j][k]<<" ";
    }
    cout<<"\n";
}
return 0;
}
