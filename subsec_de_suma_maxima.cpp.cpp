#include<bits/stdc++.h>

using namespace std;

#define INFINIT -9999999999

int s[40000001],best[40000001],v[10000000],n;

int main()

{
    cin>>n;

    for(int i=0 ; i < n ; i ++)
        cin>>v[i];
    for(int i=0 ; i < n ; i ++)
        s[i]=s[i-1]+v[i];
    int min=0;
    int left ,right;
    int bestSum=INFINIT;
    for(int i=0 ; i < n; i++)
        {
            best[i]=s[i]-min;
            if(s[i]<min)
               {
                    min=s[i];
                    left=i;
               }
             if (best[i]>bestSum)
             {
                 bestSum=best[i];
                 right=i;
             }
        }

    for(int i=left+1 ; i <=right; i ++)
            cout<<v[i]<<" ";
}
