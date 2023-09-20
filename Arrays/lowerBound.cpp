#include<bits/stdc++.h>
using namespace std;


int lowerBound(vector<int> A, int Val) {
    int s = 0;
    int e = A.size()-1;
    int ans = -1;
    while (s<=e){
        int mid = (s+e)/2;
        if (A[mid]<=Val){
            ans = A[mid];
            s = mid +1;
        }
        else{
            e = mid - 1;
        }
    }
    
    return ans;
    
}

int main(){
    vector<int> A = {-1,-1,2,3,5};
    int val = 4;
    cout << lowerBound(A,val);
    return 0;
    
}