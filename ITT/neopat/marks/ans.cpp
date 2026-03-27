#include<iostream>
using namespace std;
int main()
{
    int a;
    int b;
    cin>>a>>b;
    if(b==1 && a<25)
    {
        cout<<"The person belongs to Group 1.";
    }
    else if(b==1 && a<=45 && a>=25)
    {
        cout<<"The person belongs to Group 3.";
    }
    else if(b==2 && a<25)
    {
        cout<<"The person belongs to Group 2.";
    }
    else if(b==2 && a<=45 && a>=25)
    {
        cout<<"The person belongs to Group 4.";
    }
    else if(a>45)
    {
        cout<<"The person belongs to Group 5.";
    }
    else
    {
        cout<<"Invalid";
    }
}
