int strStr(char* haystack, char* needle) {
    int i=0,j=0,k=0;
    int needleSize = strlen(needle),haystackSize=strlen(haystack);
    if(haystackSize<needleSize){
        return -1;
    }
    for(j=0;j<strlen(haystack);j++){
        if(haystack[j]==needle[i]){
            if(i==0){
                k=j;
            }
            i++;
            if(needle[i]=='\0'){
                return k;
            }
        }
        else if(i!=0){
            i=0;
            j=k;
        }
    }
    return -1;
}
