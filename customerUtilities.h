/* 
 * File:   customerUtility.h
 * Author: Hai Le, Nathan Ruffatti
 *
 * Created on April 22, 2018, 2:24 PM
 */

#ifndef CUSTOMERUTILITY_H
#define CUSTOMERUTILITY_H

#include <vector>
#include <fstream>
#include <queue>
#include "customer.h"


using namespace std;

vector<int> searchLastName(vector<Customer *>&, string);
vector<int> searchID(vector<Customer *>&, string);
void updateRecordFile(vector<Customer *>&, int);
void updateTransactions(vector<Transaction *>&, int);
void updateOrders(vector<Order *>&, int);
void updateQueue(queue<string>);


#endif /* CUSTOMERUTILITY_H */

