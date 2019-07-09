#include <iostream>
#include <conio.h>
using namespace std;
  
int main()
{
	char arrA[50], arrB[50];
	int a, b;
	cout << "Experiment 3 - Problem 3 \n\n" ;
	cout << "Enter how many elements in your array: " ; cin >> b;
	cout << "Please enter elements in your Array (MAX of "<< b << " elements)" << endl;

	for (a = 0; a < b; a++)
	{
        cin >> arrA[a];
    }
      
    for (a = 0; a < b; a++)
	{
        arrB[a] = arrA[b-a-1];
    }    
    
    cout << endl;

	cout << "The elements in your array REVERSED : ";
    for(a = 0; a < b; a++)
	{
        cout << arrB[a] << " ";
    }

	cout << "Array size is : " << b;
    cout << endl;

	system("pause");
    getch();
    return 0;
}
