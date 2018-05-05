#include "transaction.h"

Transaction::Transaction() {
	this->orderID = 0;
	this->customerID = 0;
}

Transaction::Transaction(int orderID, int customerID) {
	this->orderID = orderID;
	this->customerID = customerID;
}

int Transaction::getOrderID() {
	return orderID;
}

int Transaction::getCustomerID() {
	return customerID;
}
