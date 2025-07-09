#include<iostream>
using namespace std;

int binary(int arr[50],int low,int high,int k){
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k){
            ans = mid ;
            high=ans-1;
            
        }else if(arr[mid]<k){
            low=mid+1;
        }else {
            high=mid-1;
        }
    }
    return ans;
    
}
int main(){
    int i,n,a[90],k,ans;
    cout << "enter the number of elements";
    cin >> n ;
    cout << "enter the array elements";
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    cout << "enter the element to be found";
    cin >> k ;
    ans =binary(a,0,n-1,k);
    cout << " the element is located in position" << ans << endl;
    return 0;

}