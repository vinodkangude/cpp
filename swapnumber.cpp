#include<iostream>
using namespace std;
int main()
{
    int x = 2;
    int y = 5;
    cout<<x<<" "<<y<<endl;
    int temp = x;
    x = y;
    y = temp;
    cout<<x<<" "<<y<<endl;
}