class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c : s){
            //opening
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            //closing
            else {
                if(st.empty())
                return 0;
                //)
                else if(c == ')' ){
                    if(st.top() != '(' ){
                        return false;
                    }
                    else
                        st.pop();

                }
                //}
                else if(c == '}' ){
                    if(st.top() != '{' ){
                        return false;
                    }
                    else
                        st.pop();

                }
                // ]
                else if(c == ']' ){
                    if(st.top() != '[' ){
                        return false;
                    }
                    else
                        st.pop();

                }
            }
        }
        return st.empty();
    }
};