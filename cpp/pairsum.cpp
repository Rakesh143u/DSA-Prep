#include<iostream>
#include<vector>
 using namespace std;

 int main(){
    vector<int> arr={2,7,11,15};
    vector<int> nums;
    int target =17;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                nums.push_back(i);
                nums.push_back(j);
                
            }
        }
    }
    cout << nums[0] << ","<< nums[1] << endl;
    return 0;
 };