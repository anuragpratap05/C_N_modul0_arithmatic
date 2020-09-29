
int m=1000000000+7;
int trees(int h)
{
    
    if(h==0 || h==1)
    {
        return 1;
    }
    
    long  x=trees(h-1);
    long  y=trees(h-2);
    
    long res1=long(x*x)%m;
    long res2=long(x*y*2)%m;
    
    int ans1=(int)(res1);
    int ans2=(int)(res2);
    
    int ans=(ans1+ans2)%m;
    return ans;
    
    //return ((x%m)*(x%m))%m + 2*(((x%m)*(y%m))%m)%m;
}

int balancedBTs(int h) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return the output and donÃ¢ÂÂt print it.
  */
    
    trees(h);

}
