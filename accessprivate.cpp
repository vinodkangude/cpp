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
    void setSalary(double s)
    {
        salary = s;
    }
    double getSalary()
    {
        return salary;
    }
};
int main()
{
    teacher t1;
    t1.name = "vinod";
    t1.subject = "cpp";
    t1.dept="computer science";
    t1.setSalary(25000);
    cout<<t1.dept<<endl;
    cout<<t1.getSalary()<<endl;
    return 0;
}