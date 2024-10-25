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
	element->next = NULL; 

	if (queue->head == NULL && queue->back == NULL) {
		queue->head = element;
		queue->back = element;
	}
	else {
		queue->back->next = element; 
		queue->back = element; 
	}
	return 0;
}

int dequeue(Queue* queue) {
	if (queue->head == NULL) {
		return -1; 
	}
	QueueElement* tmp = queue->head;
	int value = tmp->value; 
	queue->head = queue->head->next;
	if (queue->head == NULL) {
		queue->back = NULL; 
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


