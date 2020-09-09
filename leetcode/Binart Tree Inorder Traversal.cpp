#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class TreeNode {
    public:
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}

  };

int main(){
    vector<int> inorder;
    stack<TreeNode*> s;
    TreeNode *l= new TreeNode(2);
    TreeNode *r= new TreeNode(3);
    TreeNode *root = new TreeNode(1, l, r);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    root->left->left->left = new TreeNode(8);
    root->left->left->right = new TreeNode(9);
    root->left->right->left = new TreeNode(10);


    while(root!=nullptr){
        s.push(root);
        root= root->left;
    }
    while(s.size()!=0){
        TreeNode *t = s.top();
        s.pop();
        inorder.push_back(t->val);
        if(t->right){
            root=t->right;
            while(root!=nullptr){
            s.push(root);
            root= root->left;
            }
        }

    }

    for(int a : inorder){
        cout<<a<<" ";
    }


return 0;
}
