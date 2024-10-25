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

int dequeue(Queue* queue) {
	Queue* tmp = queue->back;
	queue->back = queue->back->next;
}