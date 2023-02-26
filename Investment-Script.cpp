#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//This will declare the variables to store the input.
float initInv, monDep, AnuInt, months, years;
//This will declare the variables to store the year-end and total amount, interest, and the year-end interest.
float totalAm, intAmt, yearTotInt;


//This is the display form to the user.
cout << "******************************\n";
cout << "******** Data Input ********\n";
cout << "Initial Investment Amount: \n";
cout << "Monthly Deposit: \n";
cout << "Annual Interest: \n";
cout << "Number of years: \n";

//This will will allow the wait for the input from the user.
    system("PAUSE");

//This will get the data from the user.
cout << "**************************\n";
cout << "******** Data Input ********\n";
cout << "Initial Investment Amount: $";
cin >> initInv;
cout << "Monthly Deposit: $";
cin >> monDep;
cout << "Annual Interest: %";
cin >> AnuInt;
cout << "Number of years: ";
cin >> years;
months = years * 12;

//Wait for input from the user.
system("PAUSE");

//This will set the total amount of the initial investment to be updated.
totalAm = initInv;

//This will display the year data without the monthly deposits.
cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
cout << "==============================================================\n";
cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
cout << "--------------------------------------------------------------\n";


for (int i = 0; i < years; i++) {

//This will calculate the yearly interest
intAmt = (totalAm) * ((AnuInt / 100));

totalAm = totalAm + intAmt;

//This will print the results to the table showcasing only two decimal points.
cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << intAmt << "\n";

}

//This will set the total amount to the initial investment to be updated.
totalAm = initInv;

//This will display the year data with the monthly deposits.
cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
cout << "==============================================================\n";
cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
cout << "--------------------------------------------------------------\n";

for (int i = 0; i < years; i++) {

//This will set the yearly interest to zero at the start of the year.
yearTotInt = 0;

for (int j = 0; j < 12; j++) {

//Help us calculating the monthly interest.
intAmt = (totalAm + monDep) * ((AnuInt / 100) / 12);

yearTotInt = yearTotInt + intAmt;

//Calculating the month end total.
totalAm = totalAm + monDep + intAmt;

}

//This will print the results to the table showcasing only two decimal points.
cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << yearTotInt << "\n";


}

return 0;
}
