#include <iostream>
#include <fstream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    string branch;

    friend ofstream &operator<<(ofstream &ofs, Student &s);
};
ofstream &operator<<(ofstream &ofs, Student &s)
{
    ofs << s.name << endl;
    ofs << s.branch << endl;
    ofs << s.roll << endl;
}
int main()
{
    Student s1;
    ifstream ifs("Student.txt");
    ifs >> s1;
    /*Student s1;
    s1.name = "Khan";
    s1.roll = 10;
    s1.branch = "CS";

    ofstream ofs("stu.txt", ios::trunc);
    ofs << s1;*/
    ofs.close();
}
