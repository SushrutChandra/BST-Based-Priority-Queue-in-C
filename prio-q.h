#include "prio-q-datastructure.h"

void init(Prio_que *const prio_q);
unsigned int enqueue(Prio_que *const prio_q, const char new_element[],
                     unsigned int priority);
unsigned int is_empty(const Prio_que prio_q);
unsigned int size(const Prio_que prio_q);
char *peek(Prio_que prio_q);
char *dequeue(Prio_que *const prio_q);
char **get_all_elements(Prio_que prio_q);
