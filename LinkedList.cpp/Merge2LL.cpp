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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        vector<int>v;
        ListNode* l1=list1;
        ListNode* l2=list2;
        while(l1!=nullptr)
        {
            v.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=nullptr)
        {
            v.push_back(l2->val);
            l2=l2->next;
        }
        sort(v.begin(), v.end());
        if(v.empty()) return nullptr;
        ListNode* head=new ListNode(v[0]);
        ListNode* mover=head;
        for(int i=1;i<v.size();i++)
        {
            mover->next=new ListNode(v[i]);
            mover=mover->next;
        }
        return head;
    }
};