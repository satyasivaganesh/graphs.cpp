class Solution {
public:
    int dfs(vector<int> edge,map<int,int>&m)
    {
        if(m[edge[0]]!=0)
            return edge[0];
        else if(m[edge[1]!=0])
            return edge[1];
        else
        {
            m[edge[0]]+=1;
            m[edge[1]]+=1;
            return -1;
        }
        return 0;
        
    }
    int findCenter(vector<vector<int>>& edges) 
    {
        map<int,int>m;
        int x;
        for(auto it:edges)
        {
            x=dfs(it,m);
            if(x!=-1)return x;
        }
        
    
      return 0;  
        
    }
};
