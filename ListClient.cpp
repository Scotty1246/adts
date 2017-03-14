#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2, Listname;
 int lnum, cnum, val, L_pos, getnum;
 char choice, schoice;
 //Do some stuff with L1, L2, ...
 // ...
 do
 {
 cout << "Which list do you want to use" << endl;
 cout << "List L1 (Enter 1) or List L2 (Enter 2)" << endl;
 cin >> lnum;

 if(lnum ==1)
 {
  Listname = L1;
 }
 else
 {
  Listname = L2;
 }

 do
 {
 cout << "Enter 1 to insert to list" << endl;
 cout << "Enter 2 to remove from list" << endl;
 cout << "Enter 3 to display the entire list" << endl;
 cout << "Enter 4 to Get a specific element from list" << endl;
 cout << "Enter 5 to clear entire list" << endl;
 cout << "Enter 6 to use the list desttructor" << endl;
 
 cin >> cnum;

	switch(cnum)
	{
		case 1: cout << "Enter the value you want to add to the list" << endl;
			cin >> val;
			cout << "Enter the position for where you want the value to be entered in the list" << endl;
			cin >> L_pos;
			Listname.insert(val,L_pos);
			break;

		case 2: cout << "Enter the position of the value you want to remove from the list" << endl;
			cin >> L_pos;
			Listname.remove(L_pos);
			break;

		case 3: Listname.display();
			break;

		case 4: cout << "Enter the position of the value you want to get" << endl;
			cin >> L_pos;
			getnum = Listname.getelement(L_pos); 
			cout << getnum << endl;
			break;

		case 5: Listname.clear();
		       break;

		case 6: Listname.~List();
		        break;
	}
 cout << "Do you want to manipulate this list anymore" << endl;
 cout << "Y for Yes or N for No" << endl;
cin >> schoice;
 }while(schoice != 'N');
 cout << "Do you want to manipulate any of the two list anymore" << endl;
 cout << "Y for Yes or N for No" << endl;
 cin >> choice;
 }while(choice != 'N');
return 0;


}
