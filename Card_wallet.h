#pragma once

#include "Credit_Card.h"
#include "Debit_Card.h"
class Card_wallet
{
private:
    std::vector<Debit_card> debit_cards;
    std::vector<Credit_card> credit_cards;
public:
    Card_wallet();
    void addCreditCard(string Name, string Number, double Limit, double Balance);
    void addDebitCard(string Name, string Number, double Balance);
    void addCreditCard(const Credit_card& obj);
    void addDebitCard(const Debit_card& obj);

    void deleteCreditCard(string Name);
    void deleteDebitCard(string Name);

    void printCards()const;

    void saveToFileCardHistory(string fileName);
};

