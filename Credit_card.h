#pragma once
#include "account.h"
class Credit_card : public account{
private:
    double limit = 0;
public:
    Credit_card();
    Credit_card(string Name);
    Credit_card(double Balance);
    Credit_card(string Name, string Number, double Balance, double Limit);
    Credit_card(string Name, string Number);
    Credit_card(const Credit_card& obj);
    double get_Limit() const;
    void set_Limit(double val);
    void printData() const;
};

