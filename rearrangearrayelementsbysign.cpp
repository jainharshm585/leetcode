/*
LeetCode Problem: rearrange-array-elements-by-sign
Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
*/
# Code
```cpp []
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();

        int pos=0, neg=1;
        vector<int>ans(n);

        for(int i=0;i<n;i++){

            if(nums[i]>0){
            ans[pos]=nums[i];
            pos+=2;
            }

            if(nums[i]<0){
                ans[neg]=nums[i];
                neg+=2;
            }
        }
    return ans;
}
};
```