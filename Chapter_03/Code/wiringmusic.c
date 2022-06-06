#include <wiringPi.h>
#include <softTone.h>

#define SPKR 	6 	/* GPIO25 */
#define TOTAL 	32 	/* 학교종의 전체 계이름의 수 */

int notes[] = { 	/* 학교종을 연주하기 위한 계이름 */
	391, 391, 440, 440, 391, 391, 329.63, 329.63, \
	391, 391, 329.63, 329.63, 293.66, 293.66, 293.66, 0, \
	391, 391, 440, 440, 391, 391, 329.63, 329.63, \
	391, 329.63, 293.66, 329.63, 261.63, 261.63, 261.63, 0
};

int musicPlay(){
	int i;
	softToneCreate(SPKR);

	for (i = 0; i < TOTAL; ++i){
		softToneWrite(SPKR, notes[i]);
		delay(280);
	}

	return 0;
}

int main()
{
	wiringPiSetup();
	musicPlay();
	return 0;
}
