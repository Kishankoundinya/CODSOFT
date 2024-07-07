#include <cstdlib>
#include <iostream>
using namespace std;
void guess(int m)
{
    int n;
    cout << "Guess the Number :";
    cin >> n;
    if (n == m)
    {
        cout << "You guessed it right";
        return;
    }
    else if (n > m)
    {
        cout << "you guessed it higher"<<endl;
        guess(m);
    }
    else if (n < m)
    {
        cout << "you guessed it lower"<<endl;
        guess(m);
    }
    return;
}
int main()
{

    srand(time(0));
    int a = rand() % 101;
    cout<<"Guess the number between 1 and 100"<<endl;
    guess(a);

    return 0;
}