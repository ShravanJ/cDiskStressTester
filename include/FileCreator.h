/*
    FileCreator Header for cDiskStressTester
    Author: Shravan Jambukesan <sxj160330@utdallas.edu>
    11/30/2016
    Compiled with gcc
*/

#ifndef FILECREATOR_H
#define FILECREATOR_H

#include <fstream>
#include <string>

class FileCreator
{
    public:
        FileCreator();
        FileCreator(std::string);
        void createFile(std::string);
        std::string getFileName();
        void setFileName(std::string);
    protected:

    private:
        std::string fileName;
};

#endif // FILECREATOR_H
