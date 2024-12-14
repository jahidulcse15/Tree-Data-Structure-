#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left=NULL;
    struct node *right=NULL;
};
struct node *root=NULL;
void insert_value(int val)
{
    struct node *tem=new struct node();
    tem->data=val;
    if(root==NULL){
        root=tem;
        return;
    }
    struct node *damy_node=root;
    while(1){
        if(damy_node->data>=val){
            if(damy_node->left==NULL){
                damy_node->left=tem;
                return ;
            }
            else{
                damy_node=damy_node->left;
            }
        }
        else{
            if(damy_node->right==NULL){
                damy_node->right=tem;
                return ;
            }
            else{
                damy_node=damy_node->right;
            }
        }
    }
}
void Traverse(struct node *root)
{
    if(root==NULL){
        return ;
    }
    Traverse(root->left);
    cout<<root->data<<" ";
    Traverse(root->right);
}
int main()
{
    insert_value(10);
    insert_value(20);
    insert_value(30);
    insert_value(100);
    insert_value(60);
    insert_value(70);
    insert_value(55);
    insert_value(45);
    Traverse(root);
}
