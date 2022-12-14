#include "precompile.h"
#include "menu.h"
#include "game.h"

using namespace std;
using namespace tabulate;

//declaring variable for the menu
char returnToMenu;
char mistakeOfSelecting;

void мenuGame()
{
    using namespace tabulate;
    int menu;
    //create an ascii art c++
    cout << setw(90) << " _______  __   __  _______    _______  _______  __   __  _______ " << endl;
    cout << setw(90) << "|       ||  | |  ||       |  |       ||   _   ||  |_|  ||       |" << endl;
    cout << setw(90) << "|_     _||  |_|  ||    ___|  |    ___||  |_|  ||       ||    ___|" << endl;
    cout << setw(90) << "  |   |  |       ||   |___   |   | __ |       ||       ||   |___ " << endl;
    cout << setw(90) << "  |   |  |       ||    ___|  |   ||  ||       ||       ||    ___|" << endl;
    cout << setw(90) << "  |   |  |   _   ||   |___   |   |_| ||   _   || ||_|| ||   |___ " << endl;
    cout << setw(90) << "  |___|  |__| |__||_______|  |_______||__| |__||_|   |_||_______|" << endl;
    cout << endl;
    cout << endl;
    //declare a table with header-only library tabulate
    Table game_table;
    game_table.add_row({ "1. Easy" });
    game_table.format().width(117);
    //create the first column for level Easy 
    game_table[0][0].format()
        .padding_top(1)
        .padding_bottom(1)
        .padding_left(1)
        .padding_right(1)
        .font_align(FontAlign::center)
        .font_style({ FontStyle::bold })
        .font_background_color(Color::green);
    game_table.add_row({ "2. Medium" });
    game_table.format().width(117);
    //create the second column for level Medium 
    game_table[1][0].format()
        .padding_top(1)
        .padding_bottom(1)
        .padding_left(1)
        .padding_right(1)
        .font_align(FontAlign::center)
        .font_style({ FontStyle::bold })
        .font_background_color(Color::yellow);
    game_table.add_row({ "3. Hard" });
    game_table.format().width(117);
    //create the third column for level Hard 
    game_table[2][0].format()
        .padding_top(1)
        .padding_bottom(1)
        .padding_left(1)
        .padding_right(1)
        .font_align(FontAlign::center)
        .font_style({ FontStyle::bold })
        .font_background_color(Color::red);
    game_table.add_row({ "4. Exit" });
    game_table.format().width(117);
    //create the fourth column to Exit
    game_table[3][0].format()
        .padding_top(1)
        .padding_bottom(1)
        .padding_left(1)
        .padding_right(1)
        .font_align(FontAlign::center)
        .font_style({ FontStyle::bold })
        .font_background_color(Color::grey);
    cout << game_table << endl;
    cout << "Please select the level of difficulty: ";
    cin >> menu;
    switch (menu)
    {
    case 1:
        system("cls");
        gameForEasyMode(); break;
        //start the game for Easy mode
    case 2:
        system("cls");
        gameForMediumMode(); break;
        //start the game for Medium mode
    case 3:
        system("cls");
        gameForHardMode(); break;
        //start the game for Hard mode
    case 4:
        system("cls");
        cout << "Ok, Goodbye! Hope you like our project!";
        break;
        //exit the project
    default:
        //if you select other option
        system("cls");
        char mistakeOfSelecting;
        cout << "Do you want to play? Y/N " << endl;
        мenuGame();
        cin >> mistakeOfSelecting;
        if (mistakeOfSelecting == 'Y')
        {
            system("cls");
            мenuGame();
        }
        else
        {
            system("cls");
            cout << "Ok, Goodbye! Hope you like our project!" << endl;
            break;
        }
        break;
    }
}

