#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& arr) {
        // int zeroCount=0;
        // int oneCount=0;
        // int twoCount=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==0)zeroCount++;
        //     else if(nums[i]==1)oneCount++;
        //     else twoCount++;
        // }
        // int i=0;
        // while(zeroCount--)nums[i++]=0;
        // while(oneCount--)nums[i++]=1;
        // while(twoCount--)nums[i++]=2;
        // return nums;
        int low=0;
        int mid=0;
        int high=arr.size()-1;
        while(mid<=high)
        {
            if(arr[mid]==0)
            {
                swap(arr[low],arr[mid]);low++;mid++;
            }
            else if(arr[mid]==1)
            {
                // swap(arr[mid],arr[high]
                mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
        // return arr;
    }
};
int main()
{
}