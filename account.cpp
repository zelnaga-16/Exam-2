#include "account.h"

string account::get_Name() const
{
	return name;
}

string account::get_Number() const
{
	return number;
}

double account::get_Balance() const
{
	return balance;
}

vector<Operation> account::get_History() const
{
	return history;
}

void account::set_Number(string Number)
{
	number = Number;
}

void account::set_Balance(double Balance)
{
	balance = Balance;
}

void account::set_History(vector<Operation> History)
{
	for(auto item: History)
	{
		history.push_back(item);
	}
}

void account::deposit(string Info, double Cost, tm Date)
{
	history.push_back({ 1, Info, Cost, Date });
	balance += Cost;
}

void account::spend(string Info, double Cost, tm Date)
{
	history.push_back({ 0, Info, Cost, Date });
	balance -= Cost;
}

void account::print_History() const
{
	cout << "Name : " << name << std::endl;
	for (auto item : history)
	{
		item.print_Data();
	}
}
