#include <iostream>

class DNode {
public:
    int data;
    DNode* next;
    DNode* prev;

    DNode(int data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DoublyLinkedList {
private:
    DNode* head;
public:
    DoublyLinkedList() {
        head = nullptr;
    }

    void append(int data) {
        DNode* newNode = new DNode(data);
        if (!head) {
            head = newNode;
            return;
        }
        DNode* last = head;
        while (last->next) {
            last = last->next;
        }
        last->next = newNode;
        newNode->prev = last;
    }

    void printList() {
        DNode* current = head;
        while (current) {
            std::cout << current->data << " <-> ";
            current = current->next;
        }
        std::cout << "NULL" << std::endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.append(1);
    dll.append(2);
    dll.append(3);
    dll.printList(); 

    return 0;
}
