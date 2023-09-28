#include <iostream>
#include <vector>
using namespace std;


void countingSort(int arr[], int n){
    int largest =-1;
    //find largest element
    for (int i=0;i<n;i++){
        largest = max(largest,arr[i]);
    }
    //create and update freq vector
    vector<int> freq(largest+1,0);
    for (int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int j = 0;
    for (int i=0;i<=largest;i++){
        while(freq[i]>0){
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }

    
}

int main(){
    int arr[] = {2,3,4,1,5,12,6,1,5};
    int n = sizeof(arr)/sizeof(int);
    countingSort(arr,n);

    for (int x : arr){
        cout << x <<",";
    }
    return 0;

}