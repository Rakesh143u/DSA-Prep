#include<iostream>
#include<vector>
using namespace std;
int partition(int n,vector<int>&arr,int low,int high){
    int key=arr[low];
    int i=low+1;
    int j=high;
    while(1){
        while(i<=high && arr[i]<=key){
            i++;
        }
        while(arr[j]>key){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }else{
            swap(arr[low],arr[j]);
            return j;
        }
    }
    
}

void quicksort(int n,vector<int>&arr,int low,int high){
    if(low<high){
        int k = partition(n,arr,low,high);
        quicksort(n,arr,low,k-1);
        quicksort(n,arr,k+1,high);
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
    quicksort(n,arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
}