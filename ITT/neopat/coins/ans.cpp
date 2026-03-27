#include<iostream>
using namespace std;
int main()
{
    int a;
    char p;
    cin>>a;
    cin>>p;
    if(a>=1 && a<=9 && p=='y')
    {
        int e;
        e=(a*2);
        cout<<e;
    }
    else
    {
        cout<<"Invalid Input";
    }
    return 0;
}
