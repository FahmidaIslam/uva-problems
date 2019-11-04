#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        r = (((((((n*567)/9)+7492)*235)/47)-498)/10)%10;
        if(r<0) r*=-1;
        cout<<r%10<<endl;
    }
    return 0;
}
