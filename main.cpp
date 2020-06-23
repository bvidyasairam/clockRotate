#include <iostream>

using namespace std;

int main()
{
    int arrayValue[100],n,temp,i;
    char ch='y';
    cout<<"Enter the value of n";
    cin>>n;
    for(i = 0; i< n ; i++)
    {
        cin>>arrayValue[i];
    }
    while(ch!='n')
    {
        cout<<"\nAbout to rotate\n";
        temp=arrayValue[n-1];
        for(i=n-2; i>=0; i--)
        {
            if(i==0)
            {
                arrayValue[i+1]=arrayValue[i];
                arrayValue[i]=temp;
            }
            else
                arrayValue[i+1]=arrayValue[i];
        }
        for(i = 0; i< n ; i++)
        {
            cout<<arrayValue[i]<<"\t";
        }
        cout<<"\nDo you want to continue?";
        cin>>ch;
    }
    return 0;
}
