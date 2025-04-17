#include <iostream>
#include <vector>
using namespace std;
vector<long long> weird_algo(long long n)
{
    vector<long long> res;
    res.push_back(n);
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            res.push_back(n);
        }
        else
        {
            n = (n * 3) + 1;
            res.push_back(n);
        }
    }

    return res;
}

int main()
{

    long long n;
    cin >> n;
    vector<long long> res;
    res = weird_algo(n);
    for (long long num : res)
    {
      
        cout << num << " ";
    }
    cout << endl;
    return 0;
}