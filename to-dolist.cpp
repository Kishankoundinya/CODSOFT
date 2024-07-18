#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> todo;
void addtask()
{
    cout << "Enter the task :\n";
  cin.ignore();
    string task;
    getline(cin, task);
    todo.push_back(task);
    cout << "Task added succesfully\n";
}
void viewtask()
{
    int n = todo.size();
    cout << "TO-DO List:\n";
    if (n > 0)
    {
        for (int i = 0; i < n; i++)
        {
            cout << i + 1 << "." << todo[i] << "\n";
        }
    }
    else
    {
        cout << "Your to-do list is empty\n";
    }
}
void deletetask()
{
    int n = todo.size();
    cout << "Enter the task number you want to delete\n";
    int m;
    cin >> m;
    if (1 <= m && m <= n)
    {
        todo.erase(todo.begin() + m - 1);
    }
    else
    {
        cout << "You entered the wrong choice\n";
    }
}
void markcomplete()
{
    cout << "Enter the task no :";
    int m;
    cin >> m;
    int n = todo.size();
    if (m <= n && m >= 0)
    {

        todo[m - 1] = todo[m - 1] + "[completed]";
        cout << "Task marked as completed\n ";
    }
    else
    {
        cout << "You entered the wrong choice\n";
    }
}
int main()
{
    int n;
    do
    {
        cout << "TO-DO list manager:\n";
        cout << "Press 1: to add task\n";
        cout << "Press 2: to view task\n";
        cout << "Press 3: to delete task\n";
        cout << "Press 4: to mark as complete\n";
        cout << "Press 5: to exit\n";
        cout << "Enter your choice :\n";

        cin >> n;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input , Please try again";
            continue;
        }

        switch (n)
        {
        case 1:
            addtask();
            break;
        case 2:
            viewtask();
            break;
        case 3:
            deletetask();
            break;
        case 4:
            markcomplete();
            break;
        case 5:
            cout << "Exiting task manager\n ";
            break;
        }

        
    } while (n != 5);

    return 0;
}
