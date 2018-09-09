#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Anshul Birla's Code//

void calcAverage();
FILE*fp;
int main(void)
{
	int i;
	fp = fopen("AverageLab.txt", "w");
	for (i = 1; i <= 4; ++i)
	{
		calcAverage();
	}
	fclose(fp);
	return(0);
}

void calcAverage()
{
	int num;
	float average;
	int total = 0;
	int total_numbers = 1;
	printf("Enter your value. Enter -1 when you are done\n");
	scanf("%d", &num);
	if (num == -1)
	{
		fprintf(fp, "You entered no values, therefore there is no average\n");
	}
	if (num != -1)
	{
		fprintf(fp, "Your numbers were:");
		while (num != -1)
		{
			fprintf(fp, "%d ", num);
			total += num;
			printf("Enter your value. Enter -1 when you are done\n");
			scanf("%d", &num);
			total_numbers++;
		}
		total_numbers--;
		average = (float)total / (float)total_numbers;
		printf("The average is %.2f\n", average);
		fprintf(fp, "\nThe average is %.2f\n", average);
	}
}