// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double beginningBalance = 0.0;
  double totalDeposits = 0.0;
  double totalWithdrawals = 0.0;

  double totalAmount = 0.0;

  cout << "beginningBalance: ";
  cin >> beginningBalance;
  
  cout << "totalDeposits: ";
  cin >> totalDeposits;

  cout << "totalWithdrawals: ";
  cin >> totalWithdrawals;
  
  
  totalAmount = beginningBalance + totalDeposits - totalWithdrawals;
  cout << "totalAmount: $" << totalAmount << endl;

  return 0;
} // end of main function
