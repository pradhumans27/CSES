#include <iostream>
#include <vector>
using namespace std;
// int helper(int itr, int max_cost, vector<int>& prices, vector<int>& pages) {
//     if (itr == 0 || max_cost == 0) {
//         return 0; 
//     }

//     int include = 0, exclude = 0;

//     if (max_cost >= prices[itr - 1]) {
//         include = pages[itr - 1] + helper(itr - 1, max_cost - prices[itr - 1], prices, pages);
//     }
//     exclude = helper(itr - 1, max_cost, prices, pages);

//     return max(include, exclude); 
// }

// long long using_dp(int itr ,long long max_cost, vector<long long>&prices,vector<long long>&pages,vector<vector<long long>>&dp)
// {
//     if (itr == 0 || max_cost == 0) {
//         return 0; 
//     }

//     long long include = 0, exclude = 0;
//     if (dp[itr][max_cost] != -1)
//     {
//     return dp[itr][max_cost];
//     }
    

//     if (max_cost >= prices[itr - 1]) {
//         include = pages[itr - 1] + using_dp(itr - 1, max_cost - prices[itr - 1], prices, pages,dp);
//     }
//     exclude = using_dp(itr - 1, max_cost, prices, pages,dp);

//     return dp[itr][max_cost] = max(include, exclude); 
// }
long long using_tabulation(long long n, long long max_cost, vector<long long>& prices, vector<long long>& pages) {
    vector<long long> dp(max_cost + 1, 0);

    for (long long i = 0; i < n; i++) {
        for (long long j = max_cost; j >= prices[i]; j--) {
            dp[j] = max(dp[j], pages[i] + dp[j - prices[i]]);
        }
    }

    return dp[max_cost];
}
int main() {
   
    long long n, max_cost;
cin >> n >> max_cost;
vector<vector<long long>> dp(n + 1, vector<long long>(max_cost + 1, -1));

    vector<long long> prices(n);
    for (long long i = 0; i < n; i++) {
        cin >> prices[i];
    }

    vector<long long> pages(n);
    for (long long i = 0; i < n; i++) {
        cin >> pages[i];
    }

    
    cout << using_tabulation(n, max_cost, prices, pages) << endl;

    return 0;
}