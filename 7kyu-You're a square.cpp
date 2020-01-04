#include<iostream>
#include<math.h>
using namespace std;
bool is_square(int n)
{
 float i=sqrt(n);
 
 if(i-floor(i)==0){
 return true;
 }else{
 return false;
 }

}
