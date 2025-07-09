#include<iostream>
#include<vector>
using  namespace std;
bool ispossible(vector<int>&arr,int n,int m,int maxval){
    int painters =1,time=0;
    for(int i=0;i<n;i++){
        if(time+arr[i] <= maxval){
            time+=arr[i];
        }else{
            painters++;
            time = arr[i];
        }
    }
    return painters <= m ? true:false;
}
int partition(vector<int> &arr,int n, int m){
    int sum=0,maxval=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        maxval=max(maxval,arr[i]);

    }
int st=maxval,end=sum,ans=-1;
while (st<=end)
{ 
    int mid=st+(end-st)/2;
    if(ispossible(arr,n,m,mid)){
        ans=mid;
        end=mid-1;
    }else{
        st=mid+1;
    }
}

}
int main(){
    vector<int> arr={40,30,10,20};
    int n=4,m=2;
    cout << partition(arr,n,m) << endl;
    return 0;

 }