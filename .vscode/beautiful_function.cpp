#include<iostream>
#include<vector>
#include<set>
using namespace std;

int beautiful_function(int x)
{   
     set<int>s;
    // if (x%10==0)
    // {
    //   s.insert(x);
    //   x++;
    // }
    while (s.find(x)==s.end())          
    {
        s.insert(x);
        while(x%10==0)
        {
            x = x/10;
        }
        
      
        x++;
            
    }
    return s.size();
     
}
int main(){
    int x;
    cin>>x;
    int ans = beautiful_function(x+1);
    cout<<ans<<endl;
    return 0;
}