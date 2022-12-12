//Road Trip Calculation 

#include <iostream>
using namespace std;

int main()
{
	//Deaclaring the variables 




	double speed = 68.0;
	int DayOnRoad = 4;
	double HrsEachDay = 7.5;


	double DailyMiles, TotalMiles, TotalHrsDriven;





	//calculating the Drving 


	DailyMiles = HrsEachDay * speed;

	TotalHrsDriven = DayOnRoad * HrsEachDay;

	TotalMiles = TotalHrsDriven * speed;


	//creating program


	cout << "\n Road Trip Calculation Program ";

	cout << DayOnRoad << " Days on Road " 
	<< speed << " MPH for " << HrsEachDay << " Hours Each Day ";

	cout << "\n Daily Miles: " << DailyMiles;
	cout << "\n Total Hrs Driven: " << TotalHrsDriven;
	cout << "\n Total Miles Driven: " << TotalMiles << endl;


return 0;



}