#include<iostream>
using namespace std;
void sum(int a, int b)
{
    int sum;
    sum = a + b;
    cout<<sum;
    return ;
}
int main()
{
    int a;
    cout<<"Enter first number : ";
    cin>>a;
    int b;
    cout<<"Enter second number : ";
    cin>>b;
    sum(a,b);
}