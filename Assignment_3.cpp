// CS 2A Lab 3 Framework

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// main client --------------------------------------------------------
int main()
{
   // food #1 constants
   const string FOOD_1_NAME = "avocado";
   const  int FOOD_1_CALORIES_P100G = 160; // in calories
   const  double FOOD_1_SOL_FIBER_P100G = 1.75; // in grams
   const  double FOOD_1_PROTEIN_P100G = 2.0; // in grams
   const  double FOOD_1_SUGAR_P100G = 0.3; // in grams

   // food #2 constants
   const  string FOOD_2_NAME = "tomato";
   const  int FOOD_2_CALORIES_P100G = 18; // in calories
   const  double FOOD_2_SOL_FIBER_P100G = .12; // in grams
   const  double FOOD_2_PROTEIN_P100G = 0.9; // in grams
   const  double FOOD_2_SUGAR_P100G = 2.6; // in grams

   // food #3 constants
   const  string FOOD_3_NAME = "mozzarella";
   const  int FOOD_3_CALORIES_P100G = 300; // in calories
   const  double FOOD_3_SOL_FIBER_P100G = 0.; // in grams
   const  double FOOD_3_PROTEIN_P100G = 22.2; // in grams
   const  double FOOD_3_SUGAR_P100G = 1.0; // in grams

   // food #4 constants
   const  string FOOD_4_NAME = "spinach";
   const  int FOOD_4_CALORIES_P100G = 23; // in calories
   const  double FOOD_4_SOL_FIBER_P100G = 0.78; // in grams
   const  double FOOD_4_PROTEIN_P100G = 3.0; // in grams
   const  double FOOD_4_SUGAR_P100G = 0.4; // in grams

   // food #5 constants
   const  string FOOD_5_NAME = "almond";
   const  int FOOD_5_CALORIES_P100G = 597; // in calories
   const  double FOOD_5_SOL_FIBER_P100G = 1.1; // in grams
   const  double FOOD_5_PROTEIN_P100G = 22.1; // in grams
   const  double FOOD_5_SUGAR_P100G = 4.9; // in grams

   const  string INDENT = "   ";

   string recipeName, userInputStr;
   int userInputInt, servingNum;
   double totalSolFiber, totalCals, totalProtein, totalSugar;

   // initialize accumulator variables
   totalSolFiber = 0.;
   totalCals = 0;
   totalProtein = 0;
   totalSugar = 0;

   // print menu
   cout << "---------- List of Possible Ingredients ---------" << endl;
   cout << INDENT << "Food #1: " << FOOD_1_NAME << endl;
   cout << INDENT << "Food #2: " << FOOD_2_NAME << endl;
   cout << INDENT << "Food #3: " << FOOD_3_NAME << endl;
   cout << INDENT << "Food #4: " << FOOD_4_NAME << endl;
   cout << INDENT << "Food #5: " << FOOD_5_NAME << endl << endl;

   // name of recipe
   cout << "What are you calling this recipe? ";
   getline(cin, recipeName);

   // number of servings
   cout << "How many portions does this recipe serve? ";
   cin >> servingNum;
   
   // food #1 ---------------------------------------------------------
   cout << "\nHow many grams of " << FOOD_1_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   /*
   // update accumulators
   totalCals += userInputInt * (FOOD_1_CALORIES_P100G / 100.);
   totalSolFiber += userInputInt * (FOOD_1_SOL_FIBER_P100G / 100.);
   totalProtein += userInputInt * (FOOD_1_PROTEIN_P100G / 100.);
   totalSugar += userInputInt * (FOOD_1_SUGAR_P100G / 100.);
   
   
   // food #2 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_2_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   // update accumulators
   totalCals += userInputInt * (FOOD_2_CALORIES_P100G / 100.);
   totalSolFiber += userInputInt * (FOOD_2_SOL_FIBER_P100G / 100.);
   totalProtein += userInputInt * (FOOD_2_PROTEIN_P100G / 100.);
   totalSugar += userInputInt * (FOOD_2_SUGAR_P100G / 100.); 

   // food #3 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_3_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   // update accumulators
   totalCals += userInputInt * (FOOD_3_CALORIES_P100G / 100.);
   totalSolFiber += userInputInt * (FOOD_3_SOL_FIBER_P100G / 100.);
   totalProtein += userInputInt * (FOOD_3_PROTEIN_P100G / 100.);
   totalSugar += userInputInt * (FOOD_3_SUGAR_P100G / 100.);

   // food #4 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_4_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   // update accumulators
   totalCals += userInputInt * (FOOD_4_CALORIES_P100G / 100.);
   totalSolFiber += userInputInt * (FOOD_4_SOL_FIBER_P100G / 100.);
   totalProtein += userInputInt * (FOOD_4_PROTEIN_P100G / 100.);
   totalSugar += userInputInt * (FOOD_4_SUGAR_P100G / 100
   
   // food #5 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_5_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;

   // update accumulators
   totalCals += userInputInt * (FOOD_5_CALORIES_P100G / 100.);
   totalSolFiber += userInputInt * (FOOD_5_SOL_FIBER_P100G / 100.);
   totalProtein += userInputInt * (FOOD_5_PROTEIN_P100G / 100.);
   totalSugar += userInputInt * (FOOD_5_SUGAR_P100G / 100.);
   */   

   // report results --------------------------------------------------
   cout << "\nNutritional value per serving for " << recipeName 
        << "------------" << endl;
   cout << INDENT << "Calories: " << totalCals << endl;
   cout << INDENT << "Soluble Fiber: " << totalSolFiber << " grams." << endl;
   cout << INDENT << "Protein: " << totalProtein << " grams." << endl;
   cout << INDENT << "Sugar: " << totalSugar << " grams." << endl << endl;

   return 0;
}