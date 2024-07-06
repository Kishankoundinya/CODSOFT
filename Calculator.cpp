#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the first number :";
    cin >> a;
    cout << "Enter the secoend number :";
    cin >> b;
    cout << "Choose an operation to perform :" << endl
         << "press :" << endl
         << "1 for addition" << endl
         << "2 for substraction" << endl
         << "3 for multiplication" << endl
         << "4 for devision" << endl;
    cin >> c;
    switch (c)
    {
    case (1):
        cout << a + b << endl;
        break;
    case (2):
        cout << a - b << endl;
        break;
    case (3):
        cout << a * b << endl;
        break;

    case (4):
        cout << a / b << endl;
        break;
    }

    return 0;
}
