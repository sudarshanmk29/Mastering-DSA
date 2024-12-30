#include <stdio.h>
#include <stdint.h>

uint8_t check_kbit_set(int32_t n, int32_t k)
{
    return (n&(1<<k));
}
int main()
{
    int32_t n, k;
    
    printf("Enter the number and the kth bit to be set: ");
    scanf("%d %d", n, k);

    if(!check_kbit_set(n, k))
        n = n | (1<<k);
    else
        printf("The bit is already set\n");
    
    printf("The new number after setting the kth bit is: %d\n", n);
}