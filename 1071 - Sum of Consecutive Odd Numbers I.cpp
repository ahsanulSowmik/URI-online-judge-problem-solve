#include<bits/stdc++.h>

using namespace std;

typedef long long           ll;
typedef unsigned long long  ull;


int main()
{
    int i,a,b,j,sum=0;
    scanf("%d %d", &a, &b);
    if(a>b)
    {
        j=a; ///a=6,b=1;
        a=b; ///a=1,b=6;
        b=j;

    }

    a=a+1;
    for(i=a; i<b; i++)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}

