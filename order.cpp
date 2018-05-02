#include "order.h"

Order() {
	this->orderID = "0";
	this->date = "nodate";
	this->quantity = "0";
	this->amountPaid = "0";
}

Order(string orderID, string date, string quantity, string amountPaid) {
	this->orderID = orderID;
	this->date = date;
	this->quantity = quantity;
	this->amountPaid = amountPaid;
}

string getOrderID() {
	return orderID;
}

string getDate() {
	return date;
}

string getQuantity() {
	return quantity;
}

string getAmountPaid() {
	return amountPaid;
}
