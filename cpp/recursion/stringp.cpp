#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool swapi(int i,string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    swapi (i+1,s);
}
int main(){
    string s ="MADsM";
    cout << swapi(0,s);
    return 0;
}