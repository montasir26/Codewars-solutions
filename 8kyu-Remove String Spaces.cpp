#include<string>
#include<algorithm>


std::string no_space(std::string x)
{

std::string str=x;
   str.erase(std::remove_if(str.begin(), str.end(), ::isspace), str.end());
   
   return str;
}
