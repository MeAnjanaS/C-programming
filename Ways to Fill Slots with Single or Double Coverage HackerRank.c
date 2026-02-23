#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char* ltrim(char*);
char* rtrim(char*);

int parse_int(char*);



/*
 * Complete the 'countInstallationSequences' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER n as parameter.
 */

/*
 * To return the string from the function, you should either do static allocation or dynamic allocation
 *
 * For example,
 * char* return_string_using_static_allocation() {
 *     static char s[] = "static allocation of string";
 *
 *     return s;
 * }
 *
 * char* return_string_using_dynamic_allocation() {
 *     char* s = malloc(100 * sizeof(char));
 *
 *     s = "dynamic allocation of string";
 *
 *     return s;
 * }
 *
 */
char* countInstallationSequences(int n) {
    if(n==0) return strdup("1");
    if(n==1) return strdup("1");
    char *pre1=strdup("1");
    char *pre2=strdup("1");
    for(int i=2;i<=n;i++){
        int l1=strlen(pre1);
        int l2=strlen(pre2);
        int maxlen=(l1>l2)?l1:l2;
        char *curr=malloc(maxlen+2);
        curr[maxlen+1]='\0';
        int carry=0;
        int p1=l1-1;
        int p2=l2-1;
        int k=maxlen;
        while(k>=0){
            int d1=(p1>=0)?pre1[p1]-'0':0;
            int d2=(p2>=0)?pre2[p2]-'0':0;
            int sum=d1+d2+carry;
            carry=sum/10;
            curr[k]=(sum%10)+'0';
            p1--;
            p2--;
            k--;
        }
        if(curr[0]=='0'){
            memmove(curr,curr+1,maxlen+1);
        }
        pre1=pre2;
        pre2=curr;
    }
    return pre2;
}

int main()
{
    int n = parse_int(ltrim(rtrim(readline())));

    char* result = countInstallationSequences(n);

    printf("%s\n", result);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;

    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) {
            break;
        }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') {
            break;
        }

        alloc_length <<= 1;

        data = realloc(data, alloc_length);

        if (!data) {
            data = '\0';

            break;
        }
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';

        data = realloc(data, data_length);

        if (!data) {
            data = '\0';
        }
    } else {
        data = realloc(data, data_length + 1);

        if (!data) {
            data = '\0';
        } else {
            data[data_length] = '\0';
        }
    }

    return data;
}

char* ltrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    while (*str != '\0' && isspace(*str)) {
        str++;
    }

    return str;
}

char* rtrim(char* str) {
    if (!str) {
        return '\0';
    }

    if (!*str) {
        return str;
    }

    char* end = str + strlen(str) - 1;

    while (end >= str && isspace(*end)) {
        end--;
    }

    *(end + 1) = '\0';

    return str;
}

int parse_int(char* str) {
    char* endptr;
    int value = strtol(str, &endptr, 10);

    if (endptr == str || *endptr != '\0') {
        exit(EXIT_FAILURE);
    }

    return value;
}
