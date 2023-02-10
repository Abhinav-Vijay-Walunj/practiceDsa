//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        // unordered_map<char,int> mp;
        int arr[5]={0};
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'b')
            {
                arr[0]++;
            }
            else if(s[i] == 'a')
            {
                arr[1]++;
            }
            else if(s[i] == 'l')
            {
                arr[2]++;
            }
            else if(s[i] == 'o')
            {
                arr[3]++;
            }
            else if(s[i] == 'n')
            {
                arr[4]++;
            }
        }
        arr[2]=arr[2]/2;
        arr[3]=arr[3]/2;
        int ans=INT_MAX;
        for(int i=0;i<5;i++)
        {
            ans=min(ans,arr[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends