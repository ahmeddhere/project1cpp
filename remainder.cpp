#include <iostream>
#include <string>
#include <cmath>
#include <cassert>

using namespace std;

int main() {
    int pay;
    float sales, comision_base;
    comision_base = 0.09;
    pay = 200;

    cout << "Enter please the sales for this week " << endl;
    cin >> sales;
    cout << (sales * comision_base) + pay << endl;

    return 0;
}
