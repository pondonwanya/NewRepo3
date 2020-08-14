#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	printf("All students are welcome. \n\n");
	printf("Please fill out the homework score , midterm score and final exam scores respectively \n\n");
	float homeWork, midTerm, fiNal, scorehm, scoremt, scorefn, toTal;
	scanf("%f %f %f", &homeWork, &midTerm, &fiNal);
	scorehm = (homeWork * 10) / 100;
	scoremt = (midTerm * 40) / 100;
	scorefn = (fiNal * 50) / 100;
	printf(" \n Your homework score is %.2f \n Accounted for 10 percent = %.2f\n\n", homeWork, scorehm);
	printf("Your midterm  score is %.2f \n Accounted for 40 percent = %.2f\n\n", midTerm, scoremt);
	printf("Your final    score is %.2f \n Accounted for 50 percent = %.2f\n\n", fiNal, scorefn);
	toTal = scorehm + scoremt + scorefn;
	printf("Your total score is %.2f \n", toTal);
	if (toTal >= 90 && toTal <= 100) {
		printf("You got a grade A \n");
	}
	else if (toTal >= 85 && toTal < 90) {
		printf("You got a grade B+\n");
	}
	else if (toTal >= 80 && toTal < 85) {
		printf("You got a grade B\n");
	}
	else if (toTal >= 70 && toTal < 80) {
		printf("You got a grade C+\n");
	}
	else if (toTal >= 60 && toTal < 70) {
		printf("You got a grade C\n");
	}
	else if (toTal >= 55 && toTal < 60) {
		printf("You got a grade D+\n");
	}
	else if (toTal >= 50 && toTal < 55) {
		printf("You got a grade D\n");
	}
	else if (toTal < 50) {
		printf("You got a grade F\n");
	}
	printf("\n Good luck to everyone");
}