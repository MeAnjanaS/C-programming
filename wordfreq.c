#include <stdio.h>
#include <string.h>
#define MAX 50
#define LEN 20
struct Word{
    char word[LEN];
    int count;
};
void countFreq(char input[][LEN],int n,struct Word words[],int *unicount) {
    int found=0;
    for(int j=0;i<*unicount;j++){
        if (strcmp(words[j].word,input[i])==0) {
            words[j].count++;
            found=1;
            break;
        }
    }
    if(!found){
            strcpy(words[*unicountt].word,input[i]);
            words[*unicount].count=1;
            (*unicount)++;
        }
    }
}
int main(){
    char input[MAX][LEN};
    struct Word words[MAX];
    int n;
    int unicount=0;
    printf("Enter no.of words:\n");
    scanf("%d",&n);
    printf("Enter words:\n");
    for(int i=0;i<n;i++) {
        scanf("%s",input[i]);
    }
    countFreq(input,n,words,&unicount);
    printf("\nWord Frequencies:\n");
    for(int i=0;i<unicount;i++) {
        printf("%s : %d\n",words[i].word,words[i].count);
    }
    return 0;
}



