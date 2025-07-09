#include<iostream>
using namespace std;
int main(){
    int cost[100][100],n;
    cout << "enter the element";
    cin >> n ;
    cout << "enter elements" ;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin >> cost[i][j];

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

        
    
    cout << cost[i][j];
        }
    }
    return 0;


}