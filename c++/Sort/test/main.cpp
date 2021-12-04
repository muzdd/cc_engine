#include "addBinary.h"
#include<iostream>

int main(){
  
   std::string a="123";
   std::string b="12";

   Solution s;
   s.addBinary(a,b);
   std::cout<<"========>"<<s.addBinary(a,b)<<std::endl;

return 0;
}
