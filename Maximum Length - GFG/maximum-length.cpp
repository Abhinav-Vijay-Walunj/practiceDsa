//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int solve(int a, int b, int c) {
        int m1,m2,m3;
        if(a>b && a>c)
        {
            m1=a;
            m2=b;
            m3=c;
        }
        else if(b>a && b>c)
        {
            m1=b;
            m2=a;
            m3=c;
        }
        else
        {
            m1=c;
            m2=a;
            m3=b;
        }
        if(m1 > 2*(m2+m3))
        {
            return -1;
        }
        return (a+b+c);
        
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        Solution ob;
        int ans = ob.solve(a, b, c);
     

        cout <<  ans << "\n";
    }
    return 0;
}
// } Driver Code Ends