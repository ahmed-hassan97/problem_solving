#include <stdio.h>
#include <stdlib.h>
void toupper(char *ptr);
void tolower(char *ptr);

int main()
{
    char p='D';
    toupper(&p);
    tolower(&p);

    return 0;
}
void toupper(char *ptr){

char *p;
for(p = ptr ; *p ; ++p){

if(*p >= 'a' && *p<='z'){
*p-='a' - 'A';
printf("%c",*p);
}
}
}

void tolower(char *ptr){

char *p;
for(p = ptr ; *p ; ++p){

if(*p >= 'a' && *p<='z'){
*p+='a' - 'A';
printf("%c",*p);
}
}
}
