#include<stdio.h>
void printSensorData(void *ptr,char type){
	if(type=='f'){
		printf("Temperature=%.2f Celsius\n",*(float *)ptr);
	}
	else if (type=='i')
    {
        if(*(int *)ptr==1)
            printf("Motion Detected\n");
        else if(*(int *)ptr==0)
            printf("No Motion\n");
        else
            printf("Invalid motion sensor value\n");
    }
    else if(type=='c')
    {
        if(*(char *)ptr=='O')
            printf("Door Open\n");
        else if(*(char *)ptr=='C')
            printf("Door Closed\n");
        else
            printf("Invalid door sensor value\n");
    }
    else
    {
        printf("Invalid data type\n");
    }
}
int main()
{
    float temperature;
    int motion;
    char door;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    printf("Enter motion status (1 = Detected, 0 = Not Detected): ");
    scanf("%d", &motion);

    printf("Enter door status (O = Open, C = Closed): ");
    scanf(" %c", &door);

    printf("\n--- Smart Home Sensor Data ---\n");

    printSensorData(&temperature, 'f');
    printSensorData(&motion, 'i');
    printSensorData(&door, 'c');

    return 0;
}
