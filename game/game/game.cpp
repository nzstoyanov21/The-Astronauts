#include "precompile.h"
#include "game.h"
#include "menu.h"

using namespace std;

// declaring a variable to check if we lose
bool gameOver = false;
char youDie;

// declaring a variables for the coordinates

int x = 2;
int y = 1;
int y2;
int x2;

int counter = 0;


// make a grid of a two dimensional array

char grid[13][27] =
{
    "**************************",
    "|                        |",
    "|                        |",
    "|                        |",
    "|                        |",
    "|                        |",
    "|                        |",
    "|                        |",
    "|                        |",
    "|                        |",
    "|                        |",
    "|                        |",
    "**************************",
};

void gameForEasyMode()
{
    counter = 0;
    x = 2;
    y = 1;
    string randomEasyWord;
    string fileEasy[5];
    string word;
    srand(time(NULL));
    fstream wordEasy;
    wordEasy.open("levelEasy.txt");
    if(wordEasy.is_open())
    {
        for (int i = 0; i < 5; i++)
        {
            wordEasy >> fileEasy[i];
        }
    }
    else
    {
        exit(1);
    }
    randomEasyWord = fileEasy[rand() % 5];
    fileEasy[rand() % 5] = word;
    //cout << randomEasyWord[0] << " " << randomEasyWord[1] << " " << randomEasyWord[2] << endl;
    wordEasy.close();
    //save the coordinates about the letters
    int createWordEasy1Y = { 1 + rand() % 10 };
    int createWordEasy1X = { 1 + rand() % 24 };
    grid[createWordEasy1Y][createWordEasy1X] = randomEasyWord[0];

    int createWordEasy2Y = { 1 + rand() % 10 };
    int createWordEasy2X = { 1 + rand() % 24 };
    grid[createWordEasy2Y][createWordEasy2X] = randomEasyWord[1];

    int createWordEasy3Y = { 1 + rand() % 10 };
    int createWordEasy3X = { 1 + rand() % 24 };
    grid[createWordEasy3Y][createWordEasy3X] = randomEasyWord[2];

    grid[createWordEasy1Y][createWordEasy1X] = randomEasyWord[0];
    grid[createWordEasy2Y][createWordEasy2X] = randomEasyWord[1];
    grid[createWordEasy3Y][createWordEasy3X] = randomEasyWord[2];    
    system("cls");
    while(true)
    {    

        if (y > 0 && y < 14 && x > 0 && x < 24)
        { 
            system("cls");
            for (int map = 0; map < 13; map++)
            {
                cout << grid[map] << endl;
            }

            // checking if the button is pressed
            if (GetAsyncKeyState(VK_DOWN))//check if the button arrow down is clicked
            {
                y2 = y + 1;
                if (grid[y2][x] = ' ')
                {
                    grid[y][x] = ' ';
                    y++;
                    grid[y][x] = '~';
                }
            }

            if (GetAsyncKeyState(VK_UP))//check if the button arrow up is clicked
            {
                y2 = y - 1;
                if (grid[y2][x] = ' ')
                {
                    grid[y][x] = ' ';
                    y--;
                    grid[y][x] = '~';
                }
            }

            if (GetAsyncKeyState(VK_RIGHT))//check if the button arrow right is clicked
            {
                x2 = x + 1;
                if (grid[y][x2] = ' ')
                {
                    grid[y][x] = ' ';
                    x++;
                    grid[y][x] = '~';
                }
            }

            if (GetAsyncKeyState(VK_LEFT))//check if the button arrow left is clicked
            {
                x2 = x - 1;
                if (grid[y][x2] = ' ')
                {
                    grid[y][x] = ' ';
                    x--;
                    grid[y][x] = '~';
                }
            }
            if(x == createWordEasy1X && y == createWordEasy1Y)
            {
                counter++;
                createWordEasy1X = 100;
            }

            if(x == createWordEasy2X && y == createWordEasy2Y)
            {
                counter++;
                createWordEasy2X = 100;
            }
            if (x == createWordEasy3X && y == createWordEasy3Y)
            {
                counter++;
                createWordEasy3X = 100;
            }
            if(counter == 3)
            {
                break;
            }
            if (counter == 3)
            {
                cout << "Congratulations, you won" << endl;
            }
            Sleep(50);           
        }
        else
        {
            system("cls");
            cout << "You lost! Go back to the Menu? Y/N: ";
            cin >> youDie;
            if (youDie == 'Y')
            {
                system("cls");
                Menu();
                break;
            }
            else
            {
                system("cls");
                cout << "Ok, goodbye! Hope you liked our project!";
                break;
            }

        }
        
    }
    if(counter != 3)
    {
        cout << "Try again to make a word!" << endl;
    }
    cout << "You lost! Go back to the Menu? Y/N: ";
    cin >> youDie;
    if (youDie == 'Y')
    {
        system("cls");
        Menu();
    }
    else
    {
        system("cls");
        cout << "Ok, goodbye! Hope you liked our project!";
    }
}

