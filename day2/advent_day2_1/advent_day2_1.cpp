// advent_day2_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    string filename;
    int day = 0;
    if (argc == 2) {
        filename = argv[1];
    }
    else if (argc == 3) {
        filename = argv[1];
        day = stoi(argv[2]);
    }
    else {
        //cout << "ERROR: NO FILE CHOSEN!\n";
        return -1;
        //no input arguments
    }
    cout << filename << endl;
    int forward = 0;
    int depth = 0;
    int aim = 0;

    fstream filein;
    string dir;
    filein.open(filename, ios::in);
    if (day == 0) {
        while (getline(filein, dir)) {
            char firstLetter = dir[0];
            int amount = stoi(dir.substr(dir.find_last_of(' ')));
            //cout << amount << endl;

            switch (firstLetter) {
            case 'f':
                forward += amount;
                break;
            case 'd':
                depth += amount;
                break;
            case 'u':
                depth -= amount;
                break;
            default:
                cout << "ERROR" << endl;
            }
        }
    }
    else {
        while (getline(filein, dir)) {
            char firstLetter = dir[0];
            int amount = stoi(dir.substr(dir.find_last_of(' ')));
            //cout << amount << endl;

            switch (firstLetter) {
            case 'f':
                forward += amount;
                depth += aim * amount;
                break;
            case 'd':
                //depth += amount;
                aim += amount;
                break;
            case 'u':
                //depth -= amount;
                aim -= amount;
                break;
            default:
                cout << "ERROR" << endl;
            }
        }
        
    }
    filein.close();
    //std::cout << "Hello World!\n";
    cout << depth << " * " << forward << " = " << depth * forward << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
