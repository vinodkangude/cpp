#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the first side : ";
    cin>>a;
    cout<<"Enter the second side : ";
    cin>>b;
    cout<<"Enter the third side : ";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"Greatest number is : "<<a;
    }
    else if (b>a && b>c)
    {
        cout<<"Greatest number is : "<<b;
    }
    else
    {
        cout<<"Greatest number is : "<<c;
    }
}