#include<iostream>
using namespace std;
class student
{
    public:
    string name;
    int age,rollno;
    string grade;
};
int main()
{
    student s1;
    s1.name="vinod";
    s1.age=19;
    s1.rollno=34;
    s1.grade="A+";
    cout<<s1.age<<" ";
}