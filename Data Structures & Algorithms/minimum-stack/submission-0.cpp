class Node{
public:
    Node* next;
    int data;
    Node(int val){
        this -> next = nullptr;
        this -> data = val;
    }
};

class MinStack {
private:
    Node* head;

public:
    MinStack() {
        head = nullptr;
    }
    
    void push(int val) {
        Node* newNode = new Node(val);
        newNode -> next = head;
        head = newNode;
    }
    
    void pop() {
        if(head == nullptr) return;
        Node* temp = head;
        head = head -> next;
        delete temp;
    }
    
    int top() {
        return head -> data;
    }
    
    int getMin() {
        int MinVal = INT_MAX;
        Node* temp = head;
        while(temp != nullptr){
            MinVal = min(temp -> data, MinVal);
            temp = temp -> next;
        }
        return MinVal;
    }
};
