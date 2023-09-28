#include<bits/stdc++.h>
using namespace std;
//using int =long long;

int defkin(int W, int H, vector<pair<int, int>> position)
{
    // your code goes here
    int N = position.size();
    vector<int> x,y;
    for (auto i : position){
        x.push_back(i.first);
        y.push_back(i.second);
    }
    
    sort(x.begin(), x.end());
    
    sort(y.begin(), y.end());
 

    int dx = x[0];
    int dy = y[0];
    int x_max = INT_MIN;
    int y_max = INT_MIN;
    
    for(int i=1;i<N;i++){
        dx = x[i] - x[i-1] -1;
        dy = y[i] - y[i-1] -1;
        x_max = max(x_max,dx);
        y_max = max(y_max,dy);
        
    }
    x_max = max(x_max , W - x[N-1]);
    y_max = max(y_max, H - y[N-1]);
    
    int area = x_max * y_max;
    return area;
}

int main(){
    vector<pair<int, int>> position = {{3,8},{11,2},{8,6}};
    int W = 15;
    int H = 8;
    cout << defkin(W,H,position);
    return 0;
}