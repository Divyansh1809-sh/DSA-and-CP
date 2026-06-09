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
    ListNode* middleNode(ListNode* head)
    {
        vector<int>v;
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            cnt++;
            temp=temp->next;
        }
        int mn=cnt/2;
        temp=head;
        ListNode* nn;
        int c=0;
        while(temp)
        {
            if(c>=mn)
            {
                nn=temp;
                return nn;
            }
            temp=temp->next;
            c++;
        }
        return NULL;
    }
};