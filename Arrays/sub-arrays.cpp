#include <iostream>

using namespace std;

int largestSubArray(int arr[],int n){
    
    int largest=0;
    
    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){ 
            
            int subarraySum=0;
            
            for(int k=i;k<=j;k++){
                subarraySum+=arr[k];
                
            }
            largest=max(largest,subarraySum);
            
        }
        
    }
    return largest;
}


int main(){
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n= sizeof(arr)/sizeof(int);
    
    cout<<largestSubArray(arr,n);

    return 0;
}