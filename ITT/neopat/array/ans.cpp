#include<iostream>
using namespace std;
int main()
{
    int ar[10];
    int l=0,max=0,min=0;
    cin>>l;
    if(l>10 || l<=0)
    {
        goto l1;
    }
    for(int i=0;i<l;i++)
    {
        cin>>ar[i];
    }
    max=ar[0];
    min=ar[0];
    for(int i=0;i<l;i++)
    {
        if(ar[i+1]>ar[i])
        {
            if(ar[i+1]>max)
            {
                max=ar[i+1];
            }
        }
    }
    for(int i=0;i<l;i++)
    {
        if(ar[i]<ar[i+1])
        {
            if(ar[i]<min)
            {
                min=ar[i];
            }
        }
    }
    cout<<"Max:"<<max<<endl;
    cout<<"Min:"<<min;
    goto l2;
    l1:
    {
        cout<<"Invalid";
    }
    l2:{
        
    }
    return 0;
}
