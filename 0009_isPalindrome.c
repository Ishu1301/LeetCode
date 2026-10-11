bool isPalindrome(int x) {
    long int temp, rev = 0, rem =0;
    temp = x;
    if(temp>=0){
        while(temp!=0)
        {
        rem = temp%10;
        rev = rev*10 + rem;
        temp = temp/10;
        }
    if(x == rev)
    return true;
    else
    return false;
    }
    else
    return 0;
}
