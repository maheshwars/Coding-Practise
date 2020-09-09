#include<iostream>

using namespace std;

class Node{
public:
int val;
Node *left, *right;

};
Node *newNode(int data)
{
    Node *temp = new Node;
    temp->val = data;
    temp->left = temp->right = NULL;
    return temp;
}

void printNode(Node *root){

if(root==NULL)
    return;
printNode(root->left);
if((root->left!=NULL && root->right==NULL) || root->left==NULL && root->right!=NULL)
    cout<<root->val<<" ";
printNode(root->right);

}

int sumNode(Node * root, int &sum){

    if(root==NULL)
        return 0;
    cout<<sum<<"+"<<root->val<<" ";
    sum += root->val;

    sumNode(root->left, sum);
    sumNode(root->right,sum);
    return sum;
}
int main(){
    int sum=0;
   Node *root = newNode(1);
   root->left = newNode(2);
   root->right =newNode(3);
   root->left->left =newNode(4);
   root->left->right =newNode(5);
   root->right->left =newNode(6);
   root->right->right =newNode(7);
   root->left->left->left =newNode(8);
   root->left->right->left =newNode(9);
   root->left->right->right =newNode(10);
   root->right->left->right =newNode(11);
 //printNode(root);
   sum = sumNode(root,sum );
    cout<<sum;

return 0;
}
