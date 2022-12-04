#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <windows.h>
#include <cstdlib>

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

char grid[8][20] = {
    "*******************",
    "|~                |",
    "|                 |",
    "|                 |",
    "|                 |",
    "|                 |",
    "|                 |",
    "*******************",
};



void writeInFile()
{
    //write in the file levelEasy.txt
    fstream file;
    file.open("levelEasy.txt", ios::out);
    if (file.is_open())
    {
        file << "hat" << endl;
        file << "act" << endl;
        file << "cat" << endl;
        file << "dog" << endl;
        file << "bug" << endl;
        file.close();
    }
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
int main()
{
    do {
        system("cls");
        for (int map = 0; map < 8; map++)
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
        if ((y == 0 || y == 8) || (x == 0 || x == 19))
        {
            gameOver = true;
        }

    } while (!gameOver);
}
