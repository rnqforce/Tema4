#include<bits/stdc++.h>

using namespace std;

int  a[25] , b[25];

int check()
{
    for (int i=1;i<=6;i++)

        for (int j=1;j<4;j++)

            if (b[i*4-j]!=b[i*4])
                return false;
    return true;
}

int main()
{
    int c[3][8]={{13,14,5,6,17,18,21,22},{2,4,6,8,10,12,23,21},{3,4,17,19,10,9,16,14}};

    for (int i=1;i<=24;i++)

        cin>>a[i];

    for (int i=0;i<3;i++)
    {
        for (int j=1;j<=24;j++)
                 b[j]=a[j];
        for (int j=0;j<8;j++)
            b[c[i][(j+2)%8]]=a[c[i][j]];

		if (check())

		{
		    cout<<"YES";
		 return 0;
        }
        for (int j=1;j<=24;j++)
              b[j]=a[j];
        for (int j=0;j<8;j++)
              b[c[i][(j+6)%8]]=a[c[i][j]];
		if (check())
		{printf("YES"); return 0;}
    }
    printf("NO");
    return 0;
}
