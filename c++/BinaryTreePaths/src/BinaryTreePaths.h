#ifndef BINARY_TREE_PATHS_H
#define BINARY_TREE_PATHS_H
#include<iostream>
#include<vector>

struct TreeNode{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution{
public:
  Solution();
  ~Solution();
  TreeNode* build_tree(std::vector<int> t, int num);
  std::vector<std::string> binaryTreePaths(TreeNode* root); 
  void findpath(TreeNode* root, std::vector<std::string>& vs, std::string path);
  int  print_vec(std::vector<std::string> res);
private:
  bool Initialize();
  
};
#endif 

