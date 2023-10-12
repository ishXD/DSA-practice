#include<bits/stdc++.h>
using namespace std;

/*int binomialCoeff(int n, int k){
    int res = 1;
    if (k>n-k){
        k = n-k;
    }
    for (int i=0; i<k; ++i){
        //binomial coeff = (n-k+1)!/k!
        res *= i;
        res /= i+1;
    }
    return res;

}*/
int binomialCoeff(int n, int k) {
    int res = 1;
    for (int i = 1; i <= k; ++i)
        res = res * (n - k + i) / i;
    return res;
}

vector<vector<int>> printPascal(int n)
{
    vector<vector<int>> arr;

    for (int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<=i;j++){
            v.push_back(binomialCoeff(i,j));
        }
        arr.push_back(v);
    }
    return arr;
}
 
int main(){
    int n = 5;
    vector<vector<int>> ans = printPascal(n);
    for (int i = 0; i < ans.size(); i++){
        for (int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] <<'\t';
        }
        cout<<endl;
    }
    
    return 0;


}