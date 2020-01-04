#include<iostream>
#include<sstream>
#include <string>
#include <stdlib.h>
using namespace std;
std::string integrate(const int& coefficient,const int& exponent){

 int first,sec;
 
 
 sec=exponent+1;
 first=coefficient/sec;


  
return std::to_string(first) + "x^" + std::to_string(sec);
 
}
