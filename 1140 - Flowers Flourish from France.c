#include <bits/stdc++.h>
#include<string.h>


using namespace std;

int main ()
{
    char sen[5000],change[3];

    while(1)
    {
        int flag=1;
        gets(sen);
        int len=strlen(sen);
       if(sen[0]=='*')
       {
           break;
       }
       else
       {
               if(sen[0]>=65 && sen[0]<=90)
           {
               change[0]=sen[0]+32;
           }
           else if(sen[0]>=97 && sen[0]<=122)
           {
               change[0]=sen[0]-32;
           }

           for(int i=0;i<len;i++)
           {
               if(sen[i]==' ')
               {
                   if(sen[i+1]==change[0] || sen[i+1]==sen[0])
                   {
                       continue;
                   }
                   else
                   {

                        flag=0;
                        break;
                   }
               }

           }

           if(flag==1)
           {
               printf("Y\n");
           }
           else
           {
               printf("N\n");
           }
       }

     flag=0;


    }

    return 0;
}
