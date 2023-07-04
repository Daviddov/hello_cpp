#pragma once
#include <stdio.h>

void print_num(int num);

void print_num(float num);

void print_num(double num);


float inverse_num(float f); 

double inverse_num(double f);

int calcFinalGrade(int examGrade, int numHomeWorksGivenOnTime, int quizzGrade);
int calcFinalGrade(int examGrade, int numHomeWorksGivenOnTime, int quizzGrade, float factor);