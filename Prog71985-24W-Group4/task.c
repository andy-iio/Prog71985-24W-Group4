#define _CRT_SECURE_NO_WARNINGS
#include "task.h"
#include <stdbool.h>
#include <stdio.h>
#include <string.h> //for strcpy and memcpy

TASK CreateTask(char name[MAXNAME], int priorityLevel, char content[MAXCONTENT], STATE state) {//, time_t time) {
	TASK t;
	strcpy(t.name, name);
	t.priorityLevel = priorityLevel;
	strcpy(t.content, content);
	t.state = state;
	//t.time = time;
	return t;
}

void PrintTask(TASK t) {
	printf("Task: %s\n", t.name);
	printf("Priority Level: %d\n", t.priorityLevel);
	if (strcmp(t.content, "")) { //check whether content is empty or not
		printf("Details: %s\n", t.content);
	}
	//we can print more task properties as we create them (state, time, etc)
}

TASK CopyTask(TASK src) {
	return CreateTask(src.name, src.priorityLevel, src.content);
}

bool CompareTask(TASK lhs, TASK rhs) {
	return (strcmp(lhs.name, rhs.name) && strcmp(lhs.content, rhs.content));
}

void DisposeTask(TASK t) {
	// nothing
}
