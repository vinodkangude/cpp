#include<iostream>
using namespace std;
int main()
{
    int cp;
    int sp;
    cout<<"Enter the cost price Rs: ";
    cin>>cp;
    cout<<"Enter the selling price Rs: ";
    cin>>sp;
    if(cp<sp)
    {
        cout<<"Profit is : "<<sp-cp<<"Rs";
    }
    else if(cp>sp)
    {
        cout<<"Loss is : "<<cp-sp<<"Rs";
    }
    else
    {
        cout<<"No Profit No Loss";
    }
}