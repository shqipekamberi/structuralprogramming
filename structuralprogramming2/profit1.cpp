#include <iostream>
using namespace std;

int main() {
    int numOfEmployees, soldProducts;
    double brutoProfit, netoProfit, productPrice, employeeSalary;

    cout << "Insert total number of Empl \n";
    cin >> numOfEmployees;

    cout << "Insert salary of employer \n";
    cin >> employeeSalary;

    cout << "Insert total number of sold units \n";
    cin >> soldProducts;

    cout << "Insert price per unit \n";
    cin >> productPrice;

    brutoProfit = soldProducts * productPrice;
    netoProfit = brutoProfit - (numOfEmployees * employeeSalary);

    cout << "Bruto: " << brutoProfit << " neto: " << netoProfit;

}