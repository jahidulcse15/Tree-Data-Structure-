#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left=NULL,*right=NULL;
};
struct node *root=NULL;
void insert_node(int val)
{
    struct node *tem=(struct node *)malloc(sizeof(struct node));
    tem->data=val;
    tem->left=NULL;tem->right=NULL;
    if(root==NULL){
        root=tem;
        return;
    }
    struct node *damy=root;
    while(1){
        if(damy->data>val){
            if(damy->left==NULL){
                damy->left=tem;
                return;
            }
            else{
                damy=damy->left;
            }
        }
        else{
            if(damy->right==NULL){
                damy->right=tem;
                return;
            }
            else{
                damy=damy->left;
            }
        }
    }
}
void Traverse(struct node *root)
{
    queue<struct node*>q;
    q.push(root);
    while(!q.empty()){
        struct node *tem=q.front();
        q.pop();
        if(tem->left!=NULL) q.push(tem->left);
        if(tem->right!=NULL) q.push(tem->right);
        cout<<tem->data<<" ";
    }
}
int main()
{
    insert_node(5);
    insert_node(3);
    insert_node(6);
    insert_node(1);
    insert_node(4);
    Traverse(root);
}