void Menu()
{
    //declare a new table for the developers option
    Table dev_table;

    int menu;
    cout << setw(105) << " _______ __               _______         __                                 __         " << endl;
    cout << setw(105) << "|_     _|  |--.-----.    |   _   |.-----.|  |_.----.-----.-----.---.-.--.--.|  |_.-----." << endl;
    cout << setw(105) << "  |   | |     |  -__|    |       ||__ --||   _|   _|  _  |     |  _  |  |  ||   _|__ --|" << endl;
    cout << setw(105) << "  |___| |__|__|_____|    |___|___||_____||____|__| |_____|__|__|___._|_____||____|_____|" << endl;
    cout << endl;
    cout << setw(70) << " _____             " << endl;
    cout << setw(70) << "|     |___ ___ _ _ " << endl;
    cout << setw(70) << "| | | | -_|   | | |" << endl;
    cout << setw(70) << "|_|_|_|___|_|_|___|" << endl;
    cout << endl;
    //declare a new table for the main menu
    Table game_table;
    game_table.add_row({ "1. Play" });
    game_table.format().width(117);
    //create the first column for Play 
    game_table[0][0].format()
        .padding_top(1)
        .padding_bottom(1)
        .padding_left(1)
        .padding_right(1)
        .font_align(FontAlign::center)
        .font_style({ FontStyle::bold })
        .font_background_color(Color::green);
    game_table.add_row({ "2. About" });
    game_table.format().width(117);
    //create the second column for the About page 
    game_table[1][0].format()
        .padding_top(1)
        .padding_bottom(1)
        .padding_left(1)
        .padding_right(1)
        .font_align(FontAlign::center)
        .font_style({ FontStyle::bold })
        .font_background_color(Color::cyan);
    game_table.add_row({ "3. The developers" });
    game_table.format().width(117);
    //create the third column for the developers page 
    game_table[2][0].format()
        .padding_top(1)
        .padding_bottom(1)
        .padding_left(1)
        .padding_right(1)
        .font_align(FontAlign::center)
        .font_style({ FontStyle::bold })
        .font_background_color(Color::cyan);
    game_table.add_row({ "4. Exit" });
    game_table.format().width(117);
    //create the fourth column to Exit the project
    game_table[3][0].format()
        .padding_top(1)
        .padding_bottom(1)
        .padding_left(1)
        .padding_right(1)
        .font_align(FontAlign::center)
        .font_style({ FontStyle::bold })
        .font_background_color(Color::red);
    cout << game_table;
    cout << endl;
    cout << endl;
    cout << "Please select one of the following: ";
    cin >> menu;
    switch (menu)
    {
    case 1:
        system("cls");
        мenuGame();
        break;
        //open the menu for the game
    case 2:
        system("cls");
        cout << "You need to collect the letters in order the correct order to make a word.\nOur game is played with the arrows on your computer. If you hit the border, the game is over.\nThere are 3 modes types of difficulties.";
        cout << endl;
        cout << "Do you want to go back to the menu? Y/N";
        cin >> returnToMenu;
        if (returnToMenu == 'Y')
        {
            system("cls");
            Menu();
        }
        else
        {
            system("cls");
            cout << "Ok, Goodbye! Hope you like our project!" << endl;
            break;
        }
    case 3:
        system("cls");
        //create the first column for the developers
        dev_table.add_row({ "1. Scrum Trainer.\nOur Scrum Trainer is Nikolay Zdravkov Stoyanov" });
        dev_table.format().width(115);
        dev_table[0][0].format()
            .padding_top(1)
            .padding_bottom(1)
            .padding_left(1)
            .padding_right(1)
            .font_align(FontAlign::center)
            .font_style({ FontStyle::bold })
            .font_background_color(Color::yellow);
        dev_table.add_row({ "2. Backend developer. \nOur Backend developer is Vicho Dimitrov Vichev." });
        dev_table.format().width(115);
        dev_table[1][0].format()
            .padding_top(1)
            .padding_bottom(1)
            .padding_left(1)
            .padding_right(1)
            .font_align(FontAlign::center)
            .font_style({ FontStyle::bold })
            .font_background_color(Color::green);
        dev_table.add_row({ "3. Backend developer. \nOur backend developer is Dimitar Kaloyanov Byandov." });
        dev_table.format().width(115);
        dev_table[2][0].format()
            .padding_top(1)
            .padding_bottom(1)
            .padding_left(1)
            .padding_right(1)
            .font_align(FontAlign::center)
            .font_style({ FontStyle::bold })
            .font_background_color(Color::red);
        dev_table.add_row({ "4. Quality engineer. \nOur Quality engineer is Martin Todorov Nenkov." });
        dev_table.format().width(115);
        dev_table[3][0].format()
            .padding_top(1)
            .padding_bottom(1)
            .padding_left(1)
            .padding_right(1)
            .font_align(FontAlign::center)
            .font_style({ FontStyle::bold })
            .font_background_color(Color::blue);
        cout << dev_table;
        cout << "Do you want to go back to the menu? Y/N";
        cin >> returnToMenu;
        if (returnToMenu == 'Y')
        {
            system("cls");
            Menu();
        }
        else
        {
            system("cls");
            cout << "Ok, Goodbye! Hope you like our project!" << endl;
            break;
        }
    case 4:
        system("cls");
        cout << "Ok, Goodbye! Hope you like our project!";
        break;
    default:
        system("cls");
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
        break;
    }
}