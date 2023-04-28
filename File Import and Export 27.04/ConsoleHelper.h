#ifndef UNTITLED19_CONSOLEHELPER_H
#define UNTITLED19_CONSOLEHELPER_H

#include <iostream>
#include <fstream>
#include <string>
#include <fstream>
#include <vector>

#include "Parser.h"

using namespace std;

void PrintData(string* data) {
    cout << data[0] << " " << data[1] << " " << data[2] << " " << data[3] << " " << data[4] << endl;
}
void PrintDataPersons(vector<string*> data){
    for (int i = 0; i < data.size(); ++i) {
        PrintData(data[i]);
    }
}
#endif //UNTITLED19_CONSOLEHELPER_H
