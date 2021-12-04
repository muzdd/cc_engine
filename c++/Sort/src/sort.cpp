#include<iostream>
#include "addBinary.h"

Solution::Solution(){
  Initialize();
}

bool Solution::Initialize(){
 return true;
}

Solution::~Solution(){
}

std::string  Solution::addBinary(std::string a, std::string b){

  int alen=a.size();
  int blen=b.size();
  bool carry = false;
  std::string res;
  while (alen>0 || blen>0){
    int abit = alen<=0 ? 0 : a[alen-1]-'0';
    int bbit = blen<=0 ? 0 : b[blen-1]-'0';
    int cbit = carry ? 1 : 0;
    res.insert(res.begin(), '0'+((abit+bbit+cbit)&1));

    carry=(abit+bbit+cbit);
    alen--;
    blen--;
  }  

  if(carry){
    res.insert(res.begin(),'1');
  }

  return res;
}




