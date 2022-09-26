class Solution {
public:
    int dis[26];
    int find(int i)
    {
        return dis[i] == i?i:find(dis[i]);
    }
    
    void Union(int i,int j)
    {
        dis[find(i)]=dis[find(j)];
    }
    bool equationsPossible(vector<string>& equations) {
        for(int i=0;i<26;i++)
        {
            dis[i]=i;
        }
        for(string equation : equations)
            if(equation[1] == '=') Union(equation[0]-97, equation[3]-97);
        for(string equation : equations)
            if(equation[1] == '!')
                if(find(equation[0]-97) == find(equation[3]-97)) return false;
        return true;
    }
};