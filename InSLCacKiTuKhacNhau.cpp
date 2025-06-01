#include<iostream>
#include<stack>
using namespace std;
int main(){
    string s;
    getline (cin, s);
    s = s + '@';
    stack <char> st;
    string str = "";
    for (int i = 0; i < s.length(); i++){
        if (st.empty() || st.top() == s[i]){
            st.push(s[i]);
        } else {
            int count = 0;
            str += st.top();
            while (!st.empty()){
                count++;
                st.pop();
            }
            str += to_string(count);
            st.push(s[i]);
        }
    }
    cout << str;
    return 0;
}
