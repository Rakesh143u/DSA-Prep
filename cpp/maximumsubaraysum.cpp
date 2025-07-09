 #include<iostream>
 using namespace std;

 int main(){
   int n =5;
   int sum;
   int arr[7]={3,-4,5,4,-1,7,-8};
   int maxsum= INT32_MIN,cursum=0;
  for(int i=0;i<=n;i++){
  cursum+=arr[i];
  maxsum=max(maxsum,cursum);
  if(cursum<0){
    cursum=0;
  }
}
    
    cout << maxsum << endl;
   
   return 0;
 }





