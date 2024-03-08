#include <iostream>
#include <string>

using namespace std;

class Pizza {
private:
    string type;
    int price;
    const int extra_cheese_price = 100;
    const int extra_toppings_price = 150;
    const int bag_pack_price = 100;
    int base_pizza_price;
    bool is_Extra_Cheese_Added = false;
    bool is_Extra_Toppings_Added = false;
    bool is_BagPack_Added = false;

public:
    Pizza(string type) {
        if (type == "Veg") {
            price = 300;
        } else if (type == "Non Veg") {
            price = 400;
        }
        base_pizza_price = price;
    }

    void add_extra_cheese() {
        is_Extra_Cheese_Added = true;
        price += extra_cheese_price;
    }

    void add_extra_toppings() {
        is_Extra_Toppings_Added = true;
        price += extra_toppings_price;
    }

    void take_Away() {
        is_BagPack_Added = true;
        price += bag_pack_price;
    }

    void get_Bill() {
        cout << "Pizza :- " << base_pizza_price << "\n";
        if (is_Extra_Cheese_Added) {
            cout << "Extra Cheese Added :- " << extra_cheese_price << "\n";
        }
        if (is_Extra_Toppings_Added) {
            cout << "Extra Toppings Added :- " << extra_toppings_price << "\n";
        }
        if (is_BagPack_Added) {
            cout << "Take Away :- " << bag_pack_price << "\n";
        }
        cout << "Total Amount :- " << price << "\n";
    }
};

int main() {
    Pizza pizza("Veg");
    pizza.add_extra_cheese();
    pizza.add_extra_toppings();
    pizza.take_Away();
    pizza.get_Bill();

    return 0;
}