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
    return queue->count == queue->size;
}

/**
 * @brief Enqueue an element to the queue
 * @param queue 
 * @param element 
 */
void enqueue(Queue* queue, int element)
{
    if (isFull(queue))
{
        printf("Queue is full!\n");
        return;
    }
    int rear = (queue->front + queue->count) % queue->size;
    queue->data[rear] = element;
    queue->count++;
}

/**
 * @brief Dequeue an element from the queue
 * @param queue 
 * @return int 
 */
int dequeue(Queue* queue)
{
    if (isEmpty(queue))
{
        printf("Queue is empty!\n");
        return -1;
    }
    int element = queue->data[queue->front];
    queue->front = (queue->front + 1) % queue->size;
    queue->count--;
    return element;
}

/**
 * @brief Get the Front object
 * @param queue 
 * @return int 
 */
int getFront(Queue* queue)
{
    if (isEmpty(queue))
{
        printf("Queue is empty!\n");
        return -1;
    }
    return queue->data[queue->front];
}

/**
 * @brief Get the Rear object
 * @param queue 
 * @return int 
 */
int getRear(Queue* queue)
{
    if (isEmpty(queue))
{
        printf("Queue is empty!\n");
        return -1;
    }
    int rear = (queue->front + queue->count - 1) % queue->size;
    return queue->data[rear];
}

/**
 * @brief Get the Size object
 * @param queue 
 * @return int 
 */
int getSize(Queue* queue)
{
    return queue->count;
}

int main(int argc, char** argv)
{
    // Create a queue
    Queue* queue = createQueue(5);

    // Enqueue elements
    enqueue(queue, 1);
    enqueue(queue, 2);
    enqueue(queue, 3);
    enqueue(queue, 4);
    enqueue(queue, 5);

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
