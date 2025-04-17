#include <iostream>
#include <vector>
using namespace std;
long long missing_number(vector<long long>nums,long long n)
{
long long total_sum = (n*(n+1))/2;
long long curr_sum =0;
for (long long i = 0; i < nums.size(); i++)
{
   curr_sum = curr_sum+nums[i];
}
long long missing_num = total_sum-curr_sum;
return missing_num;

}
 int main()
 {
    long long n;
    cin>>n;
    vector<long long>nums;
    for (long long i = 0; i < n-1 ; i++) {
        long long num;
        cin >> num;
        nums.push_back(num);
    }
    cout<< missing_number(nums,n);
    return 0;
 }