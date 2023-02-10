#pragma once
#pragma warning(disable : 4996)
#include <string>
#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;
class Operation {
private:
    bool type;
    string info;
    double cost;
    tm date;
public:
    Operation(bool Type, string Info, double Cost, tm Date);
    void print_Data()const; 
    void dataToFile(string fileName)const;
};

