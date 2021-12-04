#include<iostream>
#include "list_demo.h"

Solution::Solution(){
  Initialize();
}

bool Solution::Initialize(){
 return true;
}

void union(List &La, List &Lb){
  La_len = ListLength(La);
  Lb_len = ListLenght(Lb);
  for (int i=0;i<Lb_len; i++){
   GetElem(Lb,i,e);
   if(!LocateElem(La,e,equal)) ListInsert(La,++La_len,e);
  }

}



Solution::~Solution(){
}





