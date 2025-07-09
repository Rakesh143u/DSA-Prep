#include<iostream>

using namespace std;
int main() {
  int ar[5] = {7,2,1,5,4};
  int ans = -1; //to store the final required index
  int totalsum=0;
  int leftsum=0;
  for(int i=0;i<5;i++){
    totalsum+=ar[i];

  }
  for(int i=0;i<5;i++){
    totalsum=totalsum-ar[i];
    if(leftsum==totalsum){
        ans =i;
        break;
    }
    leftsum+=ar[i];
  }
  if(ans!=-1){
    cout << ans << endl;
  }else{
    cout << "NO EQUILIBRIUM" << endl;
  }
  return 0;
}