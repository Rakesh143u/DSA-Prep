#include<bits/stdc++.h>
using namespace std;
//array hashing only upto 10 power 6 size if there is more size map is used
int main(){
    freopen("input.txt", "r", stdin);    // Read input from input.txt
    freopen("output.txt", "w", stdout);  // Write output to output.txt
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int hash[13] ={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number ;
        //fetch
        cout << hash[number] << endl ;
    }
    return 0;
}