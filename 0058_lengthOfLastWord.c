int lengthOfLastWord(char* s) {
    int size=0,len=0;
    while(s[len]!='\0'){
        len++;
    }
    len=len-1;
    while(s[len]==' '){
        len--;
    }
    while(len>=0&&s[len]!=' '){
        size++;
        len--;
    }
    return size;
}
