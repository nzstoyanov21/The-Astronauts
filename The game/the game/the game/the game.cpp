#include <iostream>
#include <fstream>
#include <string>

using namespace std;
void Grid()
{
    
}

void writeInFile()
{
    fstream file;
    file.open("levelEasy.txt", ios::out);
    if (file.is_open()) {
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
    fstream file;
    file.open("levelEasy.txt", ios::in);
    if(file.is_open())
    {
        string temp;
        do
        {
            cout << temp << endl;
        } 
        while (getline(file, temp));
        file.close();
    }
}
int main()
{
    writeInFile();
    readInFile();
    Grid();
}
