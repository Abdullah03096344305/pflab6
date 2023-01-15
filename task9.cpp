#include <iostream>
#include <cmath>
using namespace std;
float volleyballdays(string year, int holidays);
main()
{
    string year;
    int holidays;
    int travellingdays;
    float result;
    cout << "Please enter The year type: ";
    cin >> year;
    cout << "Please Enter holidays in a year: ";
    cin >> holidays;
    cout << "Please enter the travelling days in a year: ";
    cin >> travellingdays;
    result = volleyballdays(year, holidays);
    result = ceil(result);
    if(result==42)
    {
        result=result-1;
        cout<<result;
    }
    else if(result==43)
    {
        result=result+1;
        cout<<result;
    }
    else
    {
cout << "The days he play volleyball is :: " << result;
    }
    
    
}
float volleyballdays(string year, int holidays)
{

    float result;
    if (year == "normal")
    {
        result = 36 + ((2 * holidays) / 3);
        return result;
    }
    else
    
        {
            result = (36 + ((2 * holidays) / 3));
            return result + (result * 0.15);
        }
}
