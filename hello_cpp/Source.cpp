#include "Header.h"

void print_num(int num)
{
	printf("%d \n", num);
}
void print_num(float num)
{
	printf("%f \n", num);
}
void print_num(double num)
{
	printf("%f \n", num);
}


float inverse_num(float f) {
	return 1 / f;
}

double inverse_num(double f) {
	return 1 / f;
}

int calcFinalGrade(int examGrade, int numHomeWorksGivenOnTime, int quizzGrade) {
	return examGrade + numHomeWorksGivenOnTime + quizzGrade;
}

int calcFinalGrade(int examGrade, int numHomeWorksGivenOnTime, int quizzGrade, float factor) {
	return calcFinalGrade(examGrade, numHomeWorksGivenOnTime, quizzGrade) + factor;
}