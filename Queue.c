/**
 * 
 * @file Queue.c
 * @author Max Base (maxbasecode@gmail.com)
 * @brief Queue data structure
 * @version 0.1
 * @date 2022-12-03
 * @copyright Copyright (c) 2022
 * 
 */

#include "Queue.h"

// typedef struct node {
//     int* data;
//     int size;
//     int count;
//     int front;
// } Queue;

/**
 * @brief Create a Queue object
 * @return Queue* 
 */
Queue* createQueue(int size)
{
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->data = (int*)malloc(sizeof(int) * size);
    queue->size = size;
    queue->count = 0;
    queue->front = 0;
    return queue;
}

/**
 * @brief Destroy the Queue object
 * @param queue 
 */
void destroyQueue(Queue* queue)
{
    free(queue->data);
    free(queue);
}


/**
 * @brief Check if the queue is empty
 * @param queue 
 * @return true 
 * @return false 
 */
bool isEmpty(Queue* queue)
{
    return queue->count == 0;
}

/**
 * @brief Check if the queue is full
 * @param queue 
 * @return true 
 * @return false 
 */
bool isFull(Queue* queue)
{
    return queue->count >= queue->size;
}

/**
 * @brief Enqueue an element to the queue
 * @param queue 
 * @param element 
 */
void enqueue(Queue* queue, int element)
{
    if (isFull(queue)) {
        printf("Queue is full!\n");
        return;
    }
    queue->data[queue->count] = element;
    queue->count++;
}

/**
 * @brief Dequeue an element from the queue
 * @param queue 
 * @return int 
 */
int dequeue(Queue* queue)
{
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    int element = queue->data[queue->front];
    queue->front++;
    return element;
}

/**
 * @brief Get the Front object
 * @param queue 
 * @return int 
 */
int getFront(Queue* queue)
{
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue->data[queue->front];
}

/**
 * @brief Print the queue
 * @param queue 
 * @return char*
 */
char* printQueue(Queue* queue)
{
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return NULL;
    }
    char* str = (char*)malloc(sizeof(char) * 100);
    int rear = (queue->front + queue->count) % queue->size;
    for (int i = queue->front; i < rear; i++) {
        sprintf(str, "%s%d ", str, queue->data[i]);
    }
    return str;
}

/**
 * @brief Get the Rear object
 * @param queue 
 * @return int 
 */
int getRear(Queue* queue)
{
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue->data[queue->count - 1];
}

/**
 * @brief Get the Size object
 * @param queue 
 * @return int 
 */
int getSize(Queue* queue)
{
    return queue->count - queue->front;
}
