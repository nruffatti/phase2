#include "transaction.h"

Transaction() {
	this->orderID = "0";
	this->customerID = "0";
}

Transaction(string orderID, string customerID) {
	this->orderID = orderID;
	this->customerID = customerID;
}

string getOrderID() {
	return orderID;
}

string getCustomerID() {
	return customerID;
}
