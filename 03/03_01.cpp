#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::string;

struct Sales_data {
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

void ex01_09() {
	int sum = 0, val = 50;
	while (val < 100) {
		sum += val;
		++val;
	}
	cout << "Sum of 50 to 100 exclusive is " << sum << endl;
}

void ex01_10() {
	int sub = 10;
	while (sub >= 0) {
		cout << sub << endl;
		--sub;
	}
}

void ex01_11() {
	int v1 = 0, v2 = 0;
	cout << "Input two numbers: " << endl;
	cin >> v1 >> v2;
	while (v1 <= v2) {
		cout << v1 << endl;
		++v1;
	}
}

void ex01_20() {
	Sales_data item1;
	double price = 0.0;
	while (cin >> item1.bookNo >> item1.units_sold >> price) {
		item1.revenue = price * item1.units_sold;
		cout << item1.bookNo << " " << item1.units_sold << " " << item1.revenue << endl;
	}
}

void ex01_21() {
	Sales_data item1, item2;
	double price = 0.0;
	cin >> item1.bookNo >> item1.units_sold >> price;
	item1.revenue = price * item1.units_sold;

	cin >> item2.bookNo >> item2.units_sold >> price;
	item2.revenue = price * item2.units_sold;

	if (item1.bookNo == item2.bookNo) {
		unsigned totalCnt = item1.units_sold + item2.units_sold;
		double totalRevenue = item1.revenue + item2.revenue;
		cout << item1.bookNo << " " << totalCnt << " " << totalRevenue << " ";
		if (totalCnt != 0)
			cout << totalRevenue / totalCnt << endl;
		else
			cout << "(no sales)" << endl;
	}
	else
		cerr << "Data must refer to the same ISBN" << endl;
}

void ex01_22() {
	Sales_data item1, item2;
	double price = 0.0;
	while (cin >> item2.bookNo >> item2.units_sold >> price) {
		item2.revenue = price * item2.units_sold;
		item2.revenue += item1.revenue;
		item2.units_sold += item1.units_sold;
		item1 = item2;
	}
	if (item1.units_sold != 0) {
		cout << item1.bookNo << " " << item1.units_sold << " ";
		cout << item1.revenue / item1.units_sold << endl;
	}
	else
		cout << "(no sales)" << endl;
}

void ex01_23() {
	Sales_data total;
	double totalPrice = 0.0, transPrice = 0.0;
	if (cin >> total.bookNo >> total.units_sold >> totalPrice) {
		total.revenue = totalPrice * total.units_sold;
		Sales_data trans;
		while (cin >> trans.bookNo >> trans.units_sold >> transPrice) {
			if (total.bookNo == trans.bookNo) {
				trans.revenue = transPrice * trans.units_sold;
				total.revenue += trans.revenue;
				total.units_sold += trans.units_sold;
			}
			else {
				cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
				total = trans;
			}
		}
		cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
	}
}


int main() {
	ex01_09();
	//ex01_10();
	//ex01_11();

	//ex01_20();
	//ex01_21();
	//ex01_22();
	//ex01_23(); // Also 1.24 and 1.25
	return 0;
}


