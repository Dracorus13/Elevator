 #include <stdio.h>
#include <string.h>

#define MAXFLOORS 15

typedef struct { 
	int currentFloor;
} elevator_t;


void setupElevator(elevator_t [], int);
void goToFloor(elevator_t *, int);
void printElevators(elevator_t [], int floor);

int main(void){
	int floor;
	elevator_t elevators[MAXFLOORS];

	printf("What Floor Would you Like to go to? The Current Floor is 0, The Top Floor is 15. ");
	scanf("%d", &floor);

	setupElevators(elevators, floor);

	return 0;
}

void setupElevator(elevator_t elevators[], int floor)
{
	int i;
	for(i = 0; i < floor; i ++){ 
		elevators[i].currentFloor = 1;
	}
}	



void goToFloor(elevator_t *elevator, int floor)
{
	if((*elevator).currentFloor < floor){ 
		elevator += floor; 
		if(elevator > 15){ 
			elevator = 15;
		}
		elevator= floor; 
	}
	else if(elevator->currentFloor > floor){
		if(elevator > 0){ 

			}
			else{
				elevator -= floor; 
			}
		}
		elevator->currentFloor = floor;
	}



void printElevators(elevator_t elevators[], int floor){
	int i;
	for(i = 0; i < floor; i ++){ 
		printf("Floor: %d\n",elevators[i].currentFloor);
	}
}

