#include "order.h"

Order::Order() {
	this->orderID = "0";
	this->date = "nodate";
	this->quantity = "0";
	this->amountPaid = "0";
}

Order::Order(string orderID, string date, string quantity, string amountPaid) {
	this->orderID = orderID;
	this->date = date;
	this->quantity = quantity;
	this->amountPaid = amountPaid;
}

string Order::getOrderID() {
	return orderID;
}

string Order::getDate() {
	return date;
}

string Order::getQuantity() {
	return quantity;
}

string Order::getAmountPaid() {
	return amountPaid;
}
