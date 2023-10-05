#include<bits/stdc++.h>
using namespace std;


int compress(vector<char>& chars) {
    // your code goes here
    string s;
    for (int i=0;i<chars.size();i++){
        int count = 1;
        while(i<chars.size()-1 && chars[i]==chars[i+1]){
            count++;
            i++;
        }
        s.push_back(chars[i]);
        if(count!=1){
            s+=to_string(count);
        }
    }
    chars.clear();
    
    for(int i=0;i<s.size();i++)
    {
        chars.push_back(s[i]);
    } 
 
    return chars.size();
}

int main(){
    vector<char> chars = {'a','b','b','b','b','b','b','b','b','b','b','b','b'};
    cout << compress(chars);
    return 0;

}