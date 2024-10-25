#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct QueueElement {
	int value;
	QueueElement* next;
} QueueElement;

struct Queue {
	QueueElement* head;
	QueueElement* back;
};

void createQueue(Queue* queue) {
	queue->head = (Queue*)calloc(1, sizeof(Queue));
	queue->back = (Queue*)calloc(1, sizeof(Queue));
}
