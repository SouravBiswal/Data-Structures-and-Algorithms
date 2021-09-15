#include <iostream>
using namespace std;

// Program to test whether a person is eligible for voting or not

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "You are eligible for voting.";
    }
    else if (age < 18 && age >= 0)
    {
        cout << "You are not eligible for voting.";
    }
    else
    {
        cout << "Enter a valid age.";
    }

    return 0;
}