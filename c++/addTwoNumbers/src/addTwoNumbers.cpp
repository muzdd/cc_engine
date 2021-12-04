#include<iostream>
#include "addTwoNumbers.h"

Solution::Solution(){
  Initialize();
}

bool Solution::Initialize(){
 return true;
}

Solution::~Solution(){
}

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2){

  ListNode *node1=l1,*node2=l2;

  ListNode *head,*last,*node;

  int count=0;
  
  while (node1 && node2){
    node = new ListNode(node1->val+node2->val);
    if(count==0){
      head=node;
    }else{
      last->next=node;
    }
    last=node;
    count++;
    node1=node1->next;
    node2=node2->next;
  }

  node1=node1?node1:node2;
  
  while(node1){
   node = new ListNode(node1->val);
   if(count==0){
     head=node;
   }else{
     last->next=node;
   }
   last =node;
   count++;
   node1=node1->next;
  }

  node = head;
  int value=0;
  int cValue=0;
  while(node){
    node->val +=value;
    cValue = node->val/10;
    node->val=node->val%10;
    last=node;
    node=node->next;

  }  
  if(cValue !=0){
   last->next = new ListNode(cValue);
  }
  
  return head;
}




