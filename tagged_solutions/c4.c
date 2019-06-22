#include <stdio.h>
#include <stdlib.h>

int find_nth_term(int n, int a, int b, int c) {
    //cpc tag: check arith recur
    if (n == 1)         return a;
    else if (n == 2)    return b;
    else if (n == 3)    return c;
    else if (n == 4) return a + b + c;
    else return find_nth_term(n - 1, b, c, a + b + c);
}

int main() {
    //cpc tag: decl
    int n, a, b, c;
    //cpc tag: inp
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
    //cpc tag: out
    printf("%d", ans); 
    return 0;
}