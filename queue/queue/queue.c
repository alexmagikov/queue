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

void enqueue(Queue* queue, int value) {
	QueueElement* element = malloc(sizeof(QueueElement));
	element->value = value;
	element->next = queue->back;
	queue->back = element;
}
