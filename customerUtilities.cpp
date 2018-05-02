/* 
 * File:   customerUtility.cpp
 * Author: Hai Le
 * 
 * Created on April 22, 2018, 2:24 PM
 */

#include <queue>

#include "customerUtilities.h"

using namespace std;

vector<int> searchLastName(vector<Customer *>& searchList, string name) {
    vector<int> foundList;

    // if match is found, add the index of that record to the vector
    for (int i = 0; i < searchList.size(); i++) {
        if (searchList[i]->getLname() == name)
            foundList.push_back(i);
    }

    return foundList;
}

vector<int> searchID(vector<Customer *>& searchList, string ID) {
    vector<int> foundList;

    // if match is found, add the index of that record to the vector
    for (int i = 0; i < searchList.size(); i++) {
        if (searchList[i]->getID() == ID)
            foundList.push_back(i);
    }

    return foundList;
}

void updateRecordFile(vector<Customer *>& list, int size) {
    ofstream outfile;

    outfile.open("customers.txt", ios_base::app);
    
    // append only newly added records
    for (int i = size; i < list.size(); i++) {
        outfile << list[i]->getID() << ";"
                << list[i]->getFname() << ";"
                << list[i]->getLname() << ";"
                << list[i]->getStreet() << ";"
                << list[i]->getCity() << ";" 
                << list[i]->getState() << ";" 
                << list[i]->getZip() << endl;
    }
    outfile.close();
}

void updateQueue(queue<string> list) {
    ofstream outfile;

    outfile.open("rainbowList.txt", ios_base::trunc);
    
    // rewrite entire queue to file
    while (!list.empty()) {
        outfile << list.front() << endl;
        list.pop();
    }
    outfile.close();
}