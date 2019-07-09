#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{ 
	int num, a, b, c;
	int arr [15];
	float sum;


	cout << "Experiment 3 - Problem 1" << endl;
	cout << "------------------------" << endl;

	cout << "Please enter an array with 15 elements: " << flush;

	for (num = 0; num < 15; num++)
	{
		cin >> arr[num];
	}



	for (num = 0; num < 15; num++)
	{


	for (a = num + 1; a < 15; a++)
    {


	for (num = 1; num < 15; num++)
	{


	if (arr[num] > arr [a])
	{ 
	   b = arr[num];
	   arr[num] = arr [a];
	   arr [a] = b;





	}
    }
	}
	}
		c = arr [0];
		sum = 0;
		 for (num = 0; num < 15; num++)
	  {
		  if (c > arr [num])
			  c = arr [num];
			 sum = sum + arr[num];
	  }
	cout << endl;
	cout << "-------------------------------------------" << endl;
	cout << "The smallest integer in the array is: " << c << endl;
	cout << "The largest integer in the array is: " << b << endl;
	cout << "The sum of all the integers in the array is: " << sum << endl;
	cout << "The total avg. of the integers in the array is: " <<sum / 15 << endl;
	cout << " " << endl;
	cout << " " << endl;
	cout << " " << endl;
	system("pause");
	getch ();
	return 0;
}