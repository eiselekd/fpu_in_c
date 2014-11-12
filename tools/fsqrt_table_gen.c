#include "float.h"
#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <fenv.h>
#include <limits.h>
#include <assert.h>

extern uint64_t fsqrt_table (uint16_t);

int main (void)
{
    fesetround (FE_TOWARDZERO);
    for (int t = 0;t < 1 << 10;t++) {
	print_binary_n(fsqrt_table (t),46);
    }
    
}

