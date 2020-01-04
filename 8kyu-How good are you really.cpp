#include <vector>

bool betterThanAverage(std::vector<int> classPoints, int yourPoints) {
 
  int n=classPoints.size();
  int sum=0;
  for(int i=0;i<n;i++){
  sum=sum+classPoints[i];
  }
  
  if(yourPoints>(sum/n)){
  return true;
  }else{
  
  return false;
  }
  
  
}
