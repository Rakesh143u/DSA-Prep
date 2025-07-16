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
    // pre-compute
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    // iterate in the Map
    // O(1) for best and avg case and O(N) for worst case for timecomplexity
    int maximum=INT_MIN;
    int minimum=INT_MAX;
    int most=0,least=0;

    for(auto &pair:mpp){
        if(pair.second>maximum){
            maximum = pair.second;
            most = pair.first;
        }
        if(pair.second<minimum){
            minimum = pair.second;
            least = pair.first;
        }
    }
        
        
        cout <<"least freq is:" << least << "->" << minimum << endl;

        cout << "mpost ferq is:" << most << "->" << maximum << endl;

   
    
    return 0;
}