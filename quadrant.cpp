#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter x co-ordinate : ";
    cin>>x;
    cout<<"Enter y co-ordinate : ";
    cin>>y;
    if(x>0 && y>0)
    {
        cout<<"co-ordinates lies in 1st quadrant";
    }
    else if(x>0 && y<0)
    {
        cout<<"co-ordinates lies in 4th quadrant";
    }
    else if(x<0 && y>0)
    {
        cout<<"co-ordinates lies in 2nd quadrant";
    }
    else if(x<0 && y<0)
    {
        cout<<"co-ordinates lies in 3rd quadrant";
    }
    else if(x==0 && y==0)
    {
        cout<<"co-ordinate lies on origin";
    }
    else if(y==0)
    {
        cout<<"co-ordinate lies on y axis";
    }
    else
    {
        cout<<"co-ordinate lies on x axis";
    }
}