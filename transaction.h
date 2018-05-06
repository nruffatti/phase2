#ifndef TRANSACTION_H
#define TRANSACTION_H

using namespace std;

class Transaction {
	public:
		Transaction();
		Transaction(int orderID, int customerID);

		int getOrderID();
		int getCustomerID();

	private:
		int orderID, customerID;
};

#endif
