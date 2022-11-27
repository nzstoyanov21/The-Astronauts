#include <iostream>
#include <windows.h>
#include <iomanip>

using namespace std;
void Menu()
{ 
    int menu;
    cout << setw(105) << " _______ __               _______         __                                 __         " << endl;
    cout << setw(105) << "|_     _|  |--.-----.    |   _   |.-----.|  |_.----.-----.-----.---.-.--.--.|  |_.-----." << endl;
    cout << setw(105) << "  |   | |     |  -__|    |       ||__ --||   _|   _|  _  |     |  _  |  |  ||   _|__ --|" << endl;
    cout << setw(105) << "  |___| |__|__|_____|    |___|___||_____||____|__| |_____|__|__|___._|_____||____|_____|" << endl;
    cout << endl;
    cout << endl;
    cout << setw(60) << "Menu";
    cout << endl;
    cout << setw(65) << "1. Play the game" << endl;
    cout << setw(65) << "2. About the game" << endl;
    cout << setw(65) << "3. The developers" << endl;
    cout << setw(60) << "4. Exit" << endl;
    cin >> menu;
    switch (menu)
    {
    case 1:
        system("cls");
        cout << "The game is about to start. Be ready!";
        system("Color 1A");
        break;
    case 2:
        system("cls");
        cout << "Our game is a";
        system("Color 18");
        break;
    case 3:
        system("cls");
        cout << "Our Scrum Trainer is Nikolay Zdravkov Stoyanov." << endl;
        cout << "Our first Backend developer is Vicho Dimitrov Vichev." << endl;
        cout << "Our second is Dimitar Kaloyanov Byandov." << endl;
        cout << "Our Quality engineer is Martin Todorov Nenkov." << endl;
        system("Color 14");
        break;
    case 4:
        system("cls");
        cout << "Ok, Goodbye! Hope you like our project!";
        system("Color 1E");
        break;
    default:
        system("cls");
        char mistakeOfSelecting;
        cout << "Do you want select one of the following options? Y/N" << endl;
        cout << "1. Play the game" << endl;
        cout << "2. About the game" << endl;
        cout << "3. The developers" << endl;
        cout << "4. Exit" << endl;
        cin >> mistakeOfSelecting;
        if (mistakeOfSelecting == 'Y')
        {
            Menu();
        }
        else
        {
            system("cls");
            cout << "Ok, Goodbye! Hope you like our project!" << endl;
            break;
        }
        system("Color 14");
        break;
    }
}

int main()
{
    int menu;
    Menu();
}