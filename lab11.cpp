// lab11.cpp
#include <iostream>
#include <string>   
#include "Map.cpp"

using namespace std;

int main()
{
  Map<int,string> studentDB;
  int id;
  string name;

  cout << "Student Id? ";
  cin >> id;

  while (id != 0)
    {
      cout << "Student Name? ";
      cin >> name;
      studentDB[id] = name;
      cout << "Student Id? ";
      cin >> id;
    }

  cout << "All Students? " << endl;
  studentDB.printMap();
  cout << "Who you want to know? ";
  cin >> id;
  cout <<" The corresponding name is: " << studentDB[id] << endl;
  
  cout << "change id to change? ";
  cin >> id;
  cout << "change to what name";
  cin >> name;
  studentDB[id] = name;
  studentDB.printMap();
  
  cout << "Remove who? ";
  cin >> id;
  studentDB.remove(id);
  studentDB.printMap();

  return 0;
}