#include <iostream>
#include "Card_wallet.h"
int main() {

    Credit_card a("ZXC", "172304987", 100, 1000);
    /*    a.printData();
        a.printHistory();*/
    std::tm zxc({ 0,12,12,10,1,2023 });

    a.deposit("", 1000000, zxc);
    a.spend("a", 1, zxc);
    a.spend("v", 23, zxc);
    a.spend("b", 45, zxc);
    /*    a.printHistory();
        std::cout << a.getCardBalance() << std::endl;*/
    Debit_card b("abc", "333333", 1000);
    std::tm abc({ 1,11,02,11,3,2021 });

    b.deposit("", 1000000, abc);
    b.spend("a", 3, abc);
    b.spend("v", 767, abc);
    b.spend("b", 9, abc);
    Card_wallet QWE;
    QWE.addCreditCard(a);
    QWE.addDebitCard(b);
    QWE.printCards();
    QWE.saveToFileCardHistory("list.txt");
    return 0;
}