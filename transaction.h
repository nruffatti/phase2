#ifndef TRANSACTION_H
#define TRANSACTION_H

#include<string>

using namespace std;

class Transaction {
	public:
		Transaction();
		Transaction(int orderID, string customerID);

		int getOrderID();
		string getCustomerID();

	private:
		int orderID;
                string customerID;
};

#endif
