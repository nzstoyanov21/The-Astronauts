#include <iostream>
#include <fstream>
#include <ctime>
#include<cstdlib>
#include <string>
#include <iomanip>
#include <windows.h>
#include "tabulate.hpp"


using namespace std;

// declaring a variable to check if we lose
bool gameOver = false;

// declaring a variables for the coordinates

int x = 1;
int y = 1;
int y2;
int x2;

int counter = 0;

//declaring variable for the menu
char returnToMenu;
char mistakeOfSelecting;


// make a grid of a two dimensional array

char grid[15][30] = 
{
    "*****************************",
    "|~                          |",
    "|                           |",
    "|                           |",
    "|                           |",
    "|                           |",
    "|                           |",
    "|                           |",
    "|                           |",
    "|                           |",
    "|                           |",
    "|                           |",
    "|                           |",
    "|                           |",
    "*****************************",
};



void writeInFileEasy()
{
    //write in the file levelEasy.txt
    fstream fileEasy;
    fileEasy.open("levelEasy.txt", ios::out);
    if (fileEasy.is_open())
    {
        fileEasy << "hat" << endl;
        fileEasy << "cap" << endl;
        fileEasy << "map" << endl;
        fileEasy << "bin" << endl;
        fileEasy << "bed" << endl;
        fileEasy.close();
    }
}

void writeInFileMedium()
{
    //write in the file levelMeduim.txt
    fstream fileMedium;
    fileMedium.open("levelMedium.txt", ios::out);
    if (fileMedium.is_open())
    {
        fileMedium << "game" << endl;
        fileMedium << "dark" << endl;
        fileMedium << "rice" << endl;
        fileMedium << "bird" << endl;
        fileMedium << "sing" << endl;
        fileMedium.close();
    }
}

void writeInFileHard()
{
    //write in the file levelHard.txt
    fstream fileHard;
    fileHard.open("levelHard.txt", ios::out);
    if (fileHard.is_open())
    {
        fileHard << "space" << endl;
        fileHard << "power" << endl;
        fileHard << "agent" << endl;
        fileHard << "award" << endl;
        fileHard << "mouse" << endl;
        fileHard.close();
    }
}

void chooseWordEasy()
{
    string randomEasyWord;
    string fileEasy[5];
    srand(time_t(NULL));
    fstream wordEasy;
    wordEasy.open("levelEasy.txt");

    for (int i = 0; i < 5; i++)
    {
        wordEasy >> fileEasy[i];

    }
    srand(time(0));
    randomEasyWord = fileEasy[rand() % 6];
    cout << randomEasyWord[0] << " " << randomEasyWord[1] << " " << randomEasyWord[2] << endl;
    wordEasy.close();
}

void chooseWordMedium()
{
    string randomMediumWord;
    string fileMedium[5];
    srand(time_t(NULL));
    fstream wordMedium;
    wordMedium.open("levelMedium.txt");

    for (int i = 0; i < 5; i++)
    {
        wordMedium >> fileMedium[i];
    }
    srand(time(0));
    randomMediumWord = fileMedium[rand() % 6];
    cout << randomMediumWord[0] << " " << randomMediumWord[1] << " " << randomMediumWord[2] << " " << randomMediumWord[3] << " " << endl;
    wordMedium.close();
}

void chooseWordHard()
{
    string randomHardWord;
    string fileHard[5];
    srand(time_t(NULL));
    fstream wordHard;
    wordHard.open("levelHard.txt");

    for (int i = 0; i < 5; i++)
    {
        wordHard >> fileHard[i];
    }
    srand(time(0));
    randomHardWord = fileHard[rand() % 6];
    cout << randomHardWord[0] << " " << randomHardWord[1] << " " << randomHardWord[2] << " " << randomHardWord[3] << " " << randomHardWord[4] << endl;
    wordHard.close();
}


void readInFile()
{
    //read in the file levelEasy.txt
    fstream file;
    file.open("levelEasy.txt", ios::in);
    if (file.is_open())
    {
        string temp;
        do
        {
            //cout << temp << endl;
        } while (getline(file, temp));

        file.close();
    }
}




