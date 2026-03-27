#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int l;
    int s=0,p=1;
    cin>>l;
    if(l<=0)
    {
        goto L1;
    }
    for(int i=0;i<l;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<l;i++)
    {
        if(arr[1]==0)
        {
            goto L1;
        }
    }
    for(int i=0;i<l;i++)
    {
        s=s+arr[i];
        p=p*arr[i];
    }
    cout<<"Sum:"<<s<<endl;
    cout<<"Product:"<<p;
    goto l2;
    L1:
    {
        cout<<"Invalid";
    }
    l2:{
    }
    return 0;
    }
