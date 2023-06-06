#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={4,2,3,1};
    int peak=-1;
    int n=arr.size();
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]<arr[i-1])
        {
            peak=i;break;
        }
    }
    if(peak==-1)
    {
        sort(arr.begin(),arr.end(),greater<int>());
    }
    int justSmaller=-1;
    for(int i=n-1;i>=peak;i--)
    {
        if(arr[i]<arr[peak-1])justSmaller=i;break;
    }
    swap(arr[peak-1],arr[justSmaller]);
    sort(arr.begin()+peak,arr.end(),greater<int>());
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
    cout<<" prev permutation series\n";
     arr={4,3,2,1};
    while(prev_permutation(arr.begin(),arr.end()))
    {
        for(auto  i: arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}