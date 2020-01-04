std::string tickets(const std::vector<int> peopleInLine){
  int size=peopleInLine.size();
  int check=0,check2=0,check3=0;
  for(int i=0;i<size;i++){
      if(peopleInLine[i]==25){
      check++;
      
      } 
      
      if(peopleInLine[i]==50){
        check--;
        check2++;

  }
  
   if(peopleInLine[i]==100){

       if(check2 == 0 && check >= 3){
      check -= 3;
      }else{
        check -= 1; check2 -= 1;
      }
 

  }
   if(check < 0 || check2 < 0){
       return "NO";
    }
 }
 
 return "YES";
 
}
