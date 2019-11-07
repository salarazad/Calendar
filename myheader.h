#include <windows.h>

// color automation
#define BLACK			0
#define BLUE			1
#define GREEN			2
#define CYAN			3
#define RED				4
#define MAGENTA			5
#define BROWN			6
#define LIGHTGRAY		7
#define DARKGRAY		8
#define LIGHTBLUE		9
#define LIGHTGREEN		10
#define LIGHTCYAN		11
#define LIGHTRED		12
#define LIGHTMAGENTA	13
#define YELLOW			14
#define WHITE			15


// write a string to a coordination
void printmid(double x, double y, char text[]) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	printf("%s\n", text);
}

// write a character to a coordination
void printcharmid(double x, double y, char text) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	printf("%c\n", text);
}

// cursor move to coordination
void cursor(double x, double y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}



// flashing banner
void flashing () {		
	int f;
	for (f=0; f<=2; f++) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
		printmid(50,3,"Let the battle begin");
		Sleep(400);
		system("cls");
		Sleep(400);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
	}
}


void SetTextBold()
{
    // hi-white on black 
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),
                              FOREGROUND_RED |
                                FOREGROUND_GREEN |
                                FOREGROUND_BLUE |
                                FOREGROUND_INTENSITY );
}



// change console background color
//	system("COLOR 5");                            // change the text font color to pinnk (5)
//	printf("Hello,World!\n");
//	system("COLOR FC");                           // double degit is for changing the text font and the background color
//	printf("Goodbuy Moon\n");
//	system("COLOR 7");




// change font to BOLD
//	HANDLE outcon = GetStdHandle(STD_OUTPUT_HANDLE);
//	CONSOLE_FONT_INFOEX font;
//	font.dwFontSize.X=7;
//	font.dwFontSize.Y=12;
//	SetCurrentConsoleFontEx(outcon, false, &font);
//	SetConsoleTextAttribute(outcon, 0x0C);



// delete a character from a string and return the new string
char* delchar(char *tiles2, char rmvchr) {
	char *tiles;
	tiles = malloc(sizeof(char)*10);
//	tiles = malloc(sizeof(tiles)*10);
	strcpy(tiles,tiles2);
	char *m;
	m = strchr(tiles,rmvchr);
	if (m){
		int position = m - tiles;
		strcpy(&tiles[position], &tiles[position+1]);
		return tiles;
	}
	else return tiles2;
	return 0;
}



// another function for deleting a character from a string, but its not complete, doesn't work
//char *delchrinstr(int rmv) {
//	
//char tiles[]="abcdefghi";
//int toBeRemoved=rmv;                     // rmv=2 , digit of character to remove
//memmove(&tiles[toBeRemoved],&tiles[toBeRemoved+1],strlen(tiles)-toBeRemoved);
//puts(tiles);
//
////return tiles;
//}




// code for typing on the keyboard, and seeing the type on the screen
//int ch;
//while (ch != 0x1B) {
//	ch = getch();           // or _getch() can also be used
//	if (ch == 224) {
//		switch (ch = getch()) {
//		case 80: printf("Down"); break;
//		case 72: printf("UP"); break;			
//		case 77: printf("RIGHT"); break;			
//		case 75: printf("LEFT"); break;	
//		}
//	}
//	else {
//		printf("%c", ch);
//	}
//}