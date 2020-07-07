#include<stdio.h>




int main()
{
    int n,p,i;

    while (scanf("%d", &n) && n != 0)
    {

        int  m=0,j=0;

        for ( i = 0; i < n; ++i)
        {
            scanf("%d",&p);
            if(p==0)
            {
                m++;
            }
            else
            {
                j++;
            }
        }

        printf("Mary won %d times and John won %d times\n", m,j);
    }

    return 0;
}
