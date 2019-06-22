#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    //cpc tag: decl
    char *s;
    
    //cpc tag: alloc
    s = malloc(1024 * sizeof(char));
    
    //cpc tag: inp
    scanf("%[^\n]", s);
    
    //cpc tag: alloc
    s = realloc(s, strlen(s) + 1);
    
    //cpc tag: decl loop check out
    for (int i = 0; i < strlen(s); ++i) s[i] == ' ' ? putchar('\n') : putchar(s[i]);
    
    return 0;
}