/*
 * File:   data.cpp
 * Author: Nathan R
 *
 * Created on April 25, 2018, 4:34 PM
 */
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <algorithm>
#include <sstream>
#include <vector>
#include <ctime>

#include "data.h"

using namespace std;

vector<vector<string>> getCustomerData(string name, int i)
{
    vector<vector<string>> data;
    string line;
    vector<string> row;
    char delimiter = ';';
    ifstream file(name + ".txt");
    int j = 0;
    if(file.is_open()) {
        while (getline(file, line, delimiter)) {
            if (j == i - 2) {
                delimiter = '\n';
            }
            if (j == i - 1) {
                delimiter = ';';
                j = 0;
                row.push_back(line);
                data.push_back(row);
                row.clear();
                continue;
            }
            row.push_back(line);
            j++;
        }
        file.close();
    }
    return data;
}

string generateID()
{
    bool unique = false;
//    while(!unique) {
//        srand(time(0));
//        int x = rand() % 1000000;
//        if(searchID(customerList, x) .size() > 0)
//        {
//            unique = true;
//        }
//    }
    stringstream ss;
    ss << x;
    string r = ss.str();
    string ID = "";
    int size = r.length();
    
    for(;size < 6; size++)
    {
        ID += "0";
    }
    ID += r;
    return ID;
    
}