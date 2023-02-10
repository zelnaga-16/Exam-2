#pragma once
#include "account.h"
class Debit_card : public account{
public:
    Debit_card();
    Debit_card(string Name);
    Debit_card(double Balance);
    Debit_card(string Name, string Number, double Balance);
    Debit_card(string Name, string Number);
    Debit_card(const Debit_card& obj);
    void printData()const;
};

