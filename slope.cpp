//Mark PIllco
//15 February 2017
//To get the formula of a slope

#include <iostream>

using namespace std;

main () 
{
	//Variables
	double x1, y1, x2, y2, slope ;

	//Input
	cout << "Enter the x1 value:" ;
	cin  >> x1 ;
	cout << "Enter the y1 value:" ;
	cin  >> y1 ;
	cout << "Enter the x2 value:" ;
	cin  >> x2 ;
	cout << "Enter the y2 value:" ;
	cin >> y2 ;

	//Processing
	slope= (y2 - y1)/(x2 - x1) ;

	//Output
	cout << "The slope for the line that connects two points(" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is " << slope << endl;

	return 0;
 }
	
