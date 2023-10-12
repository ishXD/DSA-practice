#include<bits/stdc++.h>
using namespace std;

void mangoTree(int m, int n, vector<vector<int>> arr){
    //make 2D Prefix array
    int prefix[10][10];
    pair<int, int> ans;
    prefix[0][0] = arr[0][0];
    for (int i=1;i<n;i++){
        prefix[0][i]=prefix[0][i-1]+arr[0][i];
    }
    for(int i=1; i<m; i++){
        prefix[i][0]=prefix[i-1][0]+arr[i][0];
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1] + arr[i][j];
        }
    } 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<prefix[i][j]<<"\t";
        }
        cout<<endl;
    }

    //compute sum of each quadrant
    int s1,s2,s3,s4;
    int max_of_min = -1;
    int min = -1;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            s2 = prefix[i][j];
            s1 = prefix[i][n-1] - prefix[i][j];
            s3 = prefix[m-1][j] - prefix[i][j];
            s4 = prefix[m-1][n-1] - s1+s2+s3;
            //find minimum of the sums
            min = std::min({s1,s2,s3,s4});
            //to maximize this minimum sum
            if (min>max_of_min){
                max_of_min = min;
                ans.first = i;
                ans.second =j; 
            }
        }
    }
    cout<<"max trees he could get: "<<max_of_min<<" at index "<<ans.first<<", "<<ans.second;

}

int main(){
    vector<vector<int>> arr
    {
        {0, 1, 1, 0, 0, 0},
        {1, 0, 0, 1, 1, 0},
        {0, 1, 0, 0, 0, 0},
        {0, 1, 1, 0, 0, 1},
        {1, 0, 0, 1, 1, 0},
        {0, 1, 0, 0, 0, 0}
    };
    int m=6,n=6;
    mangoTree(m,n,arr);
    return 0;

}