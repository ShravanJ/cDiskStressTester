# cDiskStressTester
a C++ based disk stress tester, based on jDiskStressTester

Background
==========
I wrote jDiskStressTester during my senior year in high school when I was primarily programming in Java. Now in my freshman year of college I am focussing on C++. I thought it was time to rewrite jDiskStressTester in C++.

cDiskStressTester vs jDiskStressTester
======================================
cDiskStressTester
-----------------
*Uses seperate class for file creation
*Uses ctime clock for calculation how long it took to create the files
*Uses raw file stream objects for creating the files

jDiskStressTester
-----------------
*Runs the file creation and prompting in same class
*Uses systemTimeMilis (time from epoch) to calculate how long it took to create the files
*Uses PrintWriter object for creating the files

Overall, cDiskStressTester seems to be a bit faster and more accurate with the file creation time reporting. I will do some more testing between the two and report back here later.

You can view the source for jDiskStressTester at https://github.com/ShravanJ/jDiskStressTester
