class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> temp;
        for(int i=0;i<tokens.size();i++){
            string x=tokens[i];
            if(x =="+" || x =="-" || x =="/" || x =="*"){
                int b=temp.top();temp.pop();
                int a=temp.top();temp.pop();
                if(x=="+"){
                    temp.push(a+b);
                }
                else if(x=="-"){
                    temp.push(a-b);
                }
                else if(x=="/"){
                    temp.push(a/b);

                }else{
                    temp.push(a*b);
                }

            }else{
                temp.push(stoi(x));
            }
        }
        return temp.top();
    }
       
};