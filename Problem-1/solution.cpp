class Solution {
public:
    bool isValid(std::string s) {
        if (s.size() % 2 != 0)
            return false;
        
        std::stack<char> st;
        std::map<char, char> mp;
        mp['['] = ']';
        mp['('] = ')';
        mp['{'] = '}';
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ']' || s[i] == ')' || s[i] == '}') {
                if (st.empty() || mp[st.top()] != s[i])
                    return false;
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        
        return st.empty();
    }
};
