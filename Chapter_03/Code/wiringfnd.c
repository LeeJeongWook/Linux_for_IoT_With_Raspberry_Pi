#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>

int fndControl(int num)
{
	int i;
	int gpiopins[4] = {4, 1, 16, 15};
	int number[10][4] = { {0,0,0,0}, 	/* 0 */
		    			  {0,0,0,1}, 	/* 1 */
			  			  {0,0,1,0}, 	/* 2 */
			   			  {0,0,1,1}, 	/* 3 */
			  			  {0,1,0,0}, 	/* 4 */
						  {0,1,0,1}, 	/* 5 */
						  {0,1,1,0}, 	/* 6 */
			  			  {0,1,1,1}, 	/* 7 */
			  			  {1,0,0,0}, 	/* 8 */
			 			  {1,0,0,1} }; 	/* 9 */
	for (i = 0; i < 4; i++){
		pinMode(gpiuopins[i], OUTPUT);
	}

	for (i = 0; i < 4; i++){
		digitalWrite(gpiopins[i], number[num][i]?HIGH:LOW);
	}
	getchar(); //숫자 표시 대기

