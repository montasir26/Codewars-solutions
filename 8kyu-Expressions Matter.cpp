unsigned short int expressionsMatter (unsigned short int a , unsigned short int b , unsigned short int c)
{
    
    int large=0,i,j,k,l,m;
    
    i=a*(b+c);
    j=a*b*c;
    k=a+b*c;
    l=(a+b)*c;
    m=a+b+c;
    
    if(i>j && i>k && i>l && i>m){
    large = i;
    
    }else if(j>k && j>l && j>m){
    large = j;
    }else if(k>l && k>m){
    large = k;
    }else if(l>m){
    large = l;
    }else{
    
    large =m;
    }
    
    
    
    return large ; 
}
