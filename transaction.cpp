#include "transaction.h"

Transaction::Transaction() {
	this->orderID = "0";
	this->customerID = "0";
}

Transaction::Transaction(string orderID, string customerID) {
	this->orderID = orderID;
	this->customerID = customerID;
}

string Transaction::getOrderID() {
	return orderID;
}

string Transaction::getCustomerID() {
	return customerID;
}