void playerMovement()
{
    while (gameOver = true)
    {
        system("cls");
        for (int map = 0; map < 15; map++)
        {
            cout << grid[map] << endl;
        }
        // checking if the button is pressed
        if (GetAsyncKeyState(VK_DOWN))
        {
            y2 = y + 1;
            if (grid[y2][x] = ' ')
            {
                grid[y][x] = ' ';
                y++;
                grid[y][x] = '~';
            }
        }

        if (GetAsyncKeyState(VK_UP))
        {
            y2 = y - 1;
            if (grid[y2][x] = ' ')
            {
                grid[y][x] = ' ';
                y--;
                grid[y][x] = '~';
            }
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            x2 = x + 1;
            if (grid[y][x2] = ' ')
            {
                grid[y][x] = ' ';
                x++;
                grid[y][x] = '~';
            }
        }

        if (GetAsyncKeyState(VK_LEFT))
        {
            x2 = x - 1;
            if (grid[y][x2] = ' ')
            {
                grid[y][x] = ' ';
                x--;
                grid[y][x] = '~';
            }
        }
        if ((y == 0 || y == 14) || (x == 0 || x == 29) || (y2 == 0 || y2 == 14) || (x2 == 0 || x2 == 3))
        {
            gameOver = true;
        }

    }
}

void gameForEasyMode()
{
    string randomEasyWord;
    string fileEasy[5];
    srand(time_t(NULL));
    fstream wordEasy;
    wordEasy.open("levelEasy.txt");

    for (int i = 0; i < 5; i++)
    {
        wordEasy >> fileEasy[i];

    }
    srand(time(0));
    randomEasyWord = fileEasy[rand() % 6];
    //cout << randomEasyWord[0] << " " << randomEasyWord[1] << " " << randomEasyWord[2] << endl;
    wordEasy.close();
    srand(time(0));
    grid[1 + rand() % 13][1 + rand() % 27] = randomEasyWord[0];
    grid[1 + rand() % 13][1 + rand() % 27] = randomEasyWord[1];
    grid[1 + rand() % 13][1 + rand() % 27] = randomEasyWord[2];
    while (gameOver = true)
    {
        system("cls");
        for (int map = 0; map < 15; map++)
        {
            cout << grid[map] << endl;
        }

        // checking if the button is pressed
        if (GetAsyncKeyState(VK_DOWN))
        {
            y2 = y + 1;
            if (grid[y2][x] = ' ')
            {
                grid[y][x] = ' ';
                y++;
                grid[y][x] = '~';
            }
        }

        if (GetAsyncKeyState(VK_UP))
        {
            y2 = y - 1;
            if (grid[y2][x] = ' ')
            {
                grid[y][x] = ' ';
                y--;
                grid[y][x] = '~';
            }
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            x2 = x + 1;
            if (grid[y][x2] = ' ')
            {
                grid[y][x] = ' ';
                x++;
                grid[y][x] = '~';
            }
        }

        if (GetAsyncKeyState(VK_LEFT))
        {
            x2 = x - 1;
            if (grid[y][x2] = ' ')
            {
                grid[y][x] = ' ';
                x--;
                grid[y][x] = '~';
            }
        }
        if ((y == 0 || y == 14) || (x == 0 || x == 29) || (y2 == 0 || y2 == 14) || (x2 == 0 || x2 == 29))
        {
            gameOver = true;
        }
        Sleep(50);
    }
}


void gameForMediumMode()
{
    string randomMediumWord;
    string fileMedium[5];
    srand(time(0));
    fstream wordMedium;
    wordMedium.open("levelMedium.txt");

    for (int i = 0; i < 5; i++)
    {
        wordMedium >> fileMedium[i];
    }
    srand(time(0));
    randomMediumWord = fileMedium[rand() % 6];
    //cout << randomMediumWord[0] << " " << randomMediumWord[1] << " " << randomMediumWord[2] << " " << randomMediumWord[3] << " " << endl;
    wordMedium.close();

    srand(time(0));
    grid[1 + rand() % 13][1 + rand() % 27] = randomMediumWord[0];
    grid[1 + rand() % 13][1 + rand() % 27] = randomMediumWord[1];
    grid[1 + rand() % 13][1 + rand() % 27] = randomMediumWord[2];
    grid[1 + rand() % 13][1 + rand() % 27] = randomMediumWord[3];
    while (gameOver = true)
    {
        system("cls");
        for (int map = 0; map < 15; map++)
        {
            cout << grid[map] << endl;
        }

        // checking if the button is pressed
        if (GetAsyncKeyState(VK_DOWN))
        {
            y2 = y + 1;
            if (grid[y2][x] = ' ')
            {
                grid[y][x] = ' ';
                y++;
                grid[y][x] = '~';
            }
        }

        if (GetAsyncKeyState(VK_UP))
        {
            y2 = y - 1;
            if (grid[y2][x] = ' ')
            {
                grid[y][x] = ' ';
                y--;
                grid[y][x] = '~';
            }
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            x2 = x + 1;
            if (grid[y][x2] = ' ')
            {
                grid[y][x] = ' ';
                x++;
                grid[y][x] = '~';
            }
        }

        if (GetAsyncKeyState(VK_LEFT))
        {
            x2 = x - 1;
            if (grid[y][x2] = ' ')
            {
                grid[y][x] = ' ';
                x--;
                grid[y][x] = '~';
            }
        }
        if ((y == 0 || y == 14) || (x == 0 || x == 29) || (y2 == 0 || y2 == 14) || (x2 == 0 || x2 == 29))
        {
            gameOver = true;
        }
        Sleep(50);
    }
}


