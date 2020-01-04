#include <cmath>
#include<iomanip>
using namespace std; 

double areaOfPolygonInsideCircle (double circleRadius , int numberOfSides )
{
  const double PI =  3.14159265;
 double n;

 n=((numberOfSides * circleRadius * circleRadius)/2) * sin(2 * PI /numberOfSides);
double i=(int)(n*1000+.5);

return double(i)/1000;
}
