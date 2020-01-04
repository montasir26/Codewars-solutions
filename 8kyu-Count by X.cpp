#include <vector>
#include<iostream>
using namespace std;
std::vector<int> countBy(int x,int n){


vector<int>arr;

for(int i=1;i<=n;i++){
      int y=x*i;
           arr.push_back(y);

}
return {arr};
  
}
