#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {

     int i=0;
    for(int j = 0; j<nums.size();j++){
     if(nums[j]!=0 ){
          swap(nums[j],nums[i]);
           i++;
         }
   }
}

int main(){

       vector<int>nums= {0,1,0,3,12,0,22,6,7,21,19,8,0,1};
   moveZeroes (nums);
   for(auto it:nums){
       cout<<it<<' ';

    }
    return 0;
}