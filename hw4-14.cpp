// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double smallPizza = 0.0;
  double mediumPizza = 0.0;
  double largePizza = 0.0;
  double familyPizza = 0.0;

  double totalAmount = 0.0;

  double smallPizzapercent= 0.0;
  double mediumPizzapercent= 0.0;
  double largePizzapercent= 0.0;
  double familyPizzapercent= 0.0;
  
  cout << "smallPizza: ";
  cin >> smallPizza;
  cout << "mediumPizza: ";
  cin >> mediumPizza;
  cout << "largePizza: ";
  cin >> largePizza;
  cout << "familyPizza: ";
  cin >> familyPizza;

  totalAmount = smallPizza + mediumPizza + largePizza + familyPizza;
  smallPizzapercent = (smallPizza / totalAmount) * 100;
  mediumPizzapercent = (mediumPizza / totalAmount) * 100;
  largePizzapercent = (largePizza / totalAmount) * 100;
  familyPizzapercent = (familyPizza / totalAmount) * 100;

  cout << totalAmount;
  cout << smallPizzapercent;
  cout << mediumPizzapercent;
  cout << largePizzapercent;
  cout << familyPizzapercent << endl;

  
  return 0;
} // end of main function
