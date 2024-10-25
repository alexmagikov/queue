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
	Queue* tmp = queue->head;
	int value = queue->head->value;
	queue->head = queue->head->next;
	return value;
}

void deleteQueue(Queue* queue) {
	while (queue->head != NULL) {
		dequeue(queue);
    }
}