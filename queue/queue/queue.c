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
	if (queue->head == NULL && queue->back == NULL) {
		queue->back = element;
		queue->head = element;
	}
	else {
		element->value = value;
		element->next = queue->back;
		queue->back = element;
	}
	return 0;
}

int dequeue(Queue* queue) {
	QueueElement* tmp = queue->head;
	int value = queue->head->value;
	if (queue->head->next == NULL) {
		queue->head = NULL;
		queue->back = NULL;
	}
	else {
		queue->head = queue->head->next;
	}
	free(tmp);
	return value;
}

void deleteQueue(Queue* queue) {
	while (queue->head != NULL) {
		dequeue(queue);
	}
}

Queue* createQueue() {
	return (Queue*)calloc(1, sizeof(Queue));
}


