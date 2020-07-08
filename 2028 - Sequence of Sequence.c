#include<stdio.h>
int main ()
{
    int n,i,j,cunt=0;


    while(scanf("%d",&n)!=EOF)
    {
        int p=1;
        cunt++;
        p+=(n*(n+1))/2;

       if(n == 0) printf("Caso %d: %d numero\n", cunt,p);
        else printf("Caso %d: %d numeros\n", cunt, p);
        printf("0");


        for(i=1;i<=n;i++)
        {
           for(j=1;j<=i;j++)
           {
               printf(" %d",i);
           }
        }
        printf("\n\n");



    }
    return 0;
}

