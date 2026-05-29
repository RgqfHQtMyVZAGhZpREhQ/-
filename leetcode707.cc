class MyLinkedList {
public:
    struct LinkNode {
        int val;
        LinkNode* next;
        LinkNode(int val):val(val),next(nullptr){}
    };
    MyLinkedList() {
        dummyhead = new LinkNode(0);
        _size = 0;
    }
    
    int get(int index) {
        if(index >= _size) return -1;
        LinkNode* cur = dummyhead;
        while (index >= 0)
        {
            cur = cur->next;
            index--;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        LinkNode* newnode = new LinkNode(val);
        newnode->next = dummyhead->next;
        dummyhead->next = newnode;
        _size++;
    }
    
    void addAtTail(int val) {
        LinkNode* cur = dummyhead;
        while (cur->next != nullptr)
        {
            cur = cur->next;
        }
        LinkNode *newnode = new LinkNode(val);
        cur->next = newnode;
        _size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index > _size) return;
        LinkNode* cur = dummyhead;
        while (index > 0)
        {
            cur = cur->next;
            index--;
        }
        LinkNode* newnode = new LinkNode(val);
        newnode->next = cur->next;
        cur->next = newnode;
        _size++;

    }
    
    void deleteAtIndex(int index) {
        if (index >= _size) return;
        LinkNode* cur = dummyhead;
        while (index > 0)
        {
            cur = cur->next;
            index--;
        }
        LinkNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        _size--;
        
    }
private:
    int _size;
    LinkNode* dummyhead;

};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
