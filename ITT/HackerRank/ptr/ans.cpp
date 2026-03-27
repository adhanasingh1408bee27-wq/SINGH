#include <stdio.h>
#include <cstdlib> // For abs()

void update(int *a, int *b) {
    int valA = *a;
    int valB = *b;
    
    // Update *a to be the sum
    *a = valA + valB;
    
    // Update *b to be the absolute difference
    *b = std::abs(valA - valB);
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    if (scanf("%d %d", &a, &b) == 2) {
        update(pa, pb);
        printf("%d\n%d", a, b);
    }

    return 0;
}
