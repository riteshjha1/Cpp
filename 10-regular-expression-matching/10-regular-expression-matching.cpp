class Solution {
public:
    
    bool solve(string s, string p, int n, int m, vector<vector<int>>& memo){
        if(n==0 and m==0){
            return true;
        }
        if(n==0){
            if(p[m-1]=='*'){
                return memo[n][m] = solve(s, p, 0, m-2, memo);
            }
            else{
                return false;
            }
        }
        if(m==0){
            return false;
        }
        if(memo[n][m] != -1){
            return memo[n][m];
        }
        
        if(p[m-1]=='.' or s[n-1]==p[m-1]){
            return memo[n][m] = solve(s, p, n-1, m-1, memo);
        }
        else if(p[m-1]=='*'){
            if(p[m-2]=='.' or p[m-2] == s[n-1]){
                return memo[n][m] = solve(s, p, n, m-2, memo) or solve(s, p, n-1, m, memo);
            }
            else{
                return memo[n][m] = solve(s, p, n, m-2, memo);
            }
        }
        else{
            return memo[n][m] = false;
        }
    }
    
    
    bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<vector<int>> memo(n+1, vector<int>(m+1, -1));
        
        return solve(s, p, n, m, memo);
    }
};