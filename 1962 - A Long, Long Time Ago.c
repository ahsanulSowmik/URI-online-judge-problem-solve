#include<stdio.h>
int main ()
{

    int n,y, i;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&y);

        if(y<2015)
        {
           printf("%d D.C.\n",2015-y);
        }
        else
        {

           printf("%d A.C.\n",y-2014);
        }

    }

    return 0;


}

