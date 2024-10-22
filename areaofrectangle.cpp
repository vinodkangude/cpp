#include <iostream>
using namespace std;
int main()
{
    float length;
    float breadth;
    float area;
    float parameter;
    cout << "Enter the length :";
    cin >> length;
    cout << "Enter the breadth :";
    cin >> breadth;
    area = length * breadth;
    parameter = 2 * (length + breadth);
    cout << "Area of rectangle :" << area << endl;
    cout << "parameter of rectangle :" << parameter << endl;
    if (area < parameter)
    {
        cout << "Parameter is greater than area" << endl;
    }
    else
    {
        cout << "Area is greater than parameter" << endl;
    }
}