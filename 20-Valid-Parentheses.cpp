class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;

        for(auto i:s){
            if(i == '(' || i == '{' || i == '['){
                brackets.push(i);
            }
            else if(i == ')' || i == '}' || i == ']'){
                if(!brackets.empty() && 
                    ((i == ')' && brackets.top() == '(') ||
                    (i == '}' && brackets.top() == '{') ||
                    (i == ']' && brackets.top() == '['))) {
                    brackets.pop();
                }
                else{
                    return false;
                }
            }
        }
       
        return brackets.empty();    
    }
};