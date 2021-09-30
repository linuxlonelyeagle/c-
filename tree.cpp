#include <iostream>

using namespace std;

typedef struct node {
    char ch;
    struct node *lchild;
    struct node *rchild;
}node, *tree;


void  pre_create(tree * pt)
{
    char ch;
    cin >> ch;
    if (ch == '#')
    *pt = nullptr;
    else {
        *pt  = new(node);
        if (!pt)
        exit(0);
        (*pt)->ch = ch;
        pre_create(&(*pt)->lchild);
        pre_create(&(*pt)->rchild);
    }
}

void pre_scan(tree pt)
{
    if (!pt)
    return;
    cout<<pt->ch;
    pre_scan(pt->lchild);
    pre_scan(pt->rchild);
}

void mid_scan(tree pt)
{
    if (!pt) 
    return ;
    mid_scan(pt->lchild);
    cout << pt->ch;
    mid_scan(pt->rchild);
}

int main(void)
{
    tree a;
    pre_create(&a);
    pre_scan(a);
    mid_scan(a);
    return 0;
}
