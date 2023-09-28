#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){

    for (int i=0;i<=n-2;i++){
        int min = i;
        for (int j=i; j<n; j++){
            if (arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }

    
}

int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,5};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr,n);

    for (int x : arr){
        cout << x <<",";
    }
    return 0;

}