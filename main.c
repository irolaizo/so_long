
#include <unistd.h>
#include <stdio.h>

int main (int contador, char **trailer)
{
	contador = 0;
	/* char	*box_one = "Hola";
	char	*box_two = "Iratxe";
	char	*box_three = "Como estas";
	char	*box_four = "Eres muy mona";
	char	*box_five = "Que maja eres, coño!";

	trailer[0] = box_one;
	trailer[1] = box_two;
	trailer[2] = box_three;
	trailer[3] = box_four;
	trailer[4] = box_five; */

	printf("%s\n", (trailer[3]));
	printf("%c\n", (trailer[3][0]));
}