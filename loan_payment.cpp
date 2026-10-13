
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    const double PERCENT = 100.0;
    const int MONTHS_PER_YEAR = 12;
    double loan_amount, annual_rate, monthly_rate;
    double monthly_payment, amount_paid_back, interest_paid;
    int number_of_payments;
    cout << "Enter loan amount: $";
    cin >> loan_amount;
    cout << "Enter annual interest rate (%): ";
    cin >> annual_rate;
    cout << "Enter number of monthly payments: ";
    cin >> number_of_payments;
    monthly_rate = annual_rate / PERCENT / MONTHS_PER_YEAR;
    monthly_payment = loan_amount * monthly_rate
        * pow(1.0 + monthly_rate, number_of_payments)
        / (pow(1.0 + monthly_rate, number_of_payments) - 1.0);
    amount_paid_back = monthly_payment * number_of_payments;
    interest_paid = amount_paid_back - loan_amount;
    cout << endl << "Loan Payment Report" << endl;
    cout << left << setw(25) << "Monthly Interest Rate:"
         << monthly_rate * PERCENT << "%" << endl;
    cout << fixed << setprecision(2);
    cout << left << setw(25) << "Loan Amount:"
         << "$" << loan_amount << endl;
    cout << left << setw(25) << "Number of Payments:"
         << number_of_payments << endl;
    cout << left << setw(25) << "Monthly Payment:"
         << "$" << monthly_payment << endl;
    cout << left << setw(25) << "Amount Paid Back:"
         << "$" << amount_paid_back << endl;
    cout << left << setw(25) << "Interest Paid:"
         << "$" << interest_paid << endl;
    return 0;
}
