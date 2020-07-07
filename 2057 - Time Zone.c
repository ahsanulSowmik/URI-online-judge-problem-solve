#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
     int d=a+b+c;

    if(d == 24)
    {
        cout<<"0"<<endl;
    }
    else if(d > 24)
    {
        cout<<d-24<<endl;
    }
    else if(d < 0)
    {
        cout<<d+24<<endl;
    }
    else
    {
                cout<<d<<endl;

    }

    return 0;
}
