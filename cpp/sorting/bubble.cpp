#include<iostream>
#include<vector>
using namespace std ;
void bubble(int n,vector<int>&arr){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                
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
    bubble(n,arr);
    for(int i=0;i<n;i++){
        cout << arr[i] ;
    }
}