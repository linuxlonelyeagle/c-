#include <iostream>

using namespace std;

typedef struct node {
    int data;
    struct node* lchild;
    struct node* rchild;
}node, *tree;

void pre_create(tree *tp)
{
    int data;
    cin >> data;
    if (data==-1)
    return;
    else {
        auto newnode = new(node);
        newnode->data = data;  
        *tp = newnode;
        pre_create(&((*tp)->lchild)); 
        pre_create(&((*tp)->rchild));     
    }   
}

void mid_scan(tree pt)
{
    if (!pt)
    return;
    mid_scan(pt->lchild);
    cout << pt->data << " ";
    mid_scan(pt->rchild);
}

tree get(tree pt, int data)
{
    while (pt != nullptr || pt->data != data) {
        if (pt->data > data) 
            pt = pt->lchild;
        else if (pt->data < data) 
            pt = pt->rchild;
        cout << "hello wrold" << endl;
    }
    return pt == nullptr ? nullptr : pt;
}
void init(tree &tp)
{   
    tp = nullptr;
}

void insert(tree &pt, int data)
{
    if (pt == nullptr)  {
        pt = new(node);
        pt->data =data;
        pt->lchild = nullptr;
        pt->rchild = nullptr;
        return;
    }
    auto cur = pt;
    tree parent = nullptr;
    while (true) {
        parent = cur;
        if (parent->data > data) {
            cur = cur->lchild;
            if (cur == nullptr) {
                parent->lchild  = new(node);
                parent->lchild->data =data;
                parent->lchild->lchild = nullptr;
                parent->lchild->rchild = nullptr;
                return;                      
            }
        } else if (parent->data < data) {
            cur = cur->rchild;
            if (cur == nullptr) {
               parent->rchild = new(node);
               parent->rchild->data  = data;
               parent->rchild->lchild  = nullptr;
               parent->rchild->rchild = nullptr;
                return;
            }
        } else {
            return ;
        }
    }
}

int main(void)
{
    tree a;
    init(a);
    insert(a,10);
    insert(a,1);
    insert(a,2);
    insert(a,5);
    mid_scan(a);
    return 0;
}
