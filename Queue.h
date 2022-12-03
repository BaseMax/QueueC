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

/**
 * @brief Create a Queue object
 * @return Queue* 
 */
Queue* createQueue(int size);

/**
 * @brief Destroy the Queue object
 * @param queue 
 */
void destroyQueue(Queue* queue);

/**
 * @brief Check if the queue is empty
 * @param queue 
 * @return true 
 * @return false 
 */
bool isEmpty(Queue* queue);

/**
 * @brief Check if the queue is full
 * @param queue 
 * @return true 
 * @return false 
 */
bool isFull(Queue* queue);

/**
 * @brief Enqueue an element to the queue
 * @param queue 
 * @param element 
 */
void enqueue(Queue* queue, int element);

/**
 * @brief Dequeue an element from the queue
 * @param queue 
 * @return int 
 */
int dequeue(Queue* queue);

/**
 * @brief Get the Front object
 * @param queue 
 * @return int 
 */
int getFront(Queue* queue);

/**
 * @brief Get the Rear object
 * @param queue 
 * @return int 
 */
int getRear(Queue* queue);

/**
 * @brief Get the Size object
 * @param queue 
 * @return int 
 */
int getSize(Queue* queue);

#endif

