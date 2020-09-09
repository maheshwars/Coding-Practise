#include<iostream>
#include<vector>
using namespace std;

void interchange(vector<vector<int>>& arr){
    int n = arr.size()-1;
    for (int i = 0; i < arr.size(); i++)
        for (int j = 0; j < arr.size()/2; j++)
            swap(arr[i][j], arr[i][n-j]);
}
void transpose(vector<vector<int>>& arr)
{
    for (int i = 0; i < arr.size(); i++)
        for (int j = i; j < arr.size(); j++)
            swap(arr[i][j], arr[j][i]);
}

int main(){
vector<vector<int>> matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

for(vector<int> a : matrix){
    for(int s :a){
        cout<<s<<" ";
    }
    cout<<endl;
}

transpose(matrix);
interchange(matrix);
cout<<"\n\n";
for(vector<int> a : matrix){
    for(int s :a){
        cout<<s<<" ";
    }
    cout<<endl;
}

return 0;
}
