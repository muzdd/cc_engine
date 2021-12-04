#include<stdlib.h>
#include "link_list.h"

Solution::Solution(){
  Initialize();
}

bool Solution::Initialize(){
 return true;
}

Solution::~Solution(){
}

listpoint* Solution:create_normal_list(int n){

  listpoint *head,*normal,*end;
  /*
   *malloc memory for link 
   */
  head = (listpoint*)malloc(sizeof(listpoint));
  head->information=(data*)malloc(sizeof(data));

  end=head;
  for(int i=0;i<n;i++){
      normal=(listpoint*)malloc(sizeof(listpoint));
      normal->information=(data*)malloc(sizeof(data));
      /*
       * malloc memory for new node
       */
     std::cout<<"input the number:";
     std::cin>>normal->information->number;
     std::cout<<"input the name:";
     std::cin>>normal->information->name;
     std::cout<<"input the sex:";
     std::cin>>normal->information->sex;
     std::cout<<"===============>"<<std::endl;
     /*
      * input data for new node, note: just input data for last node, no input 
      * data for node
      */
     
     end->next=normal;//add new node for after end node
     normal->last=endl; // new node of last node is  end node
     end = normal;
    } 
    end->next=NULL;
    head->last=NULL  
    end=normal;
    
  }
  end->next=NULL;
  head->last=NULL;
  return head;
}

listpoint* Solution::create_loop_list(int n){

     listpoint *head,*normal,*end;
     head=(listpoint*)malloc(sizeof(listpoint));
     head->information=(data*)malloc(sizeof(data));
     end=head;
     for(int i=0;i<n;i++){
        normal=(listpoint*)malloc(sizeof(listpoint));
        normal->information=(data*)malloc(sizeof(data));
        std::cout<<"input the number: ";
        std::cin>>normal->information->number;
        std::cout<<"input the name: ";
        std::cin>>normal->information->name;
        std::cout<<"input the sex: ";
        std::cin>>normal->information->sex;
        std::cout<<"=============>"<<std::endl;
        end->next=normal;
        normal->last=end;
        end=normal;
     }

   end->next=head;
   head->last=end;
   return head;
}

listpoint* Solution::create_random_branch_list(int n){
     listpoint *search_point(listpoint *list,int n);
     listpoint *head;
     head=create_normal_list(n);
     listpoint *p,*bp;
     p=head;
     srand((int)(time(NULL)));
     int randnum;
     while((p=p->next)!=NULL){
      randnum=rand()%n+1;
      bp=search_point(head,randnum);
      p->branch=bp;
     }
 return head;
}


