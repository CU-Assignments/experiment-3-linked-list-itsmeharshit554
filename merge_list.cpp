#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr && list2==nullptr)
        {
            return nullptr;
        }
        else if(list1==nullptr)
        {
            return list2;
        }
        else if(list2==nullptr)
        {
            return list1;
        }
        
        ListNode* newNode= new ListNode(-1); 
        ListNode* temp=newNode;
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                temp->next = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }
        temp->next = list1 ? list1 : list2;
        return newNode->next;
    }
};