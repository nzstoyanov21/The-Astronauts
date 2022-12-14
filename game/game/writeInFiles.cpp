#include "precompile.h"
#include "writeInFiles.h"

using namespace std;
void writeInFileEasy()
{
    //write in the file levelEasy.txt
    //declare the fileEasy
    fstream fileEasy;
    fileEasy.open("levelEasy.txt", ios::out);//input and output 
    if (fileEasy.is_open())
    {
        //write the words in the levelEasy.txt
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
    //declare the fileMedium
    fstream fileMedium;
    fileMedium.open("levelMedium.txt", ios::out);//input and output
    if (fileMedium.is_open())
    {
        //write the words in the levelMedium.txt
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
    //declare the fileMedium
    fstream fileHard;
    fileHard.open("levelHard.txt", ios::out);
    if (fileHard.is_open())
    {
        //write the words in the levelHard.txt
        fileHard << "space" << endl;
        fileHard << "power" << endl;
        fileHard << "agent" << endl;
        fileHard << "award" << endl;
        fileHard << "mouse" << endl;
        fileHard.close();
    }
}