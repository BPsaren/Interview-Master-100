/*1. Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]
 

Constraints:

2 <= nums.length <= 10^4
-10^9 <= nums[i] <= 10^9
-10^9 <= target <= 10^9*/
#include<iostream>
using namespace std;
#include<vector>
#include <algorithm>

class Solution{
    public:
      vector<int> twoSum(vector<int>&nums,int target){
          
        vector<pair<int,int> >storeIndex;

        for(int i=0;i<nums.size();i++){
            storeIndex.push_back({nums[i],i});
        }

        sort(storeIndex.begin(), storeIndex.end());

        int n=nums.size();
           int i=0;
           int j=n-1;


           while(i<j){
            int sum=storeIndex[i].first + storeIndex[j].first;

            if(sum==target){
                return {storeIndex[i].second, storeIndex[j].second};

            } else if(sum<target){
                i--;
            }else{
              j--;
            }

           }
           
      
      return {};

      }
};

int main(){

  vector<int> nums={2,7,11,15};
  int target;


  cout<<"enter your target:"<<endl;
  cin>>target;

  /* cout<<"print the array"<<endl;

  for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<endl;
  } */


  Solution obj;
  vector<int> result= obj.twoSum(nums,target);
  
  if(!result.empty()){
    for(int i=0;i<result.size();i++){
        cout<<"the index are:"<<i<<endl;
    }
  }else{
    cout<<"no index are founds"<<endl;
  }
   

}