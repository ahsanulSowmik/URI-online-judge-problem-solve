#include<stdio.h>
int main ()
{
    int n,a[100],i,c;
    double b[100],max;
    scanf("%d",&n);
    scanf("%d %lf",&a[0],&b[0]);
    max=b[0];
    for(i=1; i<n; i++)
    {
        scanf("%d %lf",&a[i],&b[i]);
        if(max<b[i])
        {
            max=b[i];
            c=a[i];
        }
    }
    if(max<8)
    {
        printf("Minimum note not reached\n");
    }

    else
    {
         printf ("%d\n",c);
    }
    return 0;

}

