char* convertToTitle(int columnNumber) {
    char *res=(char *)malloc(20);
    int idx=0;
    while(columnNumber>0){
        columnNumber--;
        int rem=columnNumber%26;
        res[idx++]='A'+rem;
        columnNumber/=26;
    }
    res[idx]='\0';
    for(int i=0;i<idx/2;i++){
        char temp=res[i];
        res[i]=res[idx-i-1];
        res[idx-i-1]=temp;
    }
    return res;
}