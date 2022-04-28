#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Water_pressure
{
  private:
  float waterLevel[4]; //the water level set in place for the different section
  int weather;
  public:
 
  float findWaterlevel(); 
  
 
  //float getwaterLevel(int, int, int, int);
  //void setwaterLevel(int, int, int, int);
};





class pipes
{
  private:
  double damage; //when a water main breaks
   string weather;
  
  public:
  double getdamage();
  double findDamage();
  double findWeather();
  
};


struct Zone
{
  string names;
  string location;
  string history;
string residents;
  
  };

void printZones(Zone);

int main() 
{
  int choice;
  char response;
  char again{};
   Water_pressure liquid;
  pipes integrity;
  Zone results[4];

  results[0].names = "Zone 1";
  results[0].location = "From the city limits of Ridgeland to the western end of Beasley Road ";
  results[0].history = "This zone was established in 1900. The pipes for Zone 1 were replaced last month. The last time the pipes in Zone 1 was replaced was after President Nixon's resignation in 1974.";
  results[0].residents = "10000";

  results[1].names = "Zone 2";
  results[1].location = "From Jackson State University to Buddy Butts Park";
  results[1].history = "This zone was established in 1903.The pipes for Zone 2 are the second new ones to be installed in over 50 years. In 1999, Pam Grier made a complaint to the city about her home in this zone, which prompted the city to immediately fix the water the exact day.";
  results[1].residents = "8070";

  results[2].names = "Zone 3";
  results[2].location = "From Raymond Road to Lakeshore Road";
  results[2].history = "This zone was established in 1905. The pipes for Zone 3 are in good condition. These pipes can withstand the worst of weather, but they are bound to break at least once a month. ";
  results[2].residents = "9700";

  results[3].names = "Zone 4";
  results[3].location = "Kickapoo Road to the Jackson Zoo";
  results[3].history = "This zone was established in 1910. The pipes for Zone 4 are in horrible condition. These pipes are bound to break almost every two weeks. The pipes have had the most constant repairs out of all of the zones for over 50 years.";
  results[3].residents = "5000";
  do{

  cout << "Welcome to Water Main Street" << endl;
 
  cout << "Which zone do you live in?" << endl;
  cout << "Zone 1, 2, 3, or 4?" << endl;
  cout << "Press the corresponding number for your zone." << endl;
  cin >> choice;
    fstream outData ("main.txt", ios::app);
	outData << choice << endl;
    
  if (choice == 1)
  {
    do{
    cout << "Names:"<<results[0].names << endl;
    cout << "Location:"<<results[0].location << endl;
    cout << "Residents: "<<results[0].residents << endl;
    cout << "History:"<< results[0].history << endl << endl;
    cout << "The water level is " << liquid.findWaterlevel() << endl;
    cout << "The pipes are at " << integrity.findDamage() << endl;

       outData << "Names:"<<results[0].names << endl;
    outData << "Location:"<<results[0].location << endl;
    outData << "Residents: "<<results[0].residents << endl;
    outData << "History:"<< results[0].history << endl << endl;
    outData << "The water level is " << liquid.findWaterlevel() << endl;
    outData << "The pipes are at " << integrity.findDamage() << endl;
    if (liquid.findWaterlevel() && integrity.findDamage() <= 5)
    {
      cout << "Time to stock up on water bottles and boil the water until further notice!" << endl;
      outData << "Time to stock up on water bottles and boil the water until further notice!" << endl;
      
    }
    else
    {
      cout << "Normal as it should be!" << endl;
      outData << "Normal as it should be!" << endl;
    }
      cout << "Would you like to run the program again? \n Press y to run program again or any key to end.";
		cin >> response;
      }while (response == 'y');
  }
  if (choice == 2)
  {
    do{
    cout << "Name:" << results[1].names << endl;
    cout << "Location:" <<results[1].location << endl;
    cout << "Residents: " << results[1].residents << endl;
    cout << "History: "<< results[1].history << endl<<endl;
     cout << "The water level is " << liquid.findWaterlevel() << endl;
     cout << "The pipes are at " << integrity.findDamage() << endl;

       outData << "Name:" << results[1].names << endl;
    outData << "Location:" <<results[1].location << endl;
    outData<< "Residents: " << results[1].residents << endl;
    outData << "History: "<< results[1].history << endl<<endl;
     outData << "The water level is " << liquid.findWaterlevel() << endl;
     outData << "The pipes are at " << integrity.findDamage() << endl;
     if (liquid.findWaterlevel() && integrity.findDamage() <= 5)
    {
      cout << "Time to stock up on water bottles and boil the water until further notice!" << endl;
      outData << "Time to stock up on water bottles and boil the water until further notice!" << endl;
    }
    else
    {
      cout << "Normal as it should be!" << endl;
      outData << "Normal as it should be!" << endl;
    }
      cout << "Would you like to run the program again? \n Press y to run program again or any key to end.";
		cin >> response;
      }while (response == 'y');
  }
  if (choice == 3)
  {
    do{
     cout << "Names:"<<results[2].names << endl;
    cout << "Location:"<<results[2].location << endl;
    cout << "Residents:"<<results[2].residents << endl;
    cout << "History:"<<results[2].history << endl<<endl;
     cout << "The water level is " << liquid.findWaterlevel() << endl;
     cout << "The pipes are at " << integrity.findDamage() << endl;
     

       outData << "Names:"<<results[2].names << endl;
    outData << "Location:"<<results[2].location << endl;
    outData << "Residents:"<<results[2].residents << endl;
    outData << "History:"<<results[2].history << endl<<endl;
     outData << "The water level is " << liquid.findWaterlevel() << endl;
     outData << "The pipes are at " << integrity.findDamage() << endl;
     if (liquid.findWaterlevel() && integrity.findDamage() <= 5)
    {
      cout << "Time to stock up on water bottles and boil the water until further notice!" << endl;
      outData << "Time to stock up on water bottles and boil the water until further notice!" << endl;
    }
    else
    {
      cout << "Normal as it should be!" << endl;
      outData << "Normal as it should be!" << endl;
    }
      cout << "Would you like to run the program again? \n Press y to run program again or any key to end.";
		cin >> response;
      }while (response == 'y');
  }
  else if (choice == 4)
  {
    do{
     cout << "Names:"<< results[3].names << endl;
    cout << "Location:"<<results[3].location << endl;
    cout << "Residents:"<< results[3].residents << endl;
    cout << "History:" << results[3].history << endl << endl;
     cout << "The water level is " << liquid.findWaterlevel() << endl;
     cout << "The pipes are at " << integrity.findDamage() << endl;
      

      outData << "Names:"<< results[3].names << endl;
   outData << "Location:"<<results[3].location << endl;
    outData << "Residents:"<< results[3].residents << endl;
    outData << "History:" << results[3].history << endl << endl;
    outData<< "The water level is " << liquid.findWaterlevel() << endl;
     outData << "The pipes are at " << integrity.findDamage() << endl;
     if (liquid.findWaterlevel() && integrity.findDamage() <= 5)
    {
      cout << "Time to stock up on water bottles and boil the water until further notice!" << endl;
      outData << "Time to stock up on water bottles and boil the water until further notice!" << endl;
    }
    else
    {
      cout << "Normal as it should be. For now." << endl;
      outData << "Normal as it should be. For now." << endl;
    }
      cout << "Would you like to run the program again? \n Press y to run program again or any key to end.";
		cin >> response;
      }while (response == 'y');
  }

  cout << "Would you like to run the entire program again? \n Press y to run the entire program or any key to end: ";
	cin >> again;
    
	outData.close();
	}while (again == 'y'); //End do...while loop for ENTIRE program 

  
  return 0;
}
float Water_pressure::findWaterlevel()
  {
    unsigned seed = time(0);
    srand(seed);

  return (rand() %
        (10 - 1 + 1)) +
        1;
  };

double pipes::findDamage()
{
  unsigned seed = time(0);
    srand(seed);

  return (rand() %
        (10 - 1 + 1)) +
        1;
};
