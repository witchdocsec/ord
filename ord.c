#include <ncurses.h>
#include <stdlib.h>
int showord(){
	int c = getch();
	if (c != 27){
		clear();
		move(10,10);
		printw("%d",c);
		return 0;
	} else {
		return 1;
}
}
int main(){
	initscr();
	move(10,10);
	int stped = 0;
	while(!stped){
		stped = showord();
	}
	endwin();
}