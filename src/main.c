#include "config.h"

#if IS_ENABLED(CONFIG_BUILD_USERSPACE)
#include <stdio.h>

int main() {
  printf("Hello world! UwU Fox here!\n");
}
#else
void main() {
  // We're in kernel UwU
  while (1)
    ;
}
#endif
