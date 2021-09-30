#include <vector>
#include <string>
#include <array>
#include <iostream>

using namespace std;
class hashmap{
    public:
    typedef struct node {
        string key;
        int value;
        struct node* next;
    }node,*pnode;
    hashmap();
    void add(string key , int value);
    int get(string key);
    void remove(string key);

    private:
    int getbucketindex(string key); 
    int numbuckets = 10;
    array<pnode,10> bucketarrays;
    int size = 0;
};

hashmap::hashmap()
{

    for (auto  i = 0;i < 10;i++) {
        bucketarrays[i] = new(node);
        bucketarrays[i]->next = nullptr;        
    }
}

int hashmap::getbucketindex(string key) 
{
    hash<string> h;
    int index = h(key) % numbuckets;
    return index;
}

void hashmap::add(string key, int value)
{
    int index = getbucketindex(key);
    pnode head = bucketarrays[index];
    head = head->next;
    while (head != nullptr) {
        if (head->key == key) {   // 如果健值相同
            head->value = value;   //直接改变
            return;
        }
        head = head->next;                
    }
    pnode newnode = new(node);
    newnode->value = value;
    newnode->key = key;
    newnode->next = bucketarrays[index]->next;
    bucketarrays[index]->next = newnode;
    size++;    
}

int hashmap::get(string key)
{
    int index = getbucketindex(key);
    auto it = bucketarrays[index]->next;
    while (it) {
        if (it->key == key) {
            return it->value;            
        }
    }
    return -1;    
}


void hashmap::remove(string key)
{
    int index = getbucketindex(key);
    auto head = bucketarrays[index]->next;
    auto pre = bucketarrays[index];
    while (head) {
        if (head->key == key) {
            pre->next = head->next;
            delete head;
            size--;
            break;
        }
        pre = head;
        head->next;
    }
}

int main()
{
    hashmap a;
    a.add("yang",10);
    a.add("zhang",5201314);
    cout << a.get("yang") << endl;
    cout << a.get("zhang") << endl;
    a.remove("yang");
    cout << a.get("yang") << endl;
    return 0;
}