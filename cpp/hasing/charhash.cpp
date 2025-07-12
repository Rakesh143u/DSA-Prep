#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);    // Read input from input.txt
    freopen("output.txt", "w", stdout);  // Write output to output.txt
    string s;
    cin >> s;
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }
    
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >>c;
        //fetch
        cout << hash[c] << endl ;
    }
    return 0;
}