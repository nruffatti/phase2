#ifndef TRANSACTION_H
#define TRANSACTION_H

class Transaction {
	public:
		Transaction();
		Transaction(string orderID, string customerID);
		
		string getOrderID();
		string getCustomerID();
	
	private:
		string orderID, customerID;
}

#endif