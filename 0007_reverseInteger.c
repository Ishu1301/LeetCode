int reverse(int x){
int temp;
long int rev = 0;
while(x!=0)
{
    temp = x%10;
    rev = rev*10+temp;
    x = x/10;
}
if(rev>=INT_MAX||rev<=INT_MIN)
    return 0;
return rev;
}
