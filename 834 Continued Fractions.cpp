#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,r;
    while(cin>>n>>d)
    {
        r=n/d;
        cout<<'['<<r<<';';
        n=n%d;
        swap(n,d);
        while(d!=0)
        {
            r=n/d;
            cout<<r;
            n=n%d;
            swap(n,d);
            if(d>0) {cout<<",";}
        }
        cout<<']'<<endl;
    }
    return 0;
}
