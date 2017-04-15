#include <stdio.h>
#include <wiringPi.h>

#define	WRITE_PIN 0

//wiringPiにてGPIOをコントロール

int main(int argc, char *argv[])
{
	int	i;

	//GPIOのイニシャライズ
	if(wiringPiSetup() == -1){
		printf("Initialization of wiringPi failed.\n");
		return -1;
	}
	pinMode(WRITE_PIN, OUTPUT);

	//500msごとに交互に点灯
	for(i = 0; i < 10; i++){
		digitalWrite(WRITE_PIN, i % 2);
		delay(500);
	}

	return 0;
}
