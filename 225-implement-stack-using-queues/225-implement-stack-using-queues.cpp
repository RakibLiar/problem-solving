class MyStack {
public:
    queue<int> q1, q2;
    MyStack() {
        
    }
    
    int getTop() {
        while(q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        return q1.front();
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int a = getTop();
        q1.pop();
        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        return a;
    }
    
    int top() {
        int a = getTop();
        q2.push(q1.front());
        q1.pop();
        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        return a;
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */