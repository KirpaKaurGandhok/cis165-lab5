
# Fundamentals_of_Programming - Lab 5: Compound Interest and Loan Payments

# Course Section
## CIS-165-B030

## My Plans for Both Programs

### compound_interest.cpp (Program 1)
I plan to input the principal, annual interest rate, & compounding periods. Also, I will convert the percentage to a decimal, use the pow() method to calculate the amount, and subtract the principal to find the amount of interest earned. Finally, I plan to display the results using the setw() method & two decimal places.

### loan_payment.cpp (Program 2)
I plan to input the loan amount, annual interest rate, & number of payments. Also, I will calculate the monthly rate, monthly payment, amount paid back, and interest paid using variables and the pow() method. Finally, I plan to display all required results in proper formatting.

## Testing my Programs

| Program and test | Values used | Expected results | Actual results | Match or correction |
|---|---|---|---|---|
| Compound — assigned | $1,000, 4.25%, 12 | Interest: $43.34; Amount: $1,043.34 | Interest: $43.34; Amount: $1,043.34 | Match |
| Compound — changed | $2,500, 5%, 4 | Interest: $127.36; Amount: $2,627.36 | Interest: $126.26; Amount: $2,627.36 | Match |
| Loan — assigned | $10,000, 12%, 36 | Monthly: $332.14; Total: $11,957.15; Interest: $1,957.15 | Monthly: $332.14; Total: $11,957.15; Interest: $1,957.15 | Match |
| Loan — changed | $5,000, 6%, 24 | Monthly: $221.60; Total: $5,318.47; Interest: $318.47 | Monthly: $221.60; Total: $5,318.47; Interest: $318.47 | Match |

## Explaining My Code

### Why divide a percentage by 100?
Because dividing a percentage by 100 changes from percentage form to decimal form. An example is: 12% becomes 0.12.

### How does pow() work?
The pow() method functions by raising a number to a specified power. It is utilized in both the compound interest and loan payment formulas.

### What do compounding periods change?
Compounding periods determine how often interest is added. More frequent compounding typically earns more interest at a positive rate.

### How is the monthly interest rate calculated?
The monthly interest rate is calculated by dividing the annual percentage rate by 100 and then again by 12. An example is: 12% becomes 0.01 per month.

### Why use `double`?
Because the double data type stores decimal values needed for monetary/financial calculations.

### Why keep full precision?
Because keeping full precision (all decimal digits) during calculations reduces rounding errors. Monetary results are usually displayed to two decimal places.

### How are total payments and interest calculated?
Amount paid back is equal to the monthly payment multiplied by the number of payments. Interest paid is equal to the amount paid back minus the original loan amount.

### Why store calculations in variables?
Becuase storing calculations in variables make calculations much easier to read and debug instead of placing formulas directly inside cout.

## Compiling & Running Both Programs

### compound_interest.cpp

#### To compile
bash
g++ -std=c++17 -Wall -Wextra compound_interest.cpp -o compound_interest

#### To run
./compound_interest

### loan_payment.cpp

#### To compile
g++ -std=c++17 -Wall -Wextra loan_payment.cpp -o loan_payment

#### To run
./loan_payment

# I restored the originally assigned values in both .cpp files before my final upload, and ran both files again. 
