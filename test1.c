#include <stdio.h>
#include <assert.h>
#include "prio-q.h"

/* CMSC 216
 * test 1
 *
 * Tests that a newly declared and initialized priority queue has no
 * elements and its size is 0.
 */

int main(void) {
  Prio_que prio_q;

  init(&prio_q);

  assert(is_empty(prio_q));
  assert(size(prio_q) == 0);

  printf("Every assertion succeeded resoundingly!\n");

  return 0;
}
