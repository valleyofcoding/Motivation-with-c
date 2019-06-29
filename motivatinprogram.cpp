#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int day;
printf("Enter the day:\nPres 1 for Monday\nPres 2 for Tuesday\n");
printf("Pres 3 for Wednesday\nPres 4 for Thursday\nPres 5 for Friday\n");
printf("Pres 6 for Saturday\nPres 7 for Sunday\n: ");
scanf("%d", &day);

switch (day)
	{
	case 1: printf("After a good weekend, working should be easy."); break;
	case 2: printf("Monday passed, be relax."); break;
	case 3: printf("It is middle of the week,be positive, everything will be very good."); break;
	case 4: printf("It is almost Friday."); break;
	case 5: printf("You should make a good weekend plan."); break;
	case 6: printf("You deserve this perfect weekend."); break;
	case 7: printf("Sunday should come with a pause button :)"); break;
	default:
		printf("You doesn't enter correctly number of day...");
	}

	printf("\n");
	return 0;
}
