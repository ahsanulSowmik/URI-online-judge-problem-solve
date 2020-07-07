#include<stdio.h>

int main ()
{
    int tc,a,b;

    char c;

    scanf("%d",&tc);

    while(tc--)
    {
        scanf("%d %c %d",&a,&c,&b);

        if(c >='A' &&  c<='Z' && a!=b)
        {
            printf("%d\n",b-a);

        }
        else if(c >='a' &&  c<='z' && a!=b )
        {
            printf("%d\n",a+b);
        }
        else if (a==b)
        {
            printf("%d\n",a*b);
        }
    }

    return 0;
}
