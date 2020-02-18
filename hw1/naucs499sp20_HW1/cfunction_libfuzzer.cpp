#include <stddef.h>
#include <stdint.h>

#include "cfunction.h"

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *Data, int Size) {
  if (Size >= 64) {
    cfunction(Size);
  }
  return 0;  // Non-zero return values are reserved for future use.
}
