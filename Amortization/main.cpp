#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    
    double loanAmount,
           monthlyInterestRate,
           numberOfMonths,
           monthlyPayment,
           amountPaidBack,
           interestPaid,
           amountOfPrincipal;
    
    cout << setprecision(2) << fixed << showpoint;
    
    //Asks user for Inputs
    cout << "Enter the loan amount: $ " << endl;
    cin >>loanAmount;
    
    cout << "Enter the monthly interest rate as a decimal: " << endl;
    cin >>monthlyInterestRate;
    
    cout <<"Enter the number of months: " << endl;
    cin >>numberOfMonths;
    
    //Calculate monthly Payments
    amountOfPrincipal = monthlyInterestRate / 12;
    monthlyPayment = (monthlyInterestRate * pow(1 + monthlyInterestRate, numberOfMonths)) * loanAmount /( pow(1+monthlyInterestRate, numberOfMonths) - 1) ;
    amountPaidBack = monthlyPayment * numberOfMonths;
    interestPaid = monthlyInterestRate * numberOfMonths;
    
    
    
    //Output Results
    cout << "Loan Amount: $ " << loanAmount << endl;
    cout << "Monthly Interest Rate: " << monthlyInterestRate * 100 << "%" << endl;
    cout << "Number of Payments: " << numberOfMonths << endl;
    cout << "Monthly Payment: $" << monthlyPayment << endl;
    cout << "Amount Paid Back: $" << amountPaidBack << endl;
    cout << "Interest Paid: $" << interestPaid << endl;

}

