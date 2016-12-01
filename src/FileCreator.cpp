/*
    FileCreator Implementation for cDiskStressTester
    Author: Shravan Jambukesan <sxj160330@utdallas.edu>
    11/30/2016
    Compiled with gcc
*/

#include "FileCreator.h"

using namespace std;

FileCreator::FileCreator()
{
    fileName = "";
}

FileCreator::FileCreator(string name)
{
    fileName = name;
    createFile(fileName);
}

void FileCreator::createFile(string file)
{
    ofstream stream(file);
    stream << "cDiskStressTester test file" << endl;
    stream.close();
}

void FileCreator::setFileName(string newName)
{
    fileName = newName;
}

string FileCreator::getFileName()
{
    return fileName;
}
