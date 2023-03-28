#include <iostream>
using namespace std;
int main()
{
    char name[7];
    char username[3];
    char password[8];
    int option, i;

    cout << "press following option to \n";
    cout << "1 to register\n";
    cout << "2 to login \n";
    cout << "3 to exit \n";
    cin >> option;
    if (option == 1)
    {
        cout << "To register Enter the foll0wing details\n";
        cout << "Enter name\n";
        for (i = 0; i < 7; i++)
        {
            cin >> name[i];
        }
        cout << "Enter username\n";
        for (i = 0; i < 3; i++)
        {
            cin >> username[3];
        }
        cout << "Enter password\n";
        for (i = 0; i < 8; i++)
        {
            cin >> password[i];
        }
        cout << "You registered sucessfully";
    }
    else if (option == 2)
    {
        cout << "To login Enter the following deatils\n";
        cout << "Enter username\n";
        for (i = 0; i < 3; i++)
        {
            cin >> username[3];
        }
        cout << "Enter password\n";
        for (i = 0; i < 8; i++)
        {
            cin >> password[i];
        }
        cout << "you login sucessfully";
    }
    else
    {
        cout << "EXIT";
    }
}