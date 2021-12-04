#include "addTwoNumbers.h"
#include<iostream>

int main(){
  
  int num1[4]={1,3,5,7};
  int num2[5]={0,1,3,5,7};

  ListNode *l1=new ListNode(num1[0]),*last=l1;
  for (int i=1;i<4;i++){
   last->next = new ListNode(num1[i]);
   last = last->next;
   std::cout<<"last==>"<<last<<std::endl;
  }
  
  ListNode *l2=new ListNode(num2[0]);
  
  last=l2;
  
 for (int i=1;i<2;i++){
   last->next = new ListNode(num2[i]);
   last = last->next;
   std::cout<<"last==>"<<last<<std::endl;
  }
  
  Solution s;
  auto res=s.addTwoNumbers(l1,l2);
  while(res){
   std::cout<<res->val<<std::endl;
   res= res->next;
  }
  

return 0;
}
