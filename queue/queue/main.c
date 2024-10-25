#include "queue.h"
#include <stdio.h>
void main(void) {
	Queue* queue = createQueue();
	enqueue(queue, 1);
	enqueue(queue, 2);
	printf("%d %d", dequeue(queue), dequeue(queue));
}
