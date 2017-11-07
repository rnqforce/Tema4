#include<bits/stdc++.h>

using namespace std;

int v[40000001],s[40000001],n,q;

int main()

{
    cin>>n;

    for(int i = 1 ; i <= n ; i++)
    {
        cin>>v[i];

    }
    for(int i=1 ; i <= n ; i ++)
    {
        s[i]=s[i-1]+v[i];
    }

    cin>>q;

    int x,y;

    for(int i=0 ; i < q ;i++)
    {
        cin>>x>>y;

        cout<<s[y]-s[x-1]<<'\n';
    }
}
