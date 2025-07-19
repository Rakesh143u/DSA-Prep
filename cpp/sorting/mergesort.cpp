#include<iostream>
#include<vector>
using namespace std;
void simplemerge(int n,vector<int>&arr,int low,int mid,int high){
    int i=low;
    int j=mid+1;
    
    vector<int>temp;
    while(i<=mid&&j<=high){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i++]);
        }else{
            temp.push_back(arr[j++]);
        }
    }
    
    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=high){
        temp.push_back(arr[j++]);
    }

    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void mergesort(int n,vector<int>&arr,int low,int high){
    if(low<high){
        int mid=low+(high-low)/2;
        mergesort(n,arr,low,mid);
        mergesort(n,arr,mid+1,high);
        simplemerge(n,arr,low,mid,high);
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
    mergesort(n,arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
}