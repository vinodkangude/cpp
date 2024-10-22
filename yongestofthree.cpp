#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter age of Ram : ";
    cin>>a;
    cout<<"Enter age of Shyam : ";
    cin>>b;
    cout<<"Enter age of Ajay : ";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"Ram is yongest";
        }
        else
        {
            cout<<"Ajay is youngest";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"Shyam is youngest";
        }
        else
        {
            cout<<"Ajay is youngest";
        }
    }
}