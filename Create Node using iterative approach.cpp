#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *left=NULL;
    struct node *right=NULL;
};
struct node *root=NULL;
void insert_value(int val)
{
    struct node *tem=NULL;
    tem=(struct node *)malloc(sizeof(struct node));
    tem->left=NULL;
    tem->right=NULL;
    tem->value=val;
    if(root==NULL){
        root=tem;
        return;
    }
    struct node *tem1=root;
    while(1){
        if(val<=tem1->value){
            if(tem1->left==NULL){
                tem1->left=tem;
                break;
            }
            else{
                tem1=tem1->left;
            }
        }
        else{
            if(tem1->right==NULL){
                tem1->right=tem;
                break;
            }
            else{
                tem1=tem1->right;
            }
        }
    }
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
