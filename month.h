
void monthlayout() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BLUE);
	int h,j;
	for (h=30; h<=100; h++) {
		for (j=7; j<=25; j++) {
			if ((h==30 && j>=8) || (h==40 && j>=8) || (h==50 && j>=8) || (h==60 && j>=8) || (h==70 && j>=8) || (h==80 && j>=8) || (h==90 && j>=8) || (h==100) && j>=8) {
				printmid(h,j,"|");
			}
			else if ((j==7 && h>=31 && h<=99) || j==10 || j==13 || j==16 || j==19 || j==22 || j==25) {
				printmid(h,j,"_");
			}
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),GREEN);
	char monthsarray[7][10] = {"Sun","Mon","Tues","Wed","Thur","Fri","Sat"};                    //2D array, as an array of strings, 7 is 7 strings, 10 is length of each string
	int x;
	int z = 0;
	for (x=34; x<=94; x++) {
		if (x==34 || x==43 || x==54 || x==63 || x==74 || x==84 || x==94) {
			printmid(x,6,monthsarray[z]);
			z++;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
//	printmid(70,4,"Year");
//	printmid(76,4,"Month");
//	printmid(83,4,"Week");
//	printmid(89,4,"Day");
	printmid(70,4,"Year -- Month -- Week -- Day");
	printmid(70,5,"----------------------------");
}


void january() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),RED);
	printmid(40,4,"January");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
		
	char janlist[42][6] = {"31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10"};
	int k,l;
	int p = 0;
	for (l=9; l<=24; l=l+3) {
		for (k=35; k<=95; k=k+10) {
			printmid(k,l,janlist[p]);
			p++;
		}
	}
}


void february() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),RED);
	printmid(40,4,"February");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
	
	char feblist[42][4] = {"28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","1","2","3","4","5","6","7","8","9","10"};
	int k,l;
	int p = 0;
	for (l=9; l<=24; l=l+3) {
		for (k=35; k<=95; k=k+10) {
			printmid(k,l,feblist[p]);
			p++;
		}
	}
}


void march() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),RED);
	printmid(40,4,"March");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
		
	char marlist[42][4] = {"25","26","27","28","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7"};
	int k,l;
	int p = 0;
	for (l=9; l<=24; l=l+3) {
		for (k=35; k<=95; k=k+10) {
			printmid(k,l,marlist[p]);
			p++;
		}
	}
}


void april() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),RED);
	printmid(40,4,"April");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
		
	char aprlist[42][4] = {"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12"};
	int k,l;
	int p = 0;
	for (l=9; l<=24; l=l+3) {
		for (k=35; k<=95; k=k+10) {
			printmid(k,l,aprlist[p]);
			p++;
		}
	}
}


void may() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),RED);
	printmid(40,4,"May");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
		
	char maylist[42][4] = {"29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9"};
	int k,l;
	int p = 0;
	for (l=9; l<=24; l=l+3) {
		for (k=35; k<=95; k=k+10) {
			printmid(k,l,maylist[p]);
			p++;
		}
	}
}


void june() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),RED);
	printmid(40,4,"June");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
		
	char junlist[42][4] = {"27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7"};
	int k,l;
	int p = 0;
	for (l=9; l<=24; l=l+3) {
		for (k=35; k<=95; k=k+10) {
			printmid(k,l,junlist[p]);
			p++;
		}
	}
}


void july() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),RED);
	printmid(40,4,"July");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
		
	char jullist[42][4] = {"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11"};
	int k,l;
	int p = 0;
	for (l=9; l<=24; l=l+3) {
		for (k=35; k<=95; k=k+10) {
			printmid(k,l,jullist[p]);
			p++;
		}
	}
}


void august() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),RED);
	printmid(40,4,"August");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
		
	char auglist[42][4] = {"29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8"};
	int k,l;
	int p = 0;
	for (l=9; l<=24; l=l+3) {
		for (k=35; k<=95; k=k+10) {
			printmid(k,l,auglist[p]);
			p++;
		}
	}
}


