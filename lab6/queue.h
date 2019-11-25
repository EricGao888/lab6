#ifndef QUEUE_H
#define QUEUE_H


#include <stdlib.h>


struct circular_queue {
    unsigned char *buf;
    size_t capacity, size;
    size_t head, tail;
};


struct circular_queue * allocate(size_t);

void destroy(struct circular_queue *);

int enqueue(struct circular_queue *, unsigned char);

int dequeue(struct circular_queue *, unsigned char *);


#endif //QUEUE_H
