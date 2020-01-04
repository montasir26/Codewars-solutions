#include<vector>
using namespace std;

std::string how_much_i_love_you(int nb_petals) {
 string s;
 int j=0;
string arr[6]={
   "I love you",
   "a little",
   "a lot",
   "passionately",
   "madly",
   "not at all"
   };

  int arrlen=6-1;
  
 for (int i = 0; i < nb_petals; i++){
    s=arr[j];
    if (j >= arrlen) {
      j = 0;
      continue;
    }
    j++;
  }
  return s;
}
