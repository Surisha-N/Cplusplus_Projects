#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to Frank's Carpet Cleaning Service\n";

    const double price_for_small_room { 25.00 };
    const double price_for_large_room { 35.00 };
    const double sales_tax_rate { 0.06 };
    const int estimate_valid {30};

    int number_of_small_rooms {0};
    cout << "How many small rooms would you like cleaned? ";
    cin >> number_of_small_rooms;
    int number_of_large_rooms {0};
    cout << "How many large rooms would you like cleaned? ";
    cin >> number_of_large_rooms;

    cout << "Estimate for carpet cleaning service\n";
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;

    cout << "Price for small rooms: $" << price_for_small_room << endl; 
    cout << "Price for large rooms: $" << price_for_large_room << endl;

    double price_for_small_rooms{0};
    price_for_small_rooms = number_of_small_rooms * price_for_small_room;

    double price_for_large_rooms{0};
    price_for_large_rooms = number_of_large_rooms * price_for_large_room;

    double total_price{0};
    total_price = price_for_small_rooms + price_for_large_rooms;
    cout << "Total Price:$" << total_price << endl;

    double tax{0};
    tax = total_price * sales_tax_rate;
    cout << "Tax: $" << tax << endl;

    double total_estimate{0};
    total_estimate = total_price + tax;
    cout << "Total Estimate: $" << total_estimate << endl;

    cout << "This estimate is valid for " << estimate_valid << " days." << endl;
}