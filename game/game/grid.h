#include "precompile.h"

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