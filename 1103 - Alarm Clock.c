#include <stdio.h>

int main()

{

    int h1,h2,m1,m2;

    while(1) {

    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

    if(h1==0&&h2==0&&m1==0&&m2==0)

        break;

    else if(h1<h2 && (m1==m2))
    {
        printf("%d\n",(h2-h1)*60);
    }

    else if(h1<h2 && (m1>m2))

    {
        printf("%d\n",(h2-h1)*60 - m1+m2);
    }

    else if(h1<h2 && (m1<m2))
    {
        printf("%d\n",(h2-h1)*60 + (m2-m1));
    }

    else if(h1>h2)
         {
        printf("%d\n",((23-h1)*60+(60-m1))+(h2*60)+m2);
    }

    else if(h1==h2 && (m1<=m2))

     {
        printf("%d\n",m2-m1);
    }

    else if(h1==h2 && (m1>m2))

     {
        printf("%d\n",((23-h1)*60+(60-m1))+(h2*60)+m2);
    }



    }

    return 0;
}

