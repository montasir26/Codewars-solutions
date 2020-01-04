int centuryFromYear(int year) 
{
      int y=year/100;
      if(year%100==0){
      
      return y;
      }else{
      return y+1;
      }
      
}
