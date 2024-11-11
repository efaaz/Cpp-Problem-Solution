#include <iostream>
using namespace std;

int main() {
    int productNum, quantity;
    float prod1 = 200.75, prod2 = 345.50, prod3 = 775.75, prod4 = 400.35, prod5 = 1200.75;
    float total = 0.0; // Variable to accumulate total value of products sold

    while (true) {
        // Input product number
        cout << "Enter product number (1-5) or 0 to stop: ";
        cin >> productNum;

        // Break the loop if user enters 0 to stop
        if (productNum == 0) {
            break;
        }

        // Check if the product number is valid
        if (productNum < 1 || productNum > 5) {
            cout << "Invalid product number. Please enter a number between 1 and 5." << endl;
            continue;  // Skip the rest of the loop and ask for input again
        }

        // Input quantity sold
        cout << "Enter quantity sold: ";
        cin >> quantity;

        // Calculate price based on product number
        float price = 0.0;
        if (productNum == 1) {
            price = prod1 * quantity;
        }
        else if (productNum == 2) {
            price = prod2 * quantity;
        }
        else if (productNum == 3) {
            price = prod3 * quantity;
        }
        else if (productNum == 4) {
            price = prod4 * quantity;
        }
        else if (productNum == 5) {
            price = prod5 * quantity;
        }

        // Add the calculated price to the total
        total += price;

        // Output the retail value for the current product
        cout << "The retail value of this product is: BDT " << price << endl;
    }

    // Output the total retail value of all products sold
    cout << "Total retail value of all products sold: BDT " << total << endl;

    return 0;
}
