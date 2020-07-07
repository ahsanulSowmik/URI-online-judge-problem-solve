#include<string.h>

int main ()
{
    int tc,n;
    char c[50];

    scanf("%d",&tc);

    getchar();
    while(tc--)
    {

        scanf("%s",&c);
        scanf("%d",&n);

        if(c[0]=='T' && c[1]=='h')
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }


    return 0;
}

