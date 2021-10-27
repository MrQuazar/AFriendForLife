// WAP to make simple calculator using switch

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char ch1 = 'y';
    while (ch1 != 'n')
    {
        int num1, num2, result, choice;
        cout << "Simple Calculator" << endl;
        cout << "1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n"
             << endl;
        cout << "Enter Your Choice : " << endl;
        cin >> choice;
        cout << "Enter the First Nummber: " << endl;
        cin >> num1;
        cout << "Enter the Second Nummber: " << endl;
        cin >> num2;

        switch (choice)
        {
        case 1:
        {
            result = num1 + num2;
            cout << "Result : " << result << endl;
            break;
        }

        case 2:
        {
            result = num1 - num2;
            cout << "Result : " << result << endl;
            break;
        }

        case 3:
        {
            result = num1 * num2;
            cout << "Result : " << result << endl;
            break;
        }

        case 4:
        {
            result = num1 / num2;
            cout << "Result : " << result << endl;
            break;
        }

        default:
        {
            cout << "Invalid Choice" << endl;
        }
        }
        cout << "Press 'n' to exit the Program and 'y' to continue" << endl;
        cout << "Continue ? (y/n)" << endl;
        cin >> ch1;
    }

    return 0;
}