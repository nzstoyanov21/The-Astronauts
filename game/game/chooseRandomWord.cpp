#include "precompile.h"
#include "chooseRandomWord.h"

using namespace std;

void chooseWordEasy()
{
    //declare the strings 
    string randomEasyWord;
    string fileEasy[5];
    //declare the wordEasy
    fstream wordEasy;
    wordEasy.open("levelEasy.txt");//open the levelEasy.txt

    for (int i = 0; i < 5; i++)
    {
        wordEasy >> fileEasy[i];
    }
    srand(time(0));//set the seed
    randomEasyWord = fileEasy[rand() % 6];//choose the random word
    cout << randomEasyWord[0] << " " << randomEasyWord[1] << " " << randomEasyWord[2] << endl;
    wordEasy.close();//close the file
}

void chooseWordMedium()
{
    //declare the strings 
    string randomMediumWord;
    string fileMedium[5];
    //declare the wordMedium
    fstream wordMedium;
    wordMedium.open("levelMedium.txt");//open the levelMedium.txt

    for (int i = 0; i < 5; i++)
    {
        wordMedium >> fileMedium[i];
    }
    srand(time(0));
    randomMediumWord = fileMedium[rand() % 6];//choose the random word
    cout << randomMediumWord[0] << " " << randomMediumWord[1] << " " << randomMediumWord[2] << " " << randomMediumWord[3] << " " << endl;
    wordMedium.close();
}

void chooseWordHard()
{
    //declare the strings 
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