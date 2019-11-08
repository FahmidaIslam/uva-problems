#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum;
    string s;
    cin>>t;
    sum=0;
    while(t--)
    {
        cin>>s;
        if(s=="donate")
        {
            cin>>n;
            sum+=n;
        }
        else
        {
            cout<<sum<<endl;
        }
    }
    return 0;
}
