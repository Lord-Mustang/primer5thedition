#include <iostream>
#include <string>
#include "Sales_data.h"

void ex01_20() {
	Sales_data item1;
	double price = 0.0;
	while (std::cin >> item1.bookNo >> item1.units_sold >> price) {
		item1.revenue = price * item1.units_sold;
		std::cout << item1.bookNo << " " << item1.units_sold << " " << item1.revenue << std::endl;
	}
}

void ex01_21() {
	Sales_data item1, item2;
	double price = 0.0;
	std::cin >> item1.bookNo >> item1.units_sold >> price;
	item1.revenue = price * item1.units_sold;

	std::cin >> item2.bookNo >> item2.units_sold >> price;
	item2.revenue = price * item2.units_sold;

	if (item1.bookNo == item2.bookNo) {
		unsigned totalCnt = item1.units_sold + item2.units_sold;
		double totalRevenue = item1.revenue + item2.revenue;
		std::cout << item1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
			std::cout << totalRevenue / totalCnt << std::endl;
		else
			std::cout << "(no sales)" << std::endl;
	}
	else
		std::cerr << "Data must refer to the same ISBN" << std::endl;
}

void ex01_22() {
	Sales_data item1, item2;
	double price = 0.0;
	while (std::cin >> item2.bookNo >> item2.units_sold >> price) {
		item2.revenue = price * item2.units_sold;
		item2.revenue += item1.revenue;
		item2.units_sold += item1.units_sold;
		item1 = item2;
	}
	if (item1.units_sold != 0) {
		std::cout << item1.bookNo << " " << item1.units_sold << " ";
		std::cout << item1.revenue / item1.units_sold << std::endl;
	}
	else
		std::cout << "(no sales)" << std::endl;
}

void ex01_23() {
	Sales_data total;
	double totalPrice = 0.0, transPrice = 0.0;
	if (std::cin >> total.bookNo >> total.units_sold >> totalPrice) {
		total.revenue = totalPrice * total.units_sold;
		Sales_data trans;
		while (std::cin >> trans.bookNo >> trans.units_sold >> transPrice) {
			if (total.bookNo == trans.bookNo) {
				trans.revenue = transPrice * trans.units_sold;
				total.revenue += trans.revenue;
				total.units_sold += trans.units_sold;
			}
			else {
				std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
				total = trans;
			}
		}
		std::cout << total.bookNo << " " << total.units_sold << " " << total.revenue << std::endl;
	}
}

int main() {
	//ex01_20();
	//ex01_21();
	//ex01_22();
	ex01_23(); // Also 1.24 and 1.25
	return 0;
}