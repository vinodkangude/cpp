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
    if((a+b)>c && (a+c)>b && (b+c)>a)
    {
        cout<<"Side of triangle";
    }
    else 
    {
        cout<<"Not sides of triangle";
    }
}