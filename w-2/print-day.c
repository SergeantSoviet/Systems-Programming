#include <stdio.h>
#include <stdlib.h>

void print_day (int day_num);

int main (int argc, char *argv[1])
{

int day_num = atoi(argv[1]);

print_day (day_num);
}

void print_day(int day_num)
{

	switch (day_num)
		{
		case 1:
			printf ("Sunday\n");
			break;
		case 2:
			printf ("Monday\n");
			break;
		case 3:
			printf ("Tuesday\n");
			break;
		case 4:
			printf ("Wednesday\n");
			break;
		case 5:
			printf ("Thursday\n");
			break;
		case 6:
			printf ("Friday\n");
			break;
		case 7:
			printf ("Saturday\n");
		break;
	default:
		printf("invalid date number specified\n");
			};
}