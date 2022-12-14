#include "precompile.h"
#include "game.h"

using namespace std;

// declaring a variable to check if we lose
bool gameOver = false;

// declaring a variables for the coordinates

int x = 1;
int y = 1;
int y2;
int x2;

int counter = 0;



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
    srand(time(NULL));
    randomEasyWord = fileEasy[rand() % 6];
    //cout << randomEasyWord[0] << " " << randomEasyWord[1] << " " << randomEasyWord[2] << endl;
    wordEasy.close();
    srand(time(NULL));
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
        
        Sleep(50);
    }
}

void gameForMediumMode()
{
    string randomMediumWord;
    string fileMedium[5];
    srand(time(NULL));
    fstream wordMedium;
    wordMedium.open("levelMedium.txt");
    for (int i = 0; i < 5; i++)
    {
        wordMedium >> fileMedium[i];
    }
    srand(time(NULL));
    randomMediumWord = fileMedium[rand() % 6];
    //cout << randomMediumWord[0] << " " << randomMediumWord[1] << " " << randomMediumWord[2] << " " << randomMediumWord[3] << " " << endl;
    wordMedium.close();
    srand(time(NULL));
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
    srand(time(NULL));
    randomHardWord = fileHard[rand() % 6];
    cout << randomHardWord[0] << " " << randomHardWord[1] << " " << randomHardWord[2] << " " << randomHardWord[3] << " " << randomHardWord[4] << endl;
    wordHard.close();
    srand(time(NULL));
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
        
        Sleep(50);
    }
}