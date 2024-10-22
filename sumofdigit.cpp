#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum =0;
    while(n!=0)
    {
        int id = n%10;
        n = n/10;
        sum = sum + id;
    }
    cout<<sum<<endl;
}