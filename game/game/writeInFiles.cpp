#include "precompile.h"
#include "writeInFiles.h"

using namespace std;
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