void gameForMediumMode()
{
    counter = 0;
    x = 2;
    y = 1;
    string randomMediumWord;
    char createWordMedium[5];
    string fileMedium[5];
    string word;
    srand(time(NULL));
    fstream wordMedium;
    wordMedium.open("levelMedium.txt");
    
    if (wordMedium.is_open())
    {
        for (int i = 0; i < 5; i++)
        {
            wordMedium >> fileMedium[i];
        }
    }
    else
    {
        exit(1);
    }
    srand(time(NULL));
    randomMediumWord = fileMedium[rand() % 5];
    fileMedium[rand() % 5] = word;
    //cout << randomMediumWord[0] << " " << randomMediumWord[1] << " " << randomMediumWord[2] << " " << randomMediumWord[3] << " " << endl;
    wordMedium.close();
    //save the coordinates about the letters
    int createWordMedium1Y = { 1 + rand() % 10 };
    int createWordMedium1X = { 1 + rand() % 24 };
    grid[createWordMedium1Y][createWordMedium1X] = randomMediumWord[0];

    int createWordMedium2Y = { 1 + rand() % 10 };
    int createWordMedium2X = { 1 + rand() % 24 };
    grid[createWordMedium2Y][createWordMedium2X] = randomMediumWord[1];

    int createWordMedium3Y = { 1 + rand() % 10 };
    int createWordMedium3X = { 1 + rand() % 24 };
    grid[createWordMedium3Y][createWordMedium3X] = randomMediumWord[2];

    int createWordMedium4Y = { 1 + rand() % 10 };
    int createWordMedium4X = { 1 + rand() % 24 };
    grid[createWordMedium4Y][createWordMedium4X] = randomMediumWord[3];

    grid[createWordMedium1Y][createWordMedium1X] = randomMediumWord[0];
    grid[createWordMedium2Y][createWordMedium2X] = randomMediumWord[1];
    grid[createWordMedium3Y][createWordMedium3X] = randomMediumWord[2];
    grid[createWordMedium4Y][createWordMedium4X] = randomMediumWord[3];
    srand(time(NULL));

    while (true)
    {

        if (y > 0 && y < 15 && x > 0 && x < 25)
        {
            system("cls");
            for (int map = 0; map < 13; map++)
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
            if (x == createWordMedium1X && y == createWordMedium1Y)
            {
                counter++;
                createWordMedium1X = 100;
            }

            if (x == createWordMedium2X && y == createWordMedium2Y)
            {
                counter++;
                createWordMedium2X = 100;
            }
            if (x == createWordMedium3X && y == createWordMedium3Y)
            {
                counter++;
                createWordMedium3X = 100;
            }
            if (x == createWordMedium4X && y == createWordMedium4Y)
            {
                counter++;
                createWordMedium4X = 100;
            }
            if (counter == 4)
            {
                cout << "Congratulations, you won" << endl;
                break;
            }
            Sleep(50);
        }
        else
        {
            system("cls");
            cout << "You lost! Go back to the Menu? Y/N: ";
            cin >> youDie;
            if (youDie == 'Y')
            {
                system("cls");
                Menu();
                break;
            }
            else
            {
                system("cls");
                cout << "Ok, goodbye! Hope you liked our project!";
                break;
            }

        }

        if (counter != 4)
        {
            cout << "Try again to make a word!" << endl;
        }
        cout << "You lost! Go back to the Menu? Y/N: ";
        cin >> youDie;
        if (youDie == 'Y')
        {
            system("cls");
            Menu();
        }
        else
        {
            system("cls");
            cout << "Ok, goodbye! Hope you liked our project!";
        }
    }
}


void gameForHardMode()
{
    counter = 0;
    x = 2;
    y = 1;
    string randomHardWord;
    string fileHard[5];
    string word;
    srand(time(0));
    fstream wordHard;
    wordHard.open("levelHard.txt");
    if (wordHard.is_open())
    {
        for (int i = 0; i < 5; i++)
        {
            wordHard >> fileHard[i];
        }
    }
    else
    {
        exit(1);
    }
    srand(time(NULL));
    randomHardWord = fileHard[rand() % 5]; 
    fileHard[rand() % 5] = word;
    //cout << randomHardWord[0] << " " << randomHardWord[1] << " " << randomHardWord[2] << " " << randomHardWord[3] << " " << randomHardWord[4] << endl;
    wordHard.close();
    srand(time(NULL));
    //save the coordinates about the letters
    int createWordHard1Y = { 1 + rand() % 10 };
    int createWordHard1X = { 1 + rand() % 24 };
    grid[createWordHard1Y][createWordHard1X] = randomHardWord[0];

    int createWordHard2Y = { 1 + rand() % 10 };
    int createWordHard2X = { 1 + rand() % 24 };
    grid[createWordHard2Y][createWordHard2X] = randomHardWord[1];
    
    int createWordHard3Y = { 1 + rand() % 10 };
    int createWordHard3X = { 1 + rand() % 24 };
    grid[createWordHard3Y][createWordHard3X] = randomHardWord[2];

    int createWordHard4Y = { 1 + rand() % 10 };
    int createWordHard4X = { 1 + rand() % 24 };
    grid[createWordHard4Y][createWordHard4X] = randomHardWord[3];

    int createWordHard5Y = { 1 + rand() % 10 };
    int createWordHard5X = { 1 + rand() % 24 };
    grid[createWordHard5Y][createWordHard5X] = randomHardWord[4];

    grid[createWordHard1Y][createWordHard1X] = randomHardWord[0];
    grid[createWordHard2Y][createWordHard2X] = randomHardWord[1];
    grid[createWordHard3Y][createWordHard3X] = randomHardWord[2];
    grid[createWordHard4Y][createWordHard4X] = randomHardWord[3];
    grid[createWordHard5Y][createWordHard5X] = randomHardWord[4];

    grid[1 + rand() % 10][1 + rand() % 25] = randomHardWord[0];
    grid[1 + rand() % 10][1 + rand() % 25] = randomHardWord[1];
    grid[1 + rand() % 10][1 + rand() % 25] = randomHardWord[2];
    grid[1 + rand() % 10][1 + rand() % 25] = randomHardWord[3];
    grid[1 + rand() % 10][1 + rand() % 25] = randomHardWord[4];
    system("cls");
    while (true)
    {
        system("cls");
        if (y > 0 && y < 12 && x > 0 && x < 23)
        {
            system("cls");
            for (int map = 0; map < 13; map++)
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
            if (x == createWordHard1X && y == createWordHard1Y)
            {
                counter++;
                createWordHard1X = 100;
            }

            if (x == createWordHard2X && y == createWordHard2Y)
            {
                counter++;
                createWordHard2X = 100;
            }
            if (x == createWordHard3X && y == createWordHard3Y)
            {
                counter++;
                createWordHard3X = 100;
            }
            if (x == createWordHard4X && y == createWordHard4Y)
            {
                counter++;
                createWordHard4X = 100;
            }
            if (x == createWordHard5X && y == createWordHard5Y)
            {
                counter++;
                createWordHard5X = 100;
            }
            if (counter == 5)
            {
                break;
                cout << "Congratulations, you won" << endl;
            }
            Sleep(50);
        }
        else
        {
            system("cls");
            cout << "You lost! Go back to the Menu? Y/N: ";
            cin >> youDie;
            if (youDie == 'Y')
            {
                system("cls");
                Menu();
                break;
            }
            else
            {
                system("cls");
                cout << "Ok, goodbye! Hope you liked our project!";
                break;
            }

        }

    }
    if(counter != 5)
    {
        cout << "Try again to make a word!" << endl;
    }
    cout << "You lost! Go back to the Menu? Y/N: ";
    cin >> youDie;
    if (gameOver == 'Y')
    {
        system("cls");
        Menu();
    }
    else
    {
        system("cls");
        cout << "Ok, goodbye! Hope you liked our project!";
    }
}
