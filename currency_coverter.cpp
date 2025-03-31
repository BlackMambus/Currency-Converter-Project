#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function to perform currency conversion
double convertCurrency(double amount, double exchangeRate) {
    return amount * exchangeRate;
}

int main() {
    double amount, result;
    int fromCurrency, toCurrency;
    const double USD_TO_EUR = 0.85;  // Example exchange rate: 1 USD = 0.85 EUR
    const double EUR_TO_USD = 1.18;  // Example exchange rate: 1 EUR = 1.18 USD
    const double USD_TO_INR = 83.00; // Example exchange rate: 1 USD = 83 INR
    const double INR_TO_USD = 0.012; // Example exchange rate: 1 INR = 0.012 USD

    cout << "Currency Converter" << endl;
    cout << "===================" << endl;
    cout << "Select the currency you want to convert from:" << endl;
    cout << "1. USD (US Dollar)" << endl;
    cout << "2. EUR (Euro)" << endl;
    cout << "3. INR (Indian Rupee)" << endl;
    cout << "Enter your choice (1/2/3): ";
    cin >> fromCurrency;

    cout << "Select the currency you want to convert to:" << endl;
    cout << "1. USD (US Dollar)" << endl;
    cout << "2. EUR (Euro)" << endl;
    cout << "3. INR (Indian Rupee)" << endl;
    cout << "Enter your choice (1/2/3): ";
    cin >> toCurrency;

    cout << "Enter the amount you want to convert: ";
    cin >> amount;

    // Perform conversion based on selected currencies
    if (fromCurrency == 1 && toCurrency == 2) {
        result = convertCurrency(amount, USD_TO_EUR);
        cout << fixed << setprecision(2) << amount << " USD = " << result << " EUR" << endl;
    }
    else if (fromCurrency == 2 && toCurrency == 1) {
        result = convertCurrency(amount, EUR_TO_USD);
        cout << fixed << setprecision(2) << amount << " EUR = " << result << " USD" << endl;
    }
    else if (fromCurrency == 1 && toCurrency == 3) {
        result = convertCurrency(amount, USD_TO_INR);
        cout << fixed << setprecision(2) << amount << " USD = " << result << " INR" << endl;
    }
    else if (fromCurrency == 3 && toCurrency == 1) {
        result = convertCurrency(amount, INR_TO_USD);
        cout << fixed << setprecision(2) << amount << " INR = " << result << " USD" << endl;
    }
    else if (fromCurrency == 2 && toCurrency == 3) {
        result = convertCurrency(amount, EUR_TO_USD);  // Convert EUR to USD and then USD to INR
        result = convertCurrency(result, USD_TO_INR);
        cout << fixed << setprecision(2) << amount << " EUR = " << result << " INR" << endl;
    }
    else if (fromCurrency == 3 && toCurrency == 2) {
        result = convertCurrency(amount, INR_TO_USD);  // Convert INR to USD and then USD to EUR
        result = convertCurrency(result, USD_TO_EUR);
        cout << fixed << setprecision(2) << amount << " INR = " << result << " EUR" << endl;
    }
    else {
        cout << "Invalid currency conversion option!" << endl;
    }

    return 0;
}




