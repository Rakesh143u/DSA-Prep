#include<iostream>
#include<vector>
using namespace std ;
void select(int n,vector<int>&arr){
    
    for(int i=0;i<n-2;i++){
        int min = arr[i];
        int pos = i;
    
        for(int j=i+1;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                pos=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[pos];
        arr[pos]=temp;
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
    select(n,arr);
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
}