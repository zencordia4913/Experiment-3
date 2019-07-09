#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;
int main ()
{
	int i;
	int pA [10], pB [10], pC [10];
	cout << "Experiment 3 - Problem 2" << endl;
	cout << "-------------------------" << endl;
	cout << "Enter all temperature for a week of Province A, Province B and then Province C. \n\n";

cout << "Please enter all temperatures from Province A "<< endl;
for (i=0; i<=7; i++)
{
	cin >> pA [i];
}
 cout << endl;

cout << "Please enter all temperatures from Province B "<< endl;
for (i=0; i<=7; i++)
{
	cin >> pB [i];
}

cout << "Please enter all temperatures from Province C "<< endl;
for (i=0; i<=7; i++)
{
	cin >> pC [i];
}

cout << " " << endl;
cout << " " << endl;
cout << "Storing info........" << endl;
cout << " " << endl;
cout << " " << endl;
cout << "-------------------------" << endl;

for (i = 1; i <= 7; i++)
	
{
	cout << "Province A, Day " << i << ": " << pA [i] << endl;
}

cout << endl;

for (i = 1; i <= 7; i++)
	
{
	cout << "Province B, Day " << i << ": " << pB [i] << endl;
}

cout << endl;

for (i = 1; i <= 7; i++)
	 
{
	cout << "Province C, Day " << i << ": " << pC [i] << endl;
}

cout << endl;

system("pause");
getch ();
return 0;
 }

