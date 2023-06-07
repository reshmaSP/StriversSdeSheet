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
    int len(ListNode* head)
    {
        int l=0;
        while(head != NULL)
        {
            head=head->next;
            l++;
        }
        return l;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL && n==1)return NULL;
        int l=len(head);
        // cout<<l<<"<-- ";
        ListNode* prev= NULL;
        ListNode* curr=head;
        for(int i=0;i<(l-n);i++){
            prev=curr;
            curr=curr->next;
        }
        // cout<<prev->val;
        if(prev)prev->next=curr->next;
        else{ head=head->next;}
        delete curr;
        return head;
    }
};
int main()
{
}