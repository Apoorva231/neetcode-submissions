struct ListNode {
    int val;
    ListNode* next;

    ListNode(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

class MyLinkedList {
private:
    ListNode* head;
    int size;

public:
    MyLinkedList() {
        this->head = nullptr;
        size = 0;
        ListNode* ptr = head;
        while (ptr != nullptr) {
            size++;
            ptr = ptr->next;
        }
    }

    int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }

        ListNode* ptr = head;
        for (int i = 0; i < index; i++) {
            ptr = ptr->next;
        }

        return ptr->val;
    }

    void addAtHead(int val) {
        ListNode* newHead = new ListNode(val);
        newHead->next = head;
        head = newHead;
        size++;
    }

    void addAtTail(int val) {
        if (head == nullptr) {
            addAtHead(val);
            return;
        }
        ListNode* newTail = new ListNode(val);

        ListNode* ptr = head;

        while (ptr->next != nullptr) {
            ptr = ptr->next;
        }

        ptr->next = newTail;
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index > size) {
            return;
        }

        if (index <= 0) {
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }

        ListNode* newN = new ListNode(val);
        ListNode* ptr = head;

        for (int i = 0; i < index - 1; i++) {
            ptr = ptr->next;
        }

        ListNode* nex = ptr->next;
        ptr->next = newN;
        newN->next = nex;
        size++;
    }

    void deleteAtIndex(int index) {
        // implement
        if (index < 0 || index >= size) {
            return;
        }

        if (index == 0) {
            ListNode* temp = head;
            head = head->next;
            delete (temp);
            size--;
            return;
        }

        ListNode* ptr = head;
        for (int i = 0; i < index - 1; i++) {
            ptr = ptr->next;
        }
        ListNode* temp = ptr->next;
        ptr->next = ptr->next->next;
        delete (temp);

        size--;
    }
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