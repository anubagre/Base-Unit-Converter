// BASE UNIT CONVERTER
#include <stdio.h>
// Function to convert Temperature
void TempConverter()
{
int tempChoice, userinputF, userinputC, userinputK;
int fahrenheitToCelsius; 
int celsiusToFahrenheit;
int kelvinToCelsius; 
int celsiusToKelvin; 
printf("\n Welcome to Temperature Converter! \n");
printf("Enter 1 for Fahrenheit to Celsius. \n");
printf("Enter 2 for Celsius to Fahrenheit. \n");
printf("Enter 3 for Kelvin to Celsius. \n");
printf("Enter 4 for Celsius to Kelvin. \n");
scanf("%d", &tempChoice);
if (tempChoice == 1)
{
printf("Enter Temperature in Fahrenheit(°F): \n");
scanf("%d", &userinputF);
fahrenheitToCelsius = ((userinputF - 32) * (5.0 / 9.0));
printf("Celsius: %d°C", fahrenheitToCelsius);
}
else if (tempChoice == 2)
{
printf("Enter Temperature in Celsius(°C): \n");
scanf("%d", &userinputC);
celsiusToFahrenheit = ((9.0 / 5.0) * userinputC + 32);
printf("Fahrenheit: %d°F", celsiusToFahrenheit);
}
else if (tempChoice == 3)
{
printf("Enter Temperature in Kelvin(°C): \n");
scanf("%d", &userinputK);
kelvinToCelsius = userinputK - 273.15;
printf("Celsius: %d°C", kelvinToCelsius);
}
else if (tempChoice == 4)
{
printf("Enter Temperature in Celsius(°C): \n");
scanf("%d", &userinputC);
celsiusToKelvin = userinputC + 273.15;
printf("Kelvin: %dK", celsiusToKelvin);
}
else
{
printf("Please enter the correct choice! \n");
}
}
// Function to convert Currency
void CurrencyConv()
{
int currencyChoice;
int userinputINRtoUSD; 
int userinputUSDtoINR;
int userinputINRtoEUR; 
int userinputEURtoINR; 
int userinputINRtoJPY; 
int userinputJPYtoINR; 
float INRtoUSD;
float USDtoINR;
float INRtoEUR;
float EURtoINR;
float INRtoJPY;
float JPYtoINR;
printf("\nWelcome to Currency Converter!\n");
printf("Enter 1 for INR to USD.\n");
printf("Enter 2 for USD to INR.\n");
printf("Enter 3 for INR to EUR.\n");
printf("Enter 4 for EUR to INR.\n");
printf("Enter 5 for INR to JPY.\n");
printf("Enter 6 for JPY to INR.\n");
scanf("%d", &currencyChoice);
if (currencyChoice == 1)
{
printf("Please enter the INR amount:\n");
scanf("%d", &userinputINRtoUSD);
INRtoUSD = userinputINRtoUSD * 0.012;
printf("USD: $%.2f", INRtoUSD); 
}
else if (currencyChoice == 2)
{
printf("Please enter the USD amount:\n");
scanf("%d", &userinputUSDtoINR);
USDtoINR = userinputUSDtoINR * 80.83;
printf("INR: ₹%.2f", USDtoINR);
}
else if (currencyChoice == 3)
{
printf("Please enter the INR amount:\n");
scanf("%d", &userinputINRtoEUR);
INRtoEUR = userinputINRtoEUR * 0.012;
printf("EUR: €%.2f", INRtoEUR);
}
else if (currencyChoice == 4)
{
printf("Please enter the EUR amount:\n");
scanf("%d", &userinputEURtoINR);
EURtoINR = userinputEURtoINR * 82.09;
printf("INR: ₹%.2f", EURtoINR);
}
else if (currencyChoice == 5)
{
printf("Please enter the INR amount:\n");
scanf("%d", &userinputINRtoJPY);
INRtoJPY = userinputINRtoJPY * 1.76;
printf("JPY: ¥%.2f", INRtoJPY);
}
else if (currencyChoice == 6)
{
printf("Please enter the JPY amount:\n");
scanf("%d", &userinputJPYtoINR);
JPYtoINR = userinputJPYtoINR * 0.57;
printf("INR: ₹%.2f", JPYtoINR);
}
else
{
printf("Please enter correct choice.\n");
}
}
// Function to convert Mass
void MassConv()
{
int massChoice;
int userinputOunce; // variable that stores the converted F->C;
int userinputGram; // variable that stores the converted F->C;
int userinputPound;
float gramToPound;
float poundToGram;
float gramToOunce;
float ounceToGram;
float ounceToPound;
float poundToOunce;
printf("Welcome to Mass Converter! \n\n");
printf("Enter 1 for gram to pound. \n");
printf("Enter 2 for pound to gram. \n");
printf("Enter 3 for gram to ounce. \n");
printf("Enter 4 for ounce to gram. \n");
printf("Enter 5 for ounce to pound. \n");
printf("Enter 6 for pound to ounce. \n");
scanf("%d", &massChoice);
if (massChoice == 1)
{
printf("Please enter the gram amount: \n");
scanf("%d", &userinputGram);
gramToPound = userinputGram * 0.0022;
printf("Pounds: %.2fpounds", gramToPound);
}
else if (massChoice == 2)
{
printf("Please enter the pound amount: \n");
scanf("%d", &userinputPound);
poundToGram = userinputPound * 453.592;
printf("Grams: %.2fgrams", poundToGram);
}
else if (massChoice == 3)
{
printf("Please enter the gram amount: \n");
scanf("%d", &userinputGram);
gramToOunce = userinputGram * 0.0353;
printf("Ounces: %.2founces", gramToOunce);
}
else if (massChoice == 4)
{
printf("Please enter the ounce amount: \n");
scanf("%d", &userinputOunce);
ounceToGram = userinputOunce * 28.350;
printf("Grams: %.2fgrams", ounceToGram);
}
else if (massChoice == 5)
{
printf("Please enter the ounce amount: \n");
scanf("%d", &userinputOunce);
ounceToPound = userinputOunce * 0.0625;
printf("Pounds: %.2fpounds", ounceToPound);
}
else if (massChoice == 6)
{
printf("Please enter the pound amount: \n");
scanf("%d", &userinputPound);
gramToOunce = userinputPound * 16;
printf("Ounces: %.2founces", gramToOunce);
}
else
{
printf("Please enter the correct choice. \n");
}
}
// Function to convert Time
void TimeConv()
{
int timeChoice;
float timeMin, timeSec, timeHour;
int userinputH, userinputM, userinputS;
printf("\nWelcome to Time Converter! \n");
printf("Enter 1 for Hours to Minutes. \n");
printf("Enter 2 for Minutes to Hours. \n");
printf("Enter 3 for Minutes to Seconds. \n");
printf("Enter 4 for Seconds to Minutes. \n");
printf("Enter 5 for Hours to Seconds. \n");
printf("Enter 6 for Seconds to Hours. \n");
scanf("%d", &timeChoice);
if (timeChoice == 1)
{
printf("Enter Time in Hours: \n");
scanf("%d", &userinputH);
timeMin = userinputH * 60;
printf("Time in Minutes: %.2f mins", timeMin);
}
else if (timeChoice == 2)
{
printf("Enter Time in Minutes: \n");
scanf("%d", &userinputM);
timeHour = userinputM / 60;
printf("Time in Hours: %.2f hours", timeHour);
}
else if (timeChoice == 3)
{
printf("Enter Time in Minutes: \n");
scanf("%d", &userinputM);
timeSec = userinputM * 60;
printf("Time in Seconds: %.2f secs", timeSec);
}
else if (timeChoice == 4)
{
printf("Enter Time in Seconds: \n");
scanf("%d", &userinputS);
timeMin = userinputS / 60;
printf("Time in Minutes: %.2f mins", timeMin);
}
else if (timeChoice == 5)
{
printf("Enter Time in Hours: \n");
scanf("%d", &userinputH);
timeSec = userinputH * 3600;
printf("Time in Seconds: %.2f secs", timeSec);
}
else if (timeChoice == 6)
{
printf("Enter Time in Seconds: \n");
scanf("%d", &userinputS);
timeHour = userinputS / 3600;
printf("Time in Hours: %.2f hours", timeHour);
}
else
{
printf("Please, enter the correct choice. \n");
}
}
// Function to convert Length
void LenConv()
{
int lenChoice;
float lenMeter, lenInch;
int userinputMt, userinputIn;
printf("\nWelcome to Length Converter! \n");
printf("Enter 1 for Meters to Inches. \n");
printf("Enter 2 for Inches to Meters. \n");
scanf("%d", &lenChoice);
if (lenChoice == 1)
{
printf("Enter Length in Meters: \n");
scanf("%d", &userinputMt);
lenInch = userinputMt * 39.3701;
printf("Length in Inches: %.2f inches", lenInch);
}
else if (lenChoice == 2)
{
printf("Enter Length in Inches: \n");
scanf("%d", &userinputIn);
lenMeter = userinputIn * 0.0254;
printf("Length in Meters: %.2f meters", lenMeter);
}
else
{
printf("Please, enter the correct choice. \n");
}
}
int main()
{
int choice, ch = 1;
do
{
printf("\n\n\n\n********************************************
\n");
printf("\t WELCOME TO UNIT BASE CONVERTER\n");
printf("\t 1. Convert Temperature(T)\n");
printf("\t 2. Convert Currency(C)\n");
printf("\t 3. Convert Mass(M)\n");
printf("\t 4. Convert Time(T)\n");
printf("\t 5. Convert Length(L)\n");
printf("\t 6. Exit(E)\n");
printf("********************************************\n");
printf("Enter Your Choice (1/2/3/4/5/6):\n");
scanf("%d", &choice);
switch (choice)
{
case 1:
TempConverter();
break;
case 2:
CurrencyConv();
break;
case 3:
MassConv();
break;
case 4:
TimeConv();
break;
case 5:
LenConv();
break;
case 6:
ch = 0;
printf("Thanks for using the application!");
break;
}
} while (ch != 0);
}
