/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* r=NULL,*pnode=NULL,*pnext=NULL;
    ListNode* a1=l1;
    ListNode* a2=l2;
    int cat=0,re;
    if(a1==NULL&&a2==NULL)
    {
      r=new ListNode(0);
      return r;
    }
    if(a1==NULL)
    {
      return a2;
    }
    if(a2==NULL)
    {
      return a1;
    }
    for(;a1!=NULL&&a2!=NULL;a1=a1->next,a2=a2->next)
    {
      re=a1->val+a2->val+cat;
      cat=re/10;
      pnode=new ListNode(re%10);
      if(r==NULL)
      {
        r=pnext=pnode;
      }
      else
      {
        pnext->next=pnode;
        pnext=pnode;
      }
    }
    if(a1==NULL&&a2!=NULL)
    {
      while(a2!=NULL)
      {
        if(cat==0)
        {
          pnext->next=a2;
          break;
        }
        else
        {
          re=cat+a2->val;
          pnode=new ListNode(re%10);
          cat=re/10;
          pnext->next=pnode;
          pnext=pnode;
          a2=a2->next;
        }
      }
    }
    if(a1!=NULL&&a2==NULL)
    {
      while(a1!=NULL)
      {
        if(cat==0)
        {
          pnext->next=a1;
          break;
        }
        else
        {
          re=cat+a1->val;
          pnode=new ListNode(re%10);
          cat=re/10;
          pnext->next=pnode;
          pnext=pnode;
          a1=a1->next;
        }
      }
    }
    if(a1==NULL&&a2==NULL&&cat==1)
    {
      pnode=new ListNode(1);
      pnext->next=pnode;
    }
    return r;
    }
};
