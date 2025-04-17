#include <iostream>
#include <vector>
using namespace std;
int fxn_call = 0;
int count_ways(int n ,vector<int>&dp)
{
    fxn_call++;
 if (n == 0)
 {
     return 1;
 }
 if (dp[n]!=-1)
 {
   return dp[n];
 }
 
 return  dp[n] = count_ways(n / 2,dp)+ count_ways(n / 3,dp);
   
}
int main()
{ int n;
    vector<int>dp(n+1,-1);
    cout<<"Enter the value";
    cin>>n;
    cout<<"Total ways "<<count_ways(n,dp)<<endl;
    cout<<fxn_call;
    return 0;
}