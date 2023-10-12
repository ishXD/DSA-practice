#include<bits/stdc++.h>
using namespace std;

int sum(vector<vector<int>> v, int sr, int sc, int er, int ec){
    int m = v.size();//no of rows
    int n = v[0].size();//no. of columns

    int prefix[m][n]={0};
    memset( prefix, 0, sizeof(prefix) );

    prefix[0][0] = v[0][0];
    for (int i=1;i<n;i++){
        prefix[0][i]=prefix[0][i-1]+v[0][i];
    }
    for(int i=1; i<m; i++){
        prefix[i][0]=prefix[i-1][0]+v[i][0];
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + v[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<prefix[i][j]<<"\t";
        }
        cout<<endl;
    }

    int sum;
    sum = prefix[er][ec] - prefix[sr-1][ec] - prefix[er][sc-1] + prefix[sr-1][sc-1];
    
    return sum;
}
int main(){
    vector<vector<int>> v
    {
        {1, 2, 3, 4, 6},
        {5, 3, 8, 1, 2},
        {4, 6, 7, 5, 5},
        {2, 4, 8, 9, 4} 
    };
    int sr = 2, sc = 1, er = 3, ec = 2;

    cout<<sum(v,sr,sc,er,ec);
}