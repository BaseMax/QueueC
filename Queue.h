#ifndef _QUEUE_H_
#define _QUEUE_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

typedef struct node {
    int* data;
    int size;
    int count;
    int front;
} Queue;

#endif