void september() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),RED);
	printmid(40,4,"September");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
		
	char seplist[42][4] = {"26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6"};
	int k,l;
	int p = 0;
	for (l=9; l<=24; l=l+3) {
		for (k=35; k<=95; k=k+10) {
			printmid(k,l,seplist[p]);
			p++;
		}
	}
}


void october() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),RED);
	printmid(40,4,"October");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
		
	char octlist[42][4] = {"30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10"};
	int k,l;
	int p = 0;
	for (l=9; l<=24; l=l+3) {
		for (k=35; k<=95; k=k+10) {
			printmid(k,l,octlist[p]);
			p++;
		}
	}
}


void november() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),RED);
	printmid(40,4,"November");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
		
	char novlist[42][4] = {"28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8"};
	int k,l;
	int p = 0;
	for (l=9; l<=24; l=l+3) {
		for (k=35; k<=95; k=k+10) {
			printmid(k,l,novlist[p]);
			p++;
		}
	}
}


void december() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),RED);
	printmid(40,4,"December");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),WHITE);
		
	char declist[42][4] = {"25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5"};
	int k,l;
	int p = 0;
	for (l=9; l<=24; l=l+3) {
		for (k=35; k<=95; k=k+10) {
			printmid(k,l,declist[p]);
			p++;
		}
	}
}


//draw the right and left arrows for swiping
void arrowsmonths() {
	printmid(110,15,"___");
	printmid(113,15,"\\");
	printmid(113,16,"\/");

	printmid(18,15,"___");
	printmid(17,15,"\/");
	printmid(17,16,"\\");
}


//deleting the content before swiping to the other month
void deletemonths() {
	printmid(40,4,"                     ");
	int r, t;
	for (t=9; t<=24; t=t+3) {
		for (r=35; r<=95; r=r+10) {
			printmid(r,t,"  ");
		}
	}
}


// swiping effect between the months, after getting the arrow key input
void swipemonths(int currentmonth, int action, int *newcurrentmonth) {
	switch (currentmonth) {
		case 0: switch (action) {               // january
			case 77: february(); *newcurrentmonth=1; break;
		} break;
		case 1: switch (action) {               // february
			case 77: march(); *newcurrentmonth=2; break;
			case 75: january(); *newcurrentmonth=0; break;
		} break;
		case 2: switch (action) {               // march
			case 77: april(); *newcurrentmonth=3; break;
			case 75: february(); *newcurrentmonth=1; break;
		} break;
		case 3: switch (action) {               // april
			case 77: may(); *newcurrentmonth=4; break;
			case 75: march(); *newcurrentmonth=2; break;
		} break;
		case 4: switch (action) {               // may
			case 77: june(); *newcurrentmonth=5; break;
			case 75: april(); *newcurrentmonth=3; break;
		} break;
		case 5: switch (action) {               // june
			case 77: july(); *newcurrentmonth=6; break;
			case 75: may(); *newcurrentmonth=4; break;
		} break;
		case 6: switch (action) {               // july
			case 77: august(); *newcurrentmonth=7; break;
			case 75: june(); *newcurrentmonth=5; break;
		} break;
		case 7: switch (action) {               // august
			case 77: september(); *newcurrentmonth=8; break;
			case 75: july(); *newcurrentmonth=6; break;
		} break;
		case 8: switch (action) {               // september
			case 77: october(); *newcurrentmonth=9; break;
			case 75: august(); *newcurrentmonth=7; break;
		} break;
		case 9: switch (action) {               // october
			case 77: november(); *newcurrentmonth=10; break;
			case 75: september(); *newcurrentmonth=8; break;
		} break;
		case 10: switch (action) {               // november
			case 77: december(); *newcurrentmonth=11; break;
			case 75: october(); *newcurrentmonth=9; break;
		} break;
		case 11: switch (action) {               // december
			case 75: november(); *newcurrentmonth=10; break;
		} break;
	}
}