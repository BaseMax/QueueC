# Queue C

This is a simple queue implementation in C using an array. The queue is implemented as a normal queue.

## Functions

- `Queue* createQueue(int size)`: Create a queue with a given size.
- `void destroyQueue(Queue* queue)`: Destroy the queue object.
- `bool isEmpty(Queue* queue)`: Check if the queue is empty
- `bool isFull(Queue* queue)`: Check if the queue is full
- `void enqueue(Queue* queue, int element)`: Enqueue an element to the queue
- `int dequeue(Queue* queue)`: Dequeue an element from the queue
- `int getFront(Queue* queue)`: Get the front element of the queue.
- `int getRear(Queue* queue)`: Get the rear element of the queue.
- `int getSize(Queue* queue)`: Get the size of the queue

## Usage

```c
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
```

## License

This project is licensed under the GPL-3.0 License - see the [LICENSE](LICENSE) file for details.

© Copyright Max Base, 2022
