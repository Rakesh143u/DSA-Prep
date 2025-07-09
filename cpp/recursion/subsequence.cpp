#include<iostream>
#include<vector>
using namespace std;
void subsequence(int i,int n,vector<int> &arr,vector<int>&result){
    if(i>=n){
        for(int i=0;i<result.size();i++){
        cout << result[i] ;
        }
        cout << "\n" ;
        return ;
    }
    // index remains same it only gets increment ,decrement happens only when it return from previous index and print only 
    //happens when it is present in last index
    result.push_back(arr[i]); // add the element to  result(incldue arr[i])
    subsequence(i+1,n,arr,result);
    result.pop_back();// remove element from result (exclude arr[i])
    subsequence(i+1,n,arr,result);

}
int main(){
    int n;
    cout << "enter size" ;
    cin >> n;
    vector<int> arr(n);
    vector<int> result;
    cout << "Enter a array" ;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    subsequence(0,n,arr,result);
}