#include "BinaryTreePaths.h"
#include<iostream>

int main(){
    Solution s;
    std::vector<int> tree={1,3,5,7,14,21,33};
    TreeNode* root=s.build_tree(tree,7);
    std::cout<<"root"<<root<<std::endl;
    std::vector<std::string> res=s.binaryTreePaths(root);
    s.print_vec(res);

return 0;
}
