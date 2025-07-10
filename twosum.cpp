/*
LeetCode Problem: Two Sum
Link:https://leetcode.com/problems/two-sum/description/
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order
*/
#include<iostream>
#include<vector>
#include<unordered_map>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tgt) 
    {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            int comp=tgt-nums[i];
            if(mp.find(comp)!=mp.end())
            {
                return {mp[comp],i};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }
};
