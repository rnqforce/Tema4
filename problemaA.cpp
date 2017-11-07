#include<bits/stdc++.h>

using namespace std;

int fv[4][10];

int main()

{
    int n , x ;

    cin>>n;

    for(int i=0;i < n ; i++)

        for(int j=0 ; j < 6 ; j++)
    {
        cin>>x;

        fv[i][x]++;
    }

    int nr=0,ok=0;

       for(int i=1; i <=9 &&!ok; i ++)
       if(fv[0][i]||fv[1][i]||fv[2][i])
          nr=i;
        else {
            cout<<nr;
             ok=1;
             break;
        }


      for(int i=0;i < 10 && !ok; i++)

        for(int j=0 ; j < 10 && !ok; j++)
            {


            if((fv[0][j] && (fv[1][i]||fv[2][i])) || (fv[1][j] && (fv[0][i]||fv[2][i])) ||(fv[2][j] && (fv[1][i]||fv[0][i])))
                  nr=i*10+j;

            else
               {
                   cout<<nr<<" ";
                   ok=1;
                   break;
               }
               }


        return 0;
}

