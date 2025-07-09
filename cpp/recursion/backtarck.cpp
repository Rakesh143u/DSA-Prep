#include<iostream>
using namespace std;
int f(int n){
    // sum to n terms;
    // if(i>n){
    //     return ;
    // }
    
    // f(i+1,n);
    // cout << i << endl;


    //  factorial of n;
    if(n==0) return 1;
    return n*f(n-1);
}
 
int main(){
    int n;
    cout << "Enter a number" ;
    cin >> n ;
    f(n);
    return 0;
}