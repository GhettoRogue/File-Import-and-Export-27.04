#ifndef UNTITLED19_PARSER_H
#define UNTITLED19_PARSER_H

#pragma once

#include <string>

using namespace std;

string Parser(string& str, char delimiter) {
    int pos = str.find(delimiter);
    string result = str.substr(0, pos);
    str = str.substr(pos + 1);
    return result;
}
#endif //UNTITLED19_PARSER_H
