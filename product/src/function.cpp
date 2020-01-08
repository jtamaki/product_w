#include "calculator.h"
#include "function.h"

int add3(int x, int y, int z) { return add(add(x, y), z); }
int sub3(int x, int y, int z) { return sub(sub(x, y), z); }
int mul3(int x, int y, int z) { return mul(mul(x, y), z); }

