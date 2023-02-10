#include "Debit_card.h"

Debit_card::Debit_card() = default;

Debit_card::Debit_card(string Name)
{
	name = Name;
}

Debit_card::Debit_card(double Balance)
{
	balance = Balance;
}

Debit_card::Debit_card(string Name, string Number, double Balance)
{
    name = Name;
    number = Number;
    balance = Balance;
}

Debit_card::Debit_card(string Name, string Number)
{
    name = Name;
    number = Number;
}

Debit_card::Debit_card(const Debit_card& obj)
{
    name = obj.name;
    number = obj.number;
    balance = obj.balance;
    history = obj.history;
}

void Debit_card::printData() const
{
    cout << "Name : " << name << "\nType : Credit\n" << "Number : " << number << "\nBalance : " << balance << std::endl;
}
