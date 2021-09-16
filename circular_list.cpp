#include <iostream>
#include <cstdlib>

using namespace std;

class circular_list {
    public:
    typedef struct node {
        int data;
        node *next;
    }Lnode, *Linklist;

    circular_list();
    ~circular_list() {
        cout << "123456" <<endl;
      free(head);
    }
    bool add_node();
    void scan_linklist();
    circular_list& operator+(circular_list& a);
    private:
    Linklist end;   //用来记录最后一个节点
    Linklist head;   // 用来记录头节点
};

circular_list::circular_list()
{
    head = (Linklist)malloc(sizeof(node));
    head -> next = head;
    end  = nullptr;   
}

circular_list& circular_list::operator+(circular_list &a)
{
    Linklist h = this->end->next;   // this 的头节点
    this->end->next = a.end->next->next;
    a.end->next = h;
    return *this;
}

void circular_list::scan_linklist()
{
    auto tp = head->next;
    while ( tp!= head) {
        cout << tp->data << " ";
        tp = tp->next;
    }
    cout << endl;
}

bool circular_list::add_node()
{
    Linklist a = head;
    int temp;
    cin >> temp;
    while (temp != -1) {
        Linklist  tp = (Linklist)malloc(sizeof(node));
        if (!tp) {
            return false;
        }
        tp->data = temp;
        a->next = tp;
        tp->next = head;   
        a = tp;
        end = tp;
        cin >> temp;
    }    
    return true;
}



int main(void) 
{
    circular_list a;
    circular_list b;
    a.add_node();
    b.add_node();
    a = a+b;
    a.scan_linklist();
    return 0;
}