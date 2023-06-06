#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        ans.push_back({1});
        if(numRows==1)return ans;
        ans.push_back({1,1});
        for(int i=2;i<numRows;i++)
        {
            vector<int>temp(i+1);
            temp[0]=1;
            temp[i]=1;
            vector<int> prev=ans[i-1];
            for(int j=1;j<temp.size()-1;j++)
            {
                temp[j]=prev[j]+prev[j-1];
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

int main()
{

}