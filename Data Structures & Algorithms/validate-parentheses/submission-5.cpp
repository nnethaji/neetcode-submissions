class Solution {
public:
    bool isValid(string s) {
        stack<char> left_stack;
        if(s.size()<2){
            return false;
        }
        for(char eachchar : s){
        
           if(eachchar == '(' || eachchar == '[' || eachchar =='{'){
            left_stack.push(eachchar);
           }

           if(left_stack.empty()){
            return false;
           }

           if(eachchar == ')'){
            if(left_stack.top() == '(' ){
                left_stack.pop();
            }
            else{return false;}
           }

           if(eachchar == '}' ){
            if(left_stack.top() == '{'){
                left_stack.pop();
            }
            else{
                return false;
            }
           }
            if(eachchar == ']' ){
                if(left_stack.top() == '['){
                    left_stack.pop();
                }
                else{
                    return false;
                }
            }
        }
        return (left_stack.empty());
    }
};
