#include "queue.h"
#include <stdio.h>
void main(void) {
	Queue* queue = createQueue();
	enqueue(queue, 1);
	enqueue(queue, 2);
	int result1 = dequeue(queue);
	int result2 = dequeue(queue);
	printf("%d %d", result1, result2);
}
