#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr){}

LinkedList::LinkedList(int* array, int len){
    head=nullptr;
    for (int i=0;i<len;i++){
        insertPosition(i+1, array[i]);
    }
}

LinkedList::~LinkedList(){
    Node* current=head;
    while (current!=nullptr){
        Node* temp=current;
        current=current->next;
        delete temp;
    }
}

void LinkedList::insertPosition(int pos, int newNum){
    Node* newNode=new Node(newNum);
    
    if (pos<=1 || head==nullptr){
        newNode->next=head;
        head=newNode;
    }else{
        Node* current=head;
        for (int i=1; i<pos-1 && current->next!=nullptr;i++){
            current=current->next;
        }
        newNode->next=current->next;
        current->next=newNode;
    }
}

bool LinkedList::deletePosition(int pos){
    if (head==nullptr){return false;}
    
    if (pos==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return true;
    }

    Node* current=head;
    for (int i=1; i<pos-1 && current->next != nullptr;i++){
        current=current->next;
    }

    if (current->next==nullptr){return false;}
    
    Node* temp=current->next;
    current->next=current->next->next;
    delete temp;
    return true;
}

int LinkedList::get(int pos){
    Node* current=head;
    for (int i=1; current!=nullptr && i < pos;i++){
        current=current->next;
    }

    if (current==nullptr || pos < 1){
        return std::numeric_limits<int>::max();
    }
    return current->data;
}

int LinkedList::search(int target){
    Node* current=head;
    int pos=1;

    while (current!=nullptr){
        if (current->data==target){
            return pos;
        }
        current=current->next;
        pos++;
    }

    return -1;
}

void LinkedList::printList(){
    if (head ==nullptr) return;

    Node* current=head;
    std::cout << "[";
    while (current!=nullptr){
        std::cout << current->data;
        if (current->next != nullptr){
            std::cout << " ";
        }
        current=current->next;
    }
    std::cout << "]" << std::endl;
}
