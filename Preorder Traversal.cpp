#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left=NULL,*right=NULL;
};
struct node *root=NULL;
struct node* insert_value(int val,struct node *root)
{
    if(root==NULL){
        struct node *tem= new struct node();
        tem->data=val;
        tem->left=NULL;
        tem->right=NULL;
        return tem;
    }
    if(val<=root->data){
         root->left=insert_value(val,root->left);
    }
    if(root->data<val){
        root->right=insert_value(val,root->right);
    }
    return root;
}
void Traverse(struct node *root)
{
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
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
