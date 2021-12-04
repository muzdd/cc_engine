#include<iostream>
#include<sstream>
#include "BinaryTreePaths.h"
#include<queue>
#include<string>
Solution::Solution(){
  Initialize();
}

bool Solution::Initialize(){
 return true;
}

Solution::~Solution(){
}

TreeNode* Solution::build_tree(std::vector<int> t, int num){
  std::queue<TreeNode*> q;
  TreeNode* root = new TreeNode(t[0]);
  q.push(root);
  int nums=1;
  while(nums<num){
    TreeNode* temp=q.front();
    q.pop();
    if(nums <= num){
      temp->left = new TreeNode(t[nums++]);
      q.push(temp->left);
      std::cout<<" left value====>:"<<temp->left<<std::endl;
    }
    if(nums <num){
      temp->right = new TreeNode(t[nums++]);
      q.push(temp->right);
      std::cout<<"right value====>"<<temp->right<<std::endl;
    }
  }
return root;
}




void Solution::findpath(TreeNode* root, std::vector<std::string>& vs, std::string path){
   if(root==NULL){
    std::cout<<"Tree Node Is NULL!!"<<std::endl;
    return; 
   }   
   std::stringstream ss;
   ss<<root->val;
   std::cout<<"root value"<<root->val<<std::endl;
   path = path + ss.str();

  //判断是否为叶子节点
  if(root->left==NULL && root->right==NULL){
    vs.push_back(path);
  }
  std::string tpath=path;
  std::cout<<"tmp path is:"<<tpath<<std::endl;
  if(root->left !=NULL){
    path=path + "->";
    findpath(root->left,vs,path);
  }
  if(root->right !=NULL){
    tpath=tpath+"->";
    findpath(root->right,vs,tpath);
  }

}


std::vector<std::string> Solution::binaryTreePaths(TreeNode* root){

  std::vector<std::string> vs;
  if(root!=NULL){
    std::string tmp="";
    findpath(root,vs,tmp);
  }

return vs;
}

int  Solution::print_vec(std::vector<std::string> res){
  if(res.size()==0){
    std::cout<<"vector result is error!!"<<std::endl;
    return -1;
  }
  for(int i=0;i<res.size();i++){
   std::cout<<"i:"<<i<<"\n"<<"res:"<<res[i]<<std::endl;
  }

return 0;

} 
