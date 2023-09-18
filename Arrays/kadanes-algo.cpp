#include<iostream>
using namespace std;

int largestSubArray(int arr[], int n){

    int cs =0;
    int ls = 0;
    for (int i=0;i<n;i++){
        cs = cs + arr[i];
        if (cs<0){
            cs =0;
        }
        ls = max(ls,cs);

    }

    return ls;
}

int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);

    cout<< largestSubArray(arr,n) <<endl;

    return 0;

}