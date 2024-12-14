#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *left=NULL;
    struct node *right=NULL;
};
struct node *root=NULL;
struct node* insert_value(int val,struct node *root1)
{
    if(root1==NULL){
        struct node *newNode= new struct node();
        newNode->value=val;
        return newNode;
    }
    else if(val<=root1->value){
        root1->left=insert_value(val,root1->left);
    }
    else{
        root1->right=insert_value(val,root1->right);
    }
    return root1;
}
void Traverse(struct node *root)
{
    if(root==NULL){
        return ;
    }
    cout<<root->value<<" ";
    Traverse(root->left);
    Traverse(root->right);
}
int main()
{
    root=insert_value(10,root);
    root=insert_value(20,root);
    root=insert_value(30,root);
    root=insert_value(100,root);
    root=insert_value(60,root);
    root=insert_value(70,root);
    root=insert_value(55,root);
    root=insert_value(45,root);
    Traverse(root);
}