void gameForHardMode()
{
    string randomHardWord;
    string fileHard[5];
    srand(time(0));
    fstream wordHard;
    wordHard.open("levelHard.txt");

    for (int i = 0; i < 5; i++)
    {
        wordHard >> fileHard[i];
    }
    srand(time(0));
    randomHardWord = fileHard[rand() % 6];
    cout << randomHardWord[0] << " " << randomHardWord[1] << " " << randomHardWord[2] << " " << randomHardWord[3] << " " << randomHardWord[4] << endl;
    wordHard.close();
    srand(time(0));
    grid[1 + rand() % 13][1 + rand() % 27] = randomHardWord[0];
    grid[1 + rand() % 13][1 + rand() % 27] = randomHardWord[1];
    grid[1 + rand() % 13][1 + rand() % 27] = randomHardWord[2];
    grid[1 + rand() % 13][1 + rand() % 27] = randomHardWord[3];
    grid[1 + rand() % 13][1 + rand() % 27] = randomHardWord[4];
    while (gameOver = true)
    {
        system("cls");
        for (int map = 0; map < 15; map++)
        {
            cout << grid[map] << endl;
        }

        // checking if the button is pressed
        if (GetAsyncKeyState(VK_DOWN))
        {
            y2 = y + 1;
            if (grid[y2][x] = ' ')
            {
                grid[y][x] = ' ';
                y++;
                grid[y][x] = '~';
            }
        }

        if (GetAsyncKeyState(VK_UP))
        {
            y2 = y - 1;
            if (grid[y2][x] = ' ')
            {
                grid[y][x] = ' ';
                y--;
                grid[y][x] = '~';
            }
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            x2 = x + 1;
            if (grid[y][x2] = ' ')
            {
                grid[y][x] = ' ';
                x++;
                grid[y][x] = '~';
            }
        }

        if (GetAsyncKeyState(VK_LEFT))
        {
            x2 = x - 1;
            if (grid[y][x2] = ' ')
            {
                grid[y][x] = ' ';
                x--;
                grid[y][x] = '~';
            }
        }
        if (grid[y][x2] == '|' || grid[y2][x] == '|')
        {
            gameOver = true;
        }
        if (grid[y][x2] == '*' || grid[y2][x] == '*')
        {
            gameOver = true;
        }
        Sleep(50);
    }
}

void мenuGame()
{
    using namespace tabulate;
    int menu;
    cout << setw(90) << " _______  __   __  _______    _______  _______  __   __  _______ " << endl;
    cout << setw(90) << "|       ||  | |  ||       |  |       ||   _   ||  |_|  ||       |" << endl;
    cout << setw(90) << "|_     _||  |_|  ||    ___|  |    ___||  |_|  ||       ||    ___|" << endl;
    cout << setw(90) << "  |   |  |       ||   |___   |   | __ |       ||       ||   |___ " << endl;
    cout << setw(90) << "  |   |  |       ||    ___|  |   ||  ||       ||       ||    ___|" << endl;
    cout << setw(90) << "  |   |  |   _   ||   |___   |   |_| ||   _   || ||_|| ||   |___ " << endl;
    cout << setw(90) << "  |___|  |__| |__||_______|  |_______||__| |__||_|   |_||_______|" << endl;
    cout << endl;
    cout << endl;
    Table game_table;
    game_table.add_row({ "1. Easy" });
    game_table.format().width(117);
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
    case 2:
        system("cls");
        gameForMediumMode(); break;
    case 3:
        system("cls");
        gameForHardMode(); break;
    case 4:
        system("cls");
        cout << "Ok, Goodbye! Hope you like our project!";
        break;
    default:
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
    using namespace tabulate;
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
    Table game_table;
    game_table.add_row({ "1. Play" });
    game_table.format().width(117);
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
    case 2:
        system("cls");
        cout << "You need to collect the letters in order the correct order to make a word.\nOur game is played with the arrows on your computer. If you hit the border, the is over.\nThere are 3 modes types of difficulties.";
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

int main()
{
    Menu();
}
