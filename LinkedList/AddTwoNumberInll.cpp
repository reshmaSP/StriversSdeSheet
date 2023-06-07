#include<bits/stdc++.h>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=NULL;
        ListNode* tail=NULL;
        int carr=0;
        // ListNode* newn=new 
        while(l1 != NULL && l2 != NULL)
        {
            int sum=l1->val +l2->val+carr;
            
            ListNode *newn=new ListNode(sum%10);
             carr=sum/10;
            l1=l1->next;
            l2=l2->next;
            if(ans==NULL)
            {
                ans=newn;
                tail=newn;
            }
            else{
                tail->next=newn;
                tail=tail->next;
            }
        }
        while(l1 != NULL)
        {
            int sum=l1->val+carr;
            ListNode* newn=new ListNode(sum%10);
            carr=sum/10;
            tail->next=newn;
            tail=newn;
            l1=l1->next;

        }
          while(l2 != NULL)
        {
            int sum=l2->val+carr;
            ListNode* newn=new ListNode(sum%10);
            carr=sum/10;
            tail->next=newn;
            tail=newn;
            l2=l2->next;

        }
        while(carr != 0)
        {
            ListNode *newn=new ListNode(carr%10);
            tail->next=newn;
            tail=newn;
            carr=carr/10;
        }
        return ans;
    }
};
int main()
{
}