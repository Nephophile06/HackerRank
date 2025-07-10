#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int max_num = a;
    if (b > max_num) 
        max_num = b;
    if (c > max_num) 
        max_num = c;
    if (d > max_num) 
        max_num = d;
    return max_num;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
