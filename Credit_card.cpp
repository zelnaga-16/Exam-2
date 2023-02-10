#include "Credit_card.h"

Credit_card::Credit_card() = default;

Credit_card::Credit_card(string Name)
{
    name = Name;
}

Credit_card::Credit_card(double Balance)
{
    balance = Balance;
}

Credit_card::Credit_card(string Name, string Number, double Balance, double Limit)
{
    name = Name;
    number = Number;
    balance = Balance;
    if (Limit > 0)
        limit = Limit;
}

Credit_card::Credit_card(string Name, string Number)
{
    name = Name;
    number = Number;
}

Credit_card::Credit_card(const Credit_card& obj)
{
    name = obj.name;
    number = obj.number;
    balance = obj.balance;
    limit = obj.limit;
    history = obj.history;
}

double Credit_card::get_Limit() const
{
    return limit;
}

void Credit_card::set_Limit(double Limit)
{
    limit = Limit;
}

void Credit_card::printData() const
{
    cout << "Name : " << name << "\nType : Credit\n" << "Number : " << number << "\nLimit : " << limit << "\nBalance : " << balance << std::endl;

}
