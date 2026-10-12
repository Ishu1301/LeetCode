bool isValid(char* s) {
    int n = strlen(s);
    char arr[n];
    int index=-1;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            index++;
            arr[index] = s[i];
        }
        else{
            if(index==-1){
                return false;
            }
            else{
                if(s[i]==')' && arr[index]=='('){
                    index--;
                }
                else if(s[i]==']' && arr[index]=='['){
                    index--;
                }
                else if(s[i]=='}' && arr[index]=='{'){
                    index--;
                }
                else{
                    return false;
                }
            }
        }
    }
    if(index==-1){
        return true;
    }
    else
    return false;
}
