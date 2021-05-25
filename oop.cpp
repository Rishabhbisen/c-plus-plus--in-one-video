#include<iostream>
using namespace std;

class employ{
    public:
    string name;
    int salary;
    float mark;
};

int main(int argc, char const *argv[])
{
    employ rk;
    rk.name = "rishabh";
    rk.salary = 1000;
    rk.mark = 98.90;
    cout<<"name of the oner is "<<rk.name<<" of this latop and his salary is "<<rk.salary<<" and mark is "<<rk.mark<<endl;
    
    return 0;
}
