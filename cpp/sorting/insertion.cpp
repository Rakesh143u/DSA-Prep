#include<iostream>
#include<vector>
using namespace std ;
void insert(int n,vector<int>&arr){
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
    }
    
}
int main(){
    freopen("input.txt", "r", stdin);    // Read input from input.txt
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n ;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    insert(n,arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
}