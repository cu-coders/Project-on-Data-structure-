
class Solution {
public:
bool isValid(string s) {

    stack<char> stk;
    
    for(int i=0;s[i]!='\0';i++){
        
        if(s[i]==')' || s[i]==']' || s[i]=='}'){
            if(stk.size()==0){
                return false;
            }
        }
        
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            stk.push(s[i]);
        }
        
        
        else if(s[i]==')' && stk.top()=='('){
            
            stk.pop();
            
        }
        
        else if(s[i]=='}' && stk.top()=='{'){
            
            stk.pop();
            
        }
        
        else if(s[i]==']' && stk.top()=='['){
            
            stk.pop();
            
        }
        else return false;
        
        
        
    }
    
    if(stk.size()==0){
        return true;
    }
    return false;
    
}
};
