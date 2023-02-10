#include "Operation.h"

Operation::Operation(bool Type, string Info, double Cost, tm Date) {
    type = Type;
    info = Info;
    if(Cost > 0)
        cost = Cost;
    date = Date;
}



void Operation::print_Data() const {
    cout << "Type : " << ((type) ? "Deposit\n" : "Spend\n") << "Info : " << info << "\nPrice : " << cost << "\nDate : " << asctime(&date) << endl;
}

void Operation::dataToFile(string fileName) const
{
    ofstream file;
    file.open(fileName, ios_base::app);
    file << ((type) ? "Deposit;" : "Spend;");
    file << info << ";";
    file << cost << ";";
    file << date.tm_mday << ".";
    file << date.tm_mon + 1 << ".";
    file << date.tm_year << " ";
    file << date.tm_hour << ":";
    file << date.tm_min << ":";
    file << date.tm_sec << ";\n";
    file.close();
}
