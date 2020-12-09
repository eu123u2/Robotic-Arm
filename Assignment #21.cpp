/*Ezigbo Ugochukwu 11/19/2020 Assignment #21 Determines absolute position of robotic arm*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	/*Declare variables*/
	float add_x, add_y, xend_position, yend_position;
	
	/*Initialize*/
	xend_position = -15;
	yend_position = 0;
	
	/*Get input*/
	while(1)
	{
		printf("Enter the value of change on the x axis:");
		scanf("%f", &add_x);
		printf("Enter the value of change on the y axis:");
		scanf("%f", &add_y);
		
		/*Calculate*/
		xend_position = xend_position + add_x;
		yend_position = yend_position + add_y;
		
		/*Error check*/
		if(pow(xend_position,2) + pow(yend_position,2) > 225 || pow(xend_position,2) + pow(yend_position,2) < 16  || (-15 < xend_position && xend_position < -14 && -1 < yend_position && yend_position < 1))
		{	
			printf("Error > robot cannot go outside of its range of motion");
			break;
		}
		else
			printf("Robot position: (%.0f,%.0f) \n", xend_position, yend_position);
	}
	/*Exit*/
	return 0;
}

/*Enter the value of change on the x axis:2
Enter the value of change on the y axis:-5
Robot position: (-13,-5)
Enter the value of change on the x axis:10
Enter the value of change on the y axis:8
Robot position: (-3,3)
Enter the value of change on the x axis:4
Enter the value of change on the y axis:-1
Error > robot cannot go outside of its range of motion*/
