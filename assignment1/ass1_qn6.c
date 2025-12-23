/*6. Emily has taken a loan from a bank to buy a new car. The loan has a fixed annual 
interest rate, and Emily wants to calculate her monthly payment to better plan her 
finances. To determine the monthly payment, she needs to consider the total loan 
amount, the annual interest rate, and the number of years over which she will repay 
the loan. Emily needs to calculate the monthly payment using the formula for a fixed
rate loan: 
Monthly Payment = 𝑷 × 𝒓 × (𝟏 𝒓)𝒏
(𝟏 𝒓)𝒏 𝟏
where: 
P is the total loan amount Emily has taken 
r is the monthly interest rate, calculated as annual interest rate/12 
n is the total number of monthly payments, calculated as years×12*/

#include <stdio.h>
#include <math.h>

int main(){
    double P, r, n,monthly_payment;
    double total_loan, annual_interest_rate, total_years;

    printf("Total Loan Amount:");
    scanf("%lf",&total_loan);
    printf("Annual Interest Rate:");
    scanf("%lf",&annual_interest_rate);
    printf("Number of Years for Repayment:");
    scanf("%lf",&total_years);

    P=total_loan;

    r=(annual_interest_rate/12.0)/100.0;
    n=(total_years*12.0);
    double base=(1.0+r);
    double temp=pow(base,n);
    monthly_payment=(P*r*temp)/(temp-1);

    printf("Monthly Payment: %.3f\n\n",monthly_payment);

    return 0;
}

