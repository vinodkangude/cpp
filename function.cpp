#include<iostream>
using namespace std;
void greet()
{
    cout<<"Good Morning"<<endl;
    cout<<"How Are You"<<endl;
}
void India()
{
    cout<<"You are in India"<<endl;
}
void usa()
{
    cout<<"You are in USA"<<endl;
    India();
}
int main()
{
    greet();
    cout<<"You are in main"<<endl;
    India();
    usa();
    return 0;
}