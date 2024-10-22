#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    if(n>99 && n<999)
    {
        cout<<"Three Digit Number";
    }
    else 
    {
        cout<<"Not Three Digit Number";
    }
}