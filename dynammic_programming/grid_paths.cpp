#include<iostream>
#include<vector>
using namespace std;

int grid_paths(vector<vector<char>>& grid, int n, int i, int j, vector<vector<int>>& dp) {
    int mod = 1e9 +7;
    if (grid[0][0]=='*')
    {
       return 0;
    }
    if (i == n - 1 && j == n - 1 && grid[i][j]=='*') {
        return 0;
    }
    if (i == n - 1 && j == n - 1) {
        return 1;
    }

    if (grid[i][j] == '*') {
        return 0;
    }
   
    
    
    
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    int right = 0, down = 0;
    if (j + 1 < n) {
        right = grid_paths(grid, n, i, j + 1, dp)%mod;
    }
    if (i + 1 < n) {
        down = grid_paths(grid, n, i + 1, j, dp)%mod;
    }
    return dp[i][j] = (right + down)%mod; 
}


int main()
{
    int n;
    cin>>n;
    vector<vector<char>>grid(n,vector<char>(n));
    vector<vector<int>>dp(n,vector<int>(n,-1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    cout<<grid_paths(grid,n,0,0,dp);
    
    return 0;
}   
