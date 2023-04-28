//Игнатьев Владимир Владимирович
/*Написать программу по импорту и экспорту данных из/в файл.
 * Данные должны быть следующие: год|месяц|день|приход|расход*/

#include "ConsoleHelper.h"

vector<string *> ImportFormFile(string path) {
    ifstream file;
    file.open(path);

    vector<string *> result;
    string line;
    while (getline(file, line)) {
        char delimiter = '|';
        const int SIZE = 5;
        string *data = new string[SIZE];
        data[0] = Parser(line, delimiter);
        data[1] = Parser(line, delimiter);
        data[2] = Parser(line, delimiter);
        data[3] = Parser(line, delimiter);
        data[4] = line;
        result.push_back(data);
    }
    file.close();
    return result;
}

void ExportToFile(string &pathOutput, int year, int month, int day, int income, int expense) {
    ofstream file;
    file.open(pathOutput, ios::app);
    file << year << "|" << month << "|" << day << "|" << income << "|" << expense << endl;
    file.close();

}

int main() {

    string pathInput = "C:\\Programming\\untitled19\\Input.psv";
    auto data = ImportFormFile(pathInput);
    PrintDataPersons(data);

    string pathOutput = "C:\\Programming\\untitled19\\Output.psv";
    int year = 2023;
    int month = 27;
    int day = 04;
    int income = 2000;
    int expense = 1900;
    ExportToFile(pathOutput, 2023, 27, 04, 2000, 1900);

    return 0;
}
