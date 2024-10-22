#include<iostream>
using namespace std;
int main()
{
    int n;
    int m;

    cout<<"Enter the dividend : ";
    cin>>n;
    cout<<"Enter the divisor :";
    cin>>m;
    if(n%m==0)
    {
        cout<<"number is divisible by "<<m<<endl;
    }
    else
    {
        cout<<"\nnumber is not divisible by "<<m<<endl;
    }
}