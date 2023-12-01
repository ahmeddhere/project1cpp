#include <iostream>
#include <string>
using namespace std;

int main() {
    string movieName;
    double adultTicketPrice, childTicketPrice,totalTicketSales,donationAmount;
   float adultTicketsSold, childTicketsSold,numbert_Sold, netamount;
    double donationPercentage;

    cout << "Enter movie name: ";
    getline(cin, movieName);

    cout << "Enter adult ticket price: ";
    cin >> adultTicketPrice;

    cout << "Enter child ticket price: ";
    cin >> childTicketPrice;

    cout << "Enter number of adult tickets sold: ";
    cin >> adultTicketsSold;

    cout << "Enter number of child tickets sold: ";
    cin >> childTicketsSold;

    cout << "Enter percentage of gross amount to be donated:  ";
    cin >> donationPercentage;
          numbert_Sold=adultTicketsSold+childTicketsSold;
          totalTicketSales = (adultTicketPrice * adultTicketsSold) + (childTicketPrice * childTicketsSold);
          donationAmount = (totalTicketSales * donationPercentage) / 100.0;
          netamount= (totalTicketSales - donationAmount);


    cout << "\nMovie: " << movieName << endl;
     cout << "\nThe number of ticket sold : " << numbert_Sold << endl;
    cout << "Total ticket sales: $" << totalTicketSales << endl;
     cout << "The amount of donation in percentage  "<< donationPercentage<<"%" << endl;
    cout << "Donation amount: $" << donationAmount << endl;
    cout<<"the total amount is "<<netamount<<"$";


    return 0;
}
