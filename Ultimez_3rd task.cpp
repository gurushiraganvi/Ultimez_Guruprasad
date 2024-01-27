#include <iostream>
#include <map>

using namespace std;

int main() {
   // Create a map to store pizza sizes and slices
   map<string, int> pizzaSizes = {{"Large", 8}, {"Medium", 6}, {"Regular", 4}, {"Small", 1}};

   int individuals;
   cout << "Enter the number of people: ";
   cin >> individuals;

   int largePizzas = individuals / pizzaSizes["Large"];
   int remaining = individuals % pizzaSizes["Large"];

   int mediumPizzas = remaining / pizzaSizes["Medium"];
   remaining %= pizzaSizes["Medium"];

   int regularPizzas = remaining / pizzaSizes["Regular"];
   remaining %= pizzaSizes["Regular"];

   int smallPizzas = remaining; // No need for division since Small has 1 slice

   cout << "\nNumber of individuals: " << individuals << endl;
   cout << "Large Pizzas: " << largePizzas << endl;
   cout << "Medium Pizzas: " << mediumPizzas << endl;
   cout << "Regular Pizzas: " << regularPizzas << endl;
   cout << "Small Pizzas: " << smallPizzas << endl;

   int totalSlices = largePizzas * pizzaSizes["Large"] + mediumPizzas * pizzaSizes["Medium"] + regularPizzas * pizzaSizes["Regular"] + smallPizzas;

   if (totalSlices >= individuals) {
       cout << "\nEnough slices! Everyone gets a slice." << endl;
   } else {
       cout << "\nNot enough slices! Need more pizzas." << endl;
   }

   return 0;
}
