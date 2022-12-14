#include "precompile.h"
#include "chooseRandomWord.h"

using namespace std;

void chooseWordEasy()
{
    string randomEasyWord;
    string fileEasy[5];
    
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