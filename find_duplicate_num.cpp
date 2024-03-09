#include<bits/stdc++.h>
using namespace std;
int duplicate(vector<int>nums){
            // method 1
    // sort(nums.begin(),nums.end());
    // for(int i=0;nums.size()-1;i++ ){
    //     if(nums[i]==nums[i+1]){
    //         return nums[i];
    //     }
    // }
    // return -1;
            // method 2
    // while(nums[0]!=nums[nums[0]]){
    //     swap(nums[0],nums[nums[0]]);
    // }
    // return nums[0];
            // method 3
    int ans=0;
    for(int i=0;i<nums.size();i++){
        int index=abs(nums[i]);
        // check already visited
        if(nums[index]<0){
            ans=index;
            break;
        }
        // visited
        nums[index]*=-1;
    }
    return ans;
}
int main()
{
    vector<int>nums={3,1,3,4,2};
    
    int res=duplicate(nums);
    cout<<res;

return 0;
}