#ifndef LINK_LIST_H
#define LINK_LIST_H
#include<iostream>
#include<cstring>

typedef struct data
{
  int number;
  string name;
  string sex;
}data;

typedef struct listpoint{
  data *information;
  listpoint *next;
  listpoint *last;
  listpoint *branch;
}listpoint;

class Solution{
public:
  Solution();
  ~Solution();
  listpoint *create_normal_list(int n);
  listpoint *create_loop_list(int n);
  listpoint *create_random_branch_list(int n);
private:
  bool Initialize();
};
#endif 

