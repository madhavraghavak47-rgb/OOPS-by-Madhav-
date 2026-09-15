#include <iostream>
#include <string>
using namespace std;
class Product {
private:
	string name;
	double price;
	int quantity;

public:
	Product(const string& productName = "", double productPrice = 0.0,
			int productQuantity = 0)
		: name(productName), price(productPrice), quantity(productQuantity) {}

	double totalValue() const {
		return price * quantity;
	}

	Product combine(const Product& other) const {
		string combinedName = (name == other.name)
			? name
			: name + " + " + other.name;
		return Product(combinedName, price, quantity + other.quantity);
	}

	void display() const {
		cout << "Product: " << name << '\n'
				  << "Price: " << price << '\n'
				  << "Quantity: " << quantity << '\n'
				  << "Total value: " << totalValue() << "\n\n";
	}
};

Product higherValue(const Product& first, const Product& second) {
	return first.totalValue() >= second.totalValue() ? first : second;
}

int main() {
	Product first("Notebook", 50.0, 3);
	Product second("Notebook", 50.0, 5);

	cout << "Product with higher total value:\n";
	higherValue(first, second).display();

	cout << "Combined inventory:\n";
	first.combine(second).display();

	return 0;
}
