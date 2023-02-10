#pragma once
#include <iostream>
#include <vector>
#include "Operation.h"
class account {
protected:
    string name = "Bank Account";
    string number;
    double balance = 0;
    vector<Operation> history;
public:
    string get_Name() const;
    string get_Number() const;
    double get_Balance() const;
    vector<Operation> get_History() const;
    void set_Number(string Number);
    void set_Balance(double Balance);
    void set_History(vector<Operation>History);
    void deposit(string Info, double Cost, tm Date);
    void spend(string Info, double Cost, tm Date);
    void print_History()const;
};



