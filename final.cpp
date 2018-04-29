//Kyle Streit
//Final App
//5/7/2018
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;



struct expenses //variables for computing
{
  double rent=0.0;
  double utilities=0.0;
  double food=0.0;
  double transportation=0.0;
  double personalvehicles=0.0;
  double insurance=0.0;
  double entertainment=0.0;
  double misc=0.0;


}spend;

void title() //Displays the begining of program
{
  cout << setw(48) << "Mouthly Student Budget Calculator";
  cout << endl <<  "-------------------------------------------------------------";
}

double income(double &inc)// Will prompt user for their income for the month
{
  cout << "\n\n-------------------------------------------------------------";
  cout << "\n\nHow much income do you expect on making this month?: $";
  cin >> inc;
  return inc;
}

expenses monthly() //Promtping for each expense of the month
{
  
  cout << "\nEnter how much you spend on rent: $";
  cin >> spend.rent;
  cout << "\nEnter how much you think utilities will cost this month: $";
  cin >> spend.utilities;
  cout << "\nEnter how much food you are planning on purchasing this month (out to eat and groceries): $";
  cin >> spend.food;
  cout << "\nEnter how much you estimate to spend on gas this month: $";
  cin >> spend.transportation;
  cout << "\nEnter how much insurance will this month cost (medical, dental, car, etc.): $";
  cin >> spend.insurance;
  cout << "\nEnter how much entertainment will cost you this month: $";
  cin >> spend.entertainment;
  cout << "\nEnter any other expenses you may have for this month: $";
  cin >> spend.misc;
  
}

double calculate(double &total) //calculate and displat total cost
{
  
  total = spend.rent+ spend.utilities + spend.food + spend.transportation + spend.insurance + spend.entertainment + spend.misc; //Adding all of the expenses

   cout << "\n\n-------------------------------------------------------------";
   cout << "\n\nThe total costs you are predicting on spending this month is: $" << total;
}



int main() 
{
  double inc;
  double total;
  double final;
  title();
  monthly();
  calculate(total);
  income(inc);
  

  
  final = inc - total;
  cout << endl << "-------------------------------------------------------------" << endl;
  
  if (inc>=total)
  {
    cout << "Your surplus this month is: $" << final;
  }
  else
  {
    cout << "Your financial loss this month is: $" << final;
  }
  
}
