#include "queue.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct QueueElement {
	int value;
	struct QueueElement* next;
} QueueElement;

struct Queue {
	QueueElement* head;
	QueueElement* back;
};

int enqueue(Queue* queue, int value) {
	QueueElement* element = malloc(sizeof(QueueElement));
	if (element == NULL) {
		return -1;
	}
	element->value = value;
	element->next = queue->back;
	queue->back = element;
	return 0;
}

Queue* createQueue() {
	return (Queue*)calloc(1, sizeof(Queue));
}
