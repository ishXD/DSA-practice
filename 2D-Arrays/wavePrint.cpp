#include<bits/stdc++.h>
#include<vector>
using namespace std;
 
vector<int> WavePrint(int m, int n, vector<vector<int>> arr )
{
    int endCol = n-1;
    vector<int> ans;
    while (endCol>=0){
        for (int startRow=0;startRow<m;startRow++){
            ans.push_back(arr[startRow][endCol]);
        }
        endCol--;
        if (endCol<0){
            break;
        }
        for(int endRow = m - 1; endRow >= 0; endRow--){
            ans.push_back(arr[endRow][endCol]);
        }
        endCol--;
    }

    return ans;
    
}

int main(){
    vector<vector<int>> arr
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8,},
        {9, 10, 11, 12,},
        {13, 14, 15, 16}
    };
    int m=4,n=4;
    vector<int> a = WavePrint(m,n,arr);

    for (int x : a){
        cout<< x<< ",";
    }

    return 0;

}