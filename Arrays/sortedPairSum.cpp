#include<bits/stdc++.h>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x){
    int s = 0;
    int e = arr.size()-1;
    int diff = INT_MAX;
    int l,r;
    while (s<e){
        int cs = arr[s]+arr[e];
        if (abs(cs -x)<diff){
            l=s;
            r=e;
            diff = abs(cs -x);
        }
        if (cs<x){
            s++;
        }
        else{
            e--;
        }
    }
    
    return make_pair(arr[l],arr[r]);
}
int main(){
    vector<int> arr = {10, 22, 28, 29, 30, 40};
    int x = 54;
    pair<int, int> p = closestSum(arr,x);

    cout << p.first <<","<< p.second;
    return 0;
}