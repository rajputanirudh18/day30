class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int x;
        if(!output.empty()){
            x=output.top();
            output.pop();
        }
        else
        {
            while(input.size()>0){
                int x=input.top();
                output.push(x);
                input.pop();
            }
            x=output.top();
          output.pop();
           
        }
        return x;
       
    }
    
    int peek() {
            if(!output.empty())
           return output.top();
        else
        {
            while(input.size()>0){
                int x=input.top();
                output.push(x);
                input.pop();
            }
             return output.top();
        }
    }
    
    bool empty() {
     while(input.size()>0)
     {
         int x=input.top();
         output.push(x);
         input.pop();
     }
        return output.empty();
    }
};
