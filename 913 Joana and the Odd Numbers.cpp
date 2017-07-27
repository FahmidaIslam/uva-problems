#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,d,r,s,t;
    while(cin>>n)
    {
        d=n/2;
        r=n%2;
        t=(n*(d+r))+d;
        s=t+(t-2)+(t-4);
        cout<<s<<endl;
    }
    return 0;
}
