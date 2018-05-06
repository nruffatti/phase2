#ifndef ORDER_H
#define ORDER_H

#include<string>

using namespace std;

class Order {
	public:
		Order();
		Order(int orderID, string date, int quantity, float amountPaid);

		int getOrderID();
		string getDate();
		int getQuantity();
		int getAmountPaid();

		string to_string();

	private:
		string date;
		int orderID, quantity;
		float amountPaid;
};

#endif
