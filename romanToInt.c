int romanToInt(char* s) {
    int I=1,V=5,X=10,L=50,C=100,D=500,M=1000;
    int out=0,i=0;

    while(s[i]!='\0'){
        if(s[i]=='M'){//1000
            out+=M;
        }
        else if(s[i]=='D'){//500
            out += D;
        }
        else if(s[i]=='C'){//100
            if(s[i+1]=='M'){
                out+=M-C;
                i++;
            }
            else if(s[i+1]=='D'){
                out+=D-C;
                i++;
            }
            else{
                out+=C;
            }
        }
        else if(s[i]=='L'){//50
            out+=L;
        }
        else if(s[i]=='X'){//10
            if(s[i+1]=='C'){
                out+=C-X;
                i++;
            }
            else if(s[i+1]=='L'){
                out+=L-X;
                i++;
            }
            else{
                out+=X;
            }
        }
        else if(s[i]=='V'){
            out+=V;
        }
        else if(s[i]=='I'){//1
            if(s[i+1]=='X'){
                out+=X-I;
                i++;
            }
            else if(s[i+1]=='V'){
                out+=V-I;
                i++;
            }
            else{
                out+=I;
            }
        }
        i++;
    }
    return out;
}
