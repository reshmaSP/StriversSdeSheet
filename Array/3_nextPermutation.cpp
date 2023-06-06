#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int peak=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                peak=i+1;
                break;
            }
        }
        if(peak == -1)
        {
            sort(nums.begin(),nums.end());
            return;
        }
        int ele=-1;
        int j=0;
        for(int j=n-1;j>=peak;j--)
        {
            if(nums[j]>nums[peak-1] && nums[j]<=nums[peak]){
                ele=j;break;
            }
        }
        swap(nums[ele],nums[peak-1]);
        sort(nums.begin()+peak,nums.end());
        // return nums
    }
};
int main()
{
}