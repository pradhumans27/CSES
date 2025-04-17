#include <iostream>
#include<vector>
using namespace std;


long long solve(long long N)
{
   long long mod = 1e9 + 7;

    
    vector<long long> dp(N + 1, 0);

   
    dp[0] = 1;

 
    for (int i = 1; i <= N; i++) {
       
        for (int j = 1; j <= 6 && j <= i; j++) {
            dp[i] = (dp[i] + (dp[i - j])) % mod;
        }
    }
   
    return dp[N];
}
int main()
{
    long  long  N;
  cin>>N;

    cout << solve(N) << "\n";
}
