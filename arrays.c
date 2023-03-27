#include <stdio.h>

int main(void)
{
    int a[5]; /* declare an array a containing 5 integers */
    int *p; /* pointer 1 */
    int *p2; /*pointer 2 */

    /* assigning values to each element in the array */
    *a = 98; /* a[0] */
    *(a + 1) = 198; /* a[1] */
    *(a + 2) = 298; /* a[2] */
    a[3] = 398;     /* a[3] */
    *(a + 4) = 498; /* a[4] */

    printf("a[0] => %d\n", a[0]);
    printf("a[1] => %d\n", a[1]);
    printf("a[2] => %d\n", a[2]);
    printf("a[3] => %d\n", a[3]);
    printf("a[4] => %d\n", a[4]);

    p = a + 1; /* pointer1 = value @ a[1], which is 198 */
    printf("(p = a + 1) => %d\n", *p);

    *p = 98; /* update pointer 1's value from 198 to 98 */
    printf("(*p = 98) => %d\n", *p);

    p2 = a + 3; /* pointer 2 = value of a[3] ==> 398 */
    printf("(p2 = a + 3) => %d\n", *p2);
    *p2 = *p + 1337; /* pointer 2 = 98 (pointer1's current value) + 1337 ==> 1435 */
    printf("(p2 = p + 1337) => %d\n", *p2);

    return (0);
}