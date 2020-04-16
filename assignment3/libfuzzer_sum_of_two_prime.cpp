#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include "sum_of_two_prime.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, int Size) 
{
    if (Size <= 256 && Data[0] == 'q') {

    return 0; 

  }

  return 0;  // Non-zero return values are reserved for future use.
}
