class Solution {
public:
    bool isValid(std::string s) {
        std::map<char, char> brackets = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
        std::stack<char> input;
        
        for(const auto & it : s){
            if (it == '(' || it == '{' || it == '['){
                input.push(it);
            }
            else if(it == ')' || it == '}' || it == ']'){
                if(input.empty() || brackets[input.top()] != it){
                    return false;
                }
                input.pop();
            }
        }
        
        return input.empty();
    }
};