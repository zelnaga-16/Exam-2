#include "Card_wallet.h"

Card_wallet::Card_wallet() = default;

void Card_wallet::addCreditCard(string Name, string Number, double Limit, double Balance)
{
	credit_cards.push_back(Credit_card(Name, Number, Limit, Balance));
}

void Card_wallet::addDebitCard(string Name, string Number, double Balance)
{
	debit_cards.push_back(Debit_card(Name, Number, Balance));
}

void Card_wallet::addCreditCard(const Credit_card& obj)
{
	credit_cards.push_back(obj);
}

void Card_wallet::addDebitCard(const Debit_card& obj)
{
	debit_cards.push_back(obj);
}

void Card_wallet::deleteCreditCard(string Name)
{
    int i = 0;
    auto iterator = credit_cards.begin();
    for (auto item : credit_cards)
    {
        if (Name == item.get_Name()) {
            credit_cards.erase(iterator + i);
            break;
        }
        i++;
    }
}

void Card_wallet::deleteDebitCard(string Name)
{
    int i = 0;
    auto iterator = debit_cards.begin();
    for (auto item : debit_cards)
    {
        if (Name == item.get_Name()) {
            debit_cards.erase(iterator + i);
            break;
        }
        i++;
    }
}



void Card_wallet::printCards() const
{
    for (auto item : credit_cards) item.printData();

    for (auto item : debit_cards) item.printData();
}

void Card_wallet::saveToFileCardHistory(string fileName)
{
    ofstream file;
    file.open(fileName, std::ios_base::out);
    for (auto item : credit_cards)
    {
        file << item.get_Name() << ";" << item.get_Number() << ";\n";
        for (auto item1 : item.get_History())
            item1.dataToFile(fileName);
    }
    for (auto item : debit_cards)
    {
        file << item.get_Name() << ";" << item.get_Number() << ";\n";
        for (auto item1 : item.get_History())
            item1.dataToFile(fileName);
    }
}


