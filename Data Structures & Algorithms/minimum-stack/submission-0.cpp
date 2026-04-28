class MinStack {
public:

    stack<int> stk;

    MinStack() {}
    
    void push(int val) {
        stk.push(val);
    }
    
    void pop() {
        stk.pop();
    }
    
    int top() {
       return stk.top();  
    }
    
    int getMin() {

        if (stk.empty()) {
            throw std::runtime_error("Stack is empty");
        }

        stack<int> temp = stk;
        set<int> tempStk;

        while (!temp.empty()) {
            tempStk.insert(temp.top());
            temp.pop();
        }

        return *tempStk.begin();;
        
    }
};
