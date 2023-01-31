#include <iostream>
#include <stack>
#include <string>
using namespace std;
int minSwaps(string s) {

        stack<char> st;
        for(auto i:s) {
            if(i=='[')
                st.push(i);
            else {
                if(!st.empty() && st.top()=='[')
                    st.pop();
                else
                    st.push(i);
            }
        }

        int openingBracket = 0, closingBracket = 0;
        while(!st.empty()) {
            int top = st.top();
            if(top=='[') openingBracket++;
            else closingBracket++;
            st.pop();
        }

        return ((openingBracket+1)/2 + (closingBracket+1)/2)/2;

    }
int main(){}
