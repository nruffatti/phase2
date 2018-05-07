#include "transaction.h"

Transaction::Transaction() {
	this->orderID = 0;
	this->customerID = "";
}

Transaction::Transaction(int orderID, string customerID) {
	this->orderID = orderID;
	this->customerID = customerID;
}

int Transaction::getOrderID() {
	return orderID;
}

string Transaction::getCustomerID() {
	return customerID;
}
