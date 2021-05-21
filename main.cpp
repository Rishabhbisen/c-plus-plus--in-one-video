#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    //this is variable decleration , print information, data type 
    cout << "Hello<<endl " << endl;
    cout << "who is the father of c++";
    int a, b, c;
    a = 3434343;
    b = 242342;
    cout << "the nomber is :" << a << endl;
    cout << "the second nomber is:" << b << endl;
    float score = 95.22;
    double score1 = 90.33;
    long double score2 = 87.9;
    //score = 88; ** if we write this so first  score is not run
    cout << "the score is :" << score << endl;
    cout << "the score is :" << score1 << endl;
    cout << "the score is :" << score2 << endl;

    //# how take user input in c++
    cout << "Enter the first nomber" << endl;
    cin >> a;
    cout << "Enter the second nomber" << endl;
    cin >> b;

    //# this is oprater
    cout << "a + b =" << a + b<<endl;
    cout << "a - b =" << a - b<<endl;
    cout << "a % b =" << a % b<<endl;
    cout << "a - b =" << a - b<<endl;
    cout << "a / b =" << (float)a / b<<endl;

    //# if else statmant
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if(age>150)
    {
        cout<<"invalid age ";
    }
    else if (age>=18)
    {
        cout<<"ypu can vote";
    }
    else
    {
        cout << " you can not vote";
    }
    

    return 0;
}
