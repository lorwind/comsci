### Constant variable
Constant variables **MUST** be initialized. and it cannot be changed because it is a CONSTANT!!!

Below codes are equivalent
```cpp
const int zero = 0;
int const one = 1;

zero = 1; //error: assignment of read-only variable 'zero'
```

### Constness in Pointers
Unlike previously, in the context of pointer those codes are not equivalent
```cpp
int two = 2;
const int* three = &two;

int four = 4;
int* const five = &four;
```

### Pointer to Constant Variable
In pointer, this is a pointer to a constant variable, using this, we cannot change the value of the variable that it points.
```cpp
const int* six;        // Since this is not a constant pointer, we are not forced to initialized this.
const int  seven = 7;
six  = &seven;
*six = 6;              // error: assignment of read-only location '* six'

int eight = 8;
six  = &eight;
*six = 6;              // error: assignment of read-only location '* six'
```

### Constant Pointer to Variable
We can use it to store an address that cannot be changed, meaning it cant point to any variable.
```cpp
int nine= 8;
int* const ten = &nine; // Constant pointer MUST be initialized.
*ten = 10;              // This is valid since it points to a non-constant variable.

int eleven = 11;
ten = &eleven;          //error: assignment of read-only variable 'ten'
```






