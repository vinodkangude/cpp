#include<iostream>
#include<string>
using namespace std;
class teacher 
{
    private:
    double salary;

    public:
    string name;
    string dept;
    string subject;
    
    void changeDept (string newDept)
    {
        dept = newDept;
    }
};
int main()
{
    teacher t1;
    t1.name = "vinod";
    t1.subject = "cpp";
    t1.dept="computer science";
    cout<<t1.dept<<endl;
    return 0;
}