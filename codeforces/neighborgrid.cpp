#include<iostream>
#include<vector>
using namespace std;
void neighbor(int j,int k,int n, int m, int *l,int *r,int *up,int*dn){
    if(k-1>=0){
        *l=1;
    }else{
        *l=-1;
    }
    if(k+1>=m){
        *r=-1;
    }else{
        *r=1;
    }
    if(j-1>=0){
        *up=1;
    }else{
        *up=-1;
    }
    if(j+1>=n){
        *dn=-1;
    }else{
        *dn=1;
    }
}

int sum(int l, int r, int up, int dn){
    if(l=-1)
        l=0;
    if(r=-1)
        r=0;
    if(up=-1)
        up=0;
    if(dn=-1)
        dn=0;
    return l+r+up+dn;
}

void changeGrid(vector<vector<int>> *grid, int j, int k , int l, int r, int up, int dn, int S){
        int val = grid[j][k];
        int lval=0,rval=0;upval=0;dnval=0;
        if(l=1 && grid[j][k-1]>0)
            lval= 1 ;
        if(r=1 && grid[j][k+1]>0)
            rval=1;
        if(up=1 && grid[j-1][k]>0)
            upval=1;
        if(dn=1 && grid[j+1][k]>0)
            dnval=1;
        int Sum= lval+rval+upval+dnval;
        if(Sum>val){
            *grid[j][k]=Sum;
        }
        if(val>Sum){
                int cnt= val-Sum;
                if(up==1 && upval==0 && cnt>0){
                    *grid[j-1][k];
                    //incomplete
                }

        }

}

int main(){
    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        int n,m;
        cin>>n>>m;
        vector<vector<int>>grid(n,vector<int>(m));
        for(int j =0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>grid[j][k];
            }
        }
        int flag =1;
        for(int j =0;j<n;j++){
            for(int k=0;k<m;k++){
                    int l=0, r=0, up=0, dn=0;
                    int val;
                    val = grid[j][k];
                if(val>0){
                    neighbor(j,k,n,m,&l,&r,&up,&dn);
                    int S = sum(l,r,up,dn);
                    if(val>4 || S<val ){
                        cout<<"NO";
                        flag=-1;
                        break;
                    }
                    else{
                        changeValue(&grid, j,k, l,r,up,dn,S);
                    }
                }
            }
            if(flag==-1)
                break;

        }
        if(flag==1){
            cout<<"YES"<<endl;
            for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++){
                cout<< grid[j][k];
            }
            cout<< "\n";
            }

        }

    }

    return 0;

}


