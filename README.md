# Customer Management Program

A simple C++ program for managing customer information, calculating prices based on usage, and summarizing daily totals. This program allows adding new customers, searching for customers, editing prices, calculating daily totals, and closing the application.

## Features

- **Add Customer:** Add a new customer with name and start time.
- **Find Customer:** Search for a customer and display their start time.
- **Edit Prices:** Modify the price rates for different time durations.
- **Calculate Day Total:** Calculate the total amount for the day based on customer records.
- **Exit Program:** End the day and close the program.

## Usage

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/your-repo-name.git
   cd your-repo-name
2. Compile and run the program:
  g++ -o customer_management main.cpp
./customer_management

###Available Operations:

'A' - Add a new customer.
'F' - Find a customer and calculate their fee.
'E' - Edit hourly prices.
'D' - Calculate and display the total revenue for the day.
'X' - Exit the program.

###Code Overview
Data Structure: The program uses a struct named vars to hold customer names, start and end times, prices, and the total revenue.
Functions:
operA - Add a new customer.
operF - Find a customer by name.
operFcalc - Calculate the price based on usage duration.
operE - Edit prices.
operD - Calculate the daily total.
operX - End the program.
