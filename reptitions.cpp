#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str;
    cin>>str;
    long long size = str.size();
    long long count = 1;
    char element = str[0];
    long long maxi = 1;
    for (long long i = 1; i < size; i++)
    {
        if (str[i]==element)
        {
           count++;
        }
        else
       {
        element = str[i];
        count = 1;
       }

        maxi = max(count,maxi);
    }
    cout<<maxi;
    
    return 0;
}