#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    if(n%5==0 && n%3==0)
    {
        cout<<"Divisible by 5 and 3";
    }
    else 
    {
        cout<<"not divisible by 5 and 3";
    }
}