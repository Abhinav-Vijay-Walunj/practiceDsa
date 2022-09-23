class Solution {
public:
    
    bool ischar(char c)
    {
        return c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u' || c == 'A' ||c == 'E' ||c == 'I' ||c == 'O' ||c == 'U';
    }
    string reverseVowels(string s) {
        int st=0,e=s.size()-1;
        
        while(st<e)
        {
            while(st<e && !ischar(s[st]))
            {
                st++;
            }
            while(e >= 0 && !ischar(s[e]))
            {
                e--;
            }
            if(st<e)
            {
                swap(s[st++],s[e--]);
            }
        }
        return s;
        /*
        string ans="";
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' || s[i] ==             'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U')
            {
                st.push(s[i]);
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u' || s[i] ==             'A' ||s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U')
            {
                ans+=st.top();
                st.pop();
            }
            else
            {
                ans+=s[i];
            }
        }
        return ans;*/
        
    }
};