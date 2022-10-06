void reverseStack(stack<int> &input, stack<int> &extra) {
    int x;
    while(!input.empty())
          {
        x=input.top();
        extra.push(x);
        input.pop();
        
    }
    input=extra;
    //Write your code here
}
