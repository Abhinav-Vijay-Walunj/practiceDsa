//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        
        unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<N;i++)
        {
            mp[A[i]]++;
        }
        
        int fr[N]={0};
        for(int i=0;i<N;i++)
        {
            if(mp[A[i]] >= 1)
            {
                fr[i] = mp[A[i]];
                mp[A[i]]--;
                // fr[i]=1;
            }
            
        }
        
        for(int i=0;i<Q.size();i++)
        {
            int t=0;
            for(int j=Q[i][0];j <= Q[i][1];j++)
            {
                if(fr[j] == Q[i][2])
                {
                    t++;
                }
            }
            ans.push_back(t);
        }
        return ans;
        // code here
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends