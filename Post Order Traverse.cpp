#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *left=NULL,*right=NULL;
};
struct node *root=NULL;
struct node* insert_value(int val,struct node *root)
{
    if(root==NULL){
        struct node *tem= new struct node();
        tem->value=val;
        tem->left=NULL;
        tem->right=NULL;
        return tem;
    }
    if(val<=root->value){
        root->left=insert_value(val,root->left);
    }
    if(root->value<val){
        root->right=insert_value(val,root->right);
    }
    return root;
}
void Traverse(struct node *root)
{
    if(root==NULL){
        return ;
    }
    Traverse(root->left);
    Traverse(root->right);
    cout<<root->value<<" ";
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
