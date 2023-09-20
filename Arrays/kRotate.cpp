#include<bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> arr, int k){
    int n = arr.size();
    k = k%n;
    reverse(arr.begin(),arr.begin() + n-k);
    reverse(arr.begin()+n-k,arr.end());
    reverse(arr.begin(),arr.end());
    
    return arr;
    
}

int main(){
    vector<int> arr = {1, 3, 5, 7, 9};
    int k = 2;
    arr = kRotate(arr,k);
    int n = arr.size();
    for (int i=0 ; i<n ; i++){
        cout <<arr[i]<< " ";
    }

    return 0;
}