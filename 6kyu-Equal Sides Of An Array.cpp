#include <vector>
using namespace std;

int find_even_index (const vector <int> numbers) {

int  sum=0;
int leftSum = 0;

  for (int i=0; i < numbers.size();i++) {
    sum += numbers[i];
  }

  for (int i=0; i < numbers.size();i++) {
    sum -= numbers[i];

    if (leftSum == sum) {
      return i;
    }

    leftSum += numbers[i];
  }


  return -1;
}
