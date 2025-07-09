// #include<iostream>
// #include<vector>
// using namespace std;
// // using two pointers;
// void swapi(int lp,int rp,vector<int> &arr){
//     if(lp>=rp) return ;
//     swap(arr[lp],arr[rp]);
//     swapi(lp+1,rp-1,arr);
// }
// int main(){
//     int n;
//     cin >> n ;
//     vector<int> arr(n);
    
//     cout << " Enter the array" ;
//     for(int i=0;i<n;i++){
//         cin >> arr[i];
//     }
//     swapi(0,n-1,arr);
//     for(int i=0;i<n;i++){
//         cout << arr[i] ;
//     }

// }


// using single pointer
#include<iostream>
#include<vector>
using namespace std;
// using two pointers;
void swapi(int i,int n,vector<int> &arr){
    if(i>=n/2) return ;
    swap(arr[i],arr[n-i-1]);
    swapi(i+1,n,arr);
}
int main(){
    int n;
    cin >> n ;
    vector<int> arr(n);
    
    cout << " Enter the array" ;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    swapi(0,n,arr);
    for(int i=0;i<n;i++){
        cout << arr[i] ;
    }

}