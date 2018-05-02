#ifndef ORDER_H
#define ORDER_H

class Order {
	public:
		Order();
		Order(string orderID, string date, string quantity, string amountPaid);

		string getOrderID();
		string getDate();
		string getQuantity();
		string getAmountPaid();

		string to_string();

	private:
		string orderID, date, quantity, amountPaid;
}

#endif
