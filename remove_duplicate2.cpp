#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
         if(head==nullptr ||head->next==nullptr)
        {
            return head;
        }
        ListNode* curr=head;
        map<int,int> mp;
        while(curr!=nullptr)
        {
            mp[curr->val]+=1;
            curr=curr->next;
        }
        ListNode* start=nullptr;
        ListNode* tail=nullptr;
        for(auto x:mp)
        {
            if(x.second==1)
            {
                ListNode* newNode=new ListNode(x.first);
                if(start==nullptr)
                {
                    start=newNode;
                    tail=newNode;
                }
                else
                {
                    tail->next=newNode;
                    tail=tail->next;
                }
            }
        }
        return start;

    }
};