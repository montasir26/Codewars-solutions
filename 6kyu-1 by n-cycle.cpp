int cycle(int n) {
 
 if(n%2==0 || n%5==0){
     
 return -1;
 
 }
 
 int i=1,j=0;
 
 do{
 
 i=(i*10)%n;
 j++;
 
 
 
 }while(i!=1);
 
 return j;
}
