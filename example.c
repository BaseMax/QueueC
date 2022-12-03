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

int main(int argc, char** argv)
{
    // Create a queue
    Queue* queue = createQueue(5);

    // Enqueue elements
    enqueue(queue, 1);

    // Print the front and rear
    printf("Front: %d\n", getFront(queue));
    printf("Rear: %d\n", getRear(queue));

    enqueue(queue, 2);

    // Print the front and rear
    printf("Front: %d\n", getFront(queue));
    printf("Rear: %d\n", getRear(queue));

    enqueue(queue, 3);

    // Print the front and rear
    printf("Front: %d\n", getFront(queue));
    printf("Rear: %d\n", getRear(queue));

    enqueue(queue, 4);

    // Print the front and rear
    printf("Front: %d\n", getFront(queue));
    printf("Rear: %d\n", getRear(queue));

    enqueue(queue, 5);

    // Print the front and rear
    printf("Front: %d\n", getFront(queue));
    printf("Rear: %d\n", getRear(queue));

    // Check if the queue is full
    if (isFull(queue)) {
        printf("Queue is full!\n");
    } else {
        printf("Queue is not full!\n");
    }

    // Dequeue elements
    printf("Dequeue: %d\n", dequeue(queue));
    printf("Dequeue: %d\n", dequeue(queue));
    printf("Dequeue: %d\n", dequeue(queue));

    // Print the queue
    printQueue(queue);

    // Get the front element
    printf("Front: %d\n", getFront(queue));

    // Get the rear element
    printf("Rear: %d\n", getRear(queue));

    // Get the size of the queue
    printf("Size: %d\n", getSize(queue));

    // Destroy the queue
    destroyQueue(queue);

    return 0;
}
