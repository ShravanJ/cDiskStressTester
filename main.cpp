/*
    cDiskStressTester - a c++ based disk stress tester
    Author: Shravan Jambukesan <sxj160330@utdallas.edu>
    11/30/2016
    Compiled with gcc
    PLEASE NOTE: The long term effects of running this test repetitively *still* have not been studied. Use with caution.
*/

#include <iostream>
#include <ctime>
#include <sstream>
#include "FileCreator.h"

bool createFiles(long);

using namespace std;

string verbose;
bool isVerbose;

int main()
{

    long numFiles;
    bool isRepeat = true;
    string repeating = "";
    while(isRepeat == true)
    {
        isRepeat = false;
        bool b = true;
        cout << "Welcome to cDiskStressTester" << endl;
        cout << "Designed and implemented by Shravan Jambukesan" << endl;
        cout << "Source code available at https://github.com/ShravanJ/cDiskStressTester" << endl;
        cout << "Press CTRL+C to stop the program before it finishes if needed" << endl;
        cout << "Enter in the number of files you would like to create: ";
        cin >> numFiles;
        cout << "Would you like verbose output <yes/no>?: ";
        cin >> verbose;
        if(verbose == "yes")
        {
            isVerbose = true;
        }
        else
        {
            isVerbose = false;
        }
        cout << "Running stress test with " << numFiles << " files" << endl;
        while(b)
        {
            bool run = createFiles(numFiles);
            if(run)
            {
                b = false;
            }
        }
        cout << endl;
        cout << "Would you like to test again <yes/no>?: ";
        cin >> repeating;
        if(repeating == "yes")
        {
            isRepeat = true;
        }
        cout << endl;
    }
    return 0;
}

bool createFiles(long num)
{
    bool done = false;
    string str = "";
    double duration;
    clock_t start;
    start = clock();
    ostringstream oss;
    for(long x = 1; x <= num; x++)
    {
        oss << x;
        str = "cDiskStressTesterFile_" + oss.str() + ".txt";
        oss.str("");
        oss.clear();
        FileCreator fc(str);
        if(isVerbose)
        {
            cout << "File " << str << " was created" << endl;
        }
        if(x == num)
        {
            done = true;
            duration = (clock() - start) / (double) CLOCKS_PER_SEC;
            cout << num << " files were generated in " << duration << " seconds" << endl;
        }
    }
    return done;
}
