class BrowserHistory {
    struct Node {
       public:
        Node* prev;
        Node* next;
        string val;
        Node(string val, Node* prev = nullptr, Node* next = nullptr)
            : val(val), prev(prev), next(next) {}
    };

    Node* curr;

   public:
    BrowserHistory(string homepage) {
        curr = new Node(homepage);
    }

    void visit(string url) {
        curr -> next = new Node(url, curr, nullptr);
        curr = curr->next;
    }

    string back(int steps) {
        while(curr -> prev != nullptr && steps > 0){
            curr = curr -> prev;
            steps--;
        }
        return curr -> val;
    }

    string forward(int steps) {
        while(curr -> next != nullptr && steps > 0){
            curr = curr -> next;
            steps--;
        }
        return curr -> val;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */