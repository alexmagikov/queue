#pragma once

typedef struct Queue Queue; 

int enqueue(Queue* queue, int value);

Queue* createQueue();