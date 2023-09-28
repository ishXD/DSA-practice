#include<bits/stdc++.h>
using namespace std;

bool comparator(int a, int b){
    cout<<"comparing"<< a <<"and"<< b<<endl;
    return a > b;
}


vector<int> sortingWithComparator(vector<int> a, bool flag){
    // your code  goes here
    if (flag){
        sort(a.begin(),a.end());
    }
    else{
        sort(a.begin(),a.end(),comparator);
    }
    return a;
    
}

int main(){
    vector<int> a = {111, 33, 5, 7, 29};
    bool flag = false;

    vector<int> ans = sortingWithComparator(a,flag);

    for (int i:ans){
        cout<<i<<",";
    }

    return 0;

}