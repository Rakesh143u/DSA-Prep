#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool ispossible(vector<int>&arr,int N, int M,int minallowedist){
    int cows=1,laststallpos=arr[0];
    for(int i=1;i<N;i++){
        if(arr[i]-laststallpos>=minallowedist){
            cows++;
            laststallpos=arr[i];
        }
        if(cows==M){
            return true;
        }
    }

    return false;
    
}
int aggressive(vector<int>&arr,int N,int M){
    sort(arr.begin(),arr.end());
    int st=1,end=arr[N-1]-arr[0],ans=-1;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(ispossible(arr,N,M,mid)){
            ans=mid;
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return ans;
}
int main(){
    int N=5,M=3;
    vector<int> arr={1,2,8,4,9};
    cout << aggressive(arr,N,M) << endl;
    

    return 0;
}
