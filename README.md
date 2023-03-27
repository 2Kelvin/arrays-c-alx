# Arrays in C

Syntax:
```c
/**
 * 1. data type
 * 2. array name
 * 3. [number of elements in the array]
 */
int f[3];
```
- array f above has 3 integer elements.
- Arrays in C contain elements of one type only, they do not mix-match types i.e. if an array is of type char, then all array elements in that array should all be of type char and so on...
- Accessing and editing array elements syntax:
```c
f[0]; /* access array's first item */ 

f[2] = 830; /* assigning a value to the third item in the array */
``` 