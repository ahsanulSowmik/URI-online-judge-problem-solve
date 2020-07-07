#include<stdio.h>

int main ()
{
    int tc,a,b,c,d,e,flag=0;

    while(1)
    {
         scanf("%d",&tc);
         if(tc==0)break;

    while(tc--)
    {

        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
         flag=0;
        if(a<=127)
        {
            flag++;
            a=1;

        }
        if(b<=127)
        {
            flag++;
            b=1;
        }
        if(c<=127)
        {
            flag++;
            c=1;
        }
        if(d<=127)
        {
            flag++;
            d=1;
        }
        if(e<=127)
        {
            flag++;
            e=1;
        }

        if(flag==1)
        {
            if(a==1)
            {
                printf("A\n");
            }
            else if(b==1)
            {
                 printf("B\n");
            }
            else if(c==1)
            {
                 printf("C\n");
            }
            else if(d==1)
            {
                 printf("D\n");
            }
            else if(e==1)
            {
                 printf("E\n");
            }

        }
        else{
            printf("*\n");
        }
    }

    }


    return 0;


}

