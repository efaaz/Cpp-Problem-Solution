// A store owner wants to calculate the total items' cost in a customer's shopping cart. Write a program that asks the user to input the prices and quantities of different items in the cart, and then calculate the total cost. The program should continue to ask for input until the user enters 0 for both the price and quantity. Use a while loop to implement this program.

#include <iostream>
using namespace std;

int main(){
    float price, quantity, total = 0.0;

    while (true) {
        cout << "Enter price of the item or 0 to stop: ";
        cin >> price;

        if (price == 0) {
            break;
        }

        cout << "Enter quantity of the item: ";
        cin >> quantity;

        total += price * quantity;
    }

    cout << "Total cost of all items: BDT " << total << endl;

    return 0;
}
