#include <stdio.h>
#include <conio.h>
#include <winbgim.h>

#include <math.h>
int main ()
{
	initwindow(800,600);
	for(float x=0;x<720;x=0.5++)
	{
		float y = sin(x*3.14/180);
		putpixel(x,y+300,15);
	}
	getch();
	return 0 ;
}
