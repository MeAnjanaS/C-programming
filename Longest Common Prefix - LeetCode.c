char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize==0){
        return strdup("");
    }
    char *first=strdup(strs[0]);
    for(int i=1;i<strsSize;i++){
        int j=0;
        while(first[j] && strs[i][j]&& first[j]==strs[i][j]){
            j++;
        }
        first[j]='\0';
        if(first[0]=='\0'){
            return first;
        }
    }
    return first;
}