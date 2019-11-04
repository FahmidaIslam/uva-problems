#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    while(cin>>a>>b)
    {
        if(a<0 && b<0) break;
        if(a>b) {
            x = a-b;
            y = 100-a+b;
        }
        else {
            x = b-a;
            y = 100-b+a;
        }
        if(x<y) cout<<x<<endl;
        else cout<<y<<endl;
    }
    return 0;
}
