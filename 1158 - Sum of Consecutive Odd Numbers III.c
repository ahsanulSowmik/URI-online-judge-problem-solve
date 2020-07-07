#include<stdio.h>

int main ()
{
    int tc,a,b;

    scanf("%d",&tc);

    while(tc--)
    {
        int sum=0;
        scanf("%d %d",&a,&b);
        if(a%2==0)
        {
            a++;
        }

        int i,cnt=0;

        for(i=a;; i+=2)
        {
               sum+=i;
               cnt++;
               if(cnt==b)
               {
                   break;
               }
        }

        printf("%d\n",sum);

    }


    return 0;

}

