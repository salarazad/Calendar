void layoutweeks() {

	int x,y;
	for (y = 6; y<=78; y++) {
		for (x = 9; x<=115; x++) {
			if(x==10 || x==25 || x==40 || x==55 || x==70 || x==85 || x==100 || x==115) {
				printmid(x,y,"|");
			}
			else if (y==6 || y==9 || y==12 || y==15 || y==18 || y==21 || y==24 || y==27 || y==30 || y==33 || y==36 || y==39 || y==42 || y==45 || y==48 || y==51 || y==54 || y==57 || y==60 || y==63 || y==66 || y==69 || y==72 || y==75 || y==78) {
				printmid(x,y,"_");
			}
		}
	}
}




void weekdays() {
	int g;
	int h = 0;
	char days[7][10] = { "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" , "Sunday"};
	for (g=15; g<=115 ; g++) {
		if (g == 15 || g == 29 || g ==43 || g == 59 || g == 75 || g == 89 || g == 105) {
			printmid(g,4,days[h]);
			h++;
		}
	}
}




void dayhoursinweek() {
	int p;
	int q=0;
//	char days[]
	char hours[24][6] = { "1 AM", "2 AM", "3 AM", "4 AM", "5 AM", "6 AM", "7 AM", "8 AM", "9 AM", "10 AM", "11 PM", "12 AM", "1 PM", "2 PM", "3 PM", "4 PM", "5 PM", "6 PM", "7 PM", "8 PM", "9 PM", "10 PM", "11 PM", "12 PM" };
	for (p = 8; p<=78; p=p+3) {
		printmid(5,p,hours[q]);
		q++;
	}
}





void arrowsweeks() {
	printmid(115,4,"___");
	printmid(118,4,"\\");
	printmid(118,5,"\/");

	printmid(8,4,"___");
	printmid(6,4,"\/");
	printmid(6,5,"\\");
}


void deleteweek() {
	int t;
	for (t=0; t<115; t++) {
		if (t == 17 || t == 32 || t == 47 || t == 62 || t == 77 || t == 92 || t == 107) {
			printmid(t,5,"  ");
		}
	}
}


void deletemonth() {
	printmid(60,3,"          ");
}





void swipeweeks (int currentweek, int currentmonth, int action, int *newweek, int *newmonth) {
	char days[371][4] = { "31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5"};
	char months[12][10] = { "January" , "February" , "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December"};
	switch(currentweek) {
		case 0: switch (action) {
			case 77: *newweek=7; *newmonth=0; break;
		} break;
		case 7: switch (action) {
			case 77: *newweek=14; *newmonth=0; break;
			case 75: *newweek=0; *newmonth=0; break;
		} break;
		case 14: switch (action) {
			case 77: *newweek=21; *newmonth=0; break;
			case 75: *newweek=7; *newmonth=0; break;
		} break;
		case 21: switch (action) {
			case 77: *newweek=28; *newmonth=1; break;
			case 75: *newweek=14; *newmonth=0; break;
		} break;
		case 28: switch (action) {
			case 77: *newweek=35; *newmonth=1; break;
			case 75: *newweek=21; *newmonth=0; break;
		} break;
		case 35: switch (action) {
			case 77: *newweek=42; *newmonth=1; break;
			case 75: *newweek=28; *newmonth=1; break;
		} break;
		case 42: switch (action) {
			case 77: *newweek=49; *newmonth=1; break;
			case 75: *newweek=35; *newmonth=1; break;
		} break;
		case 49: switch (action) {
			case 77: *newweek=56; *newmonth=2; break;
			case 75: *newweek=42; *newmonth=1; break;
		} break;
		case 56: switch (action) {
			case 77: *newweek=63; *newmonth=2; break;
			case 75: *newweek=49; *newmonth=1; break;
		} break;
		case 63: switch (action) {
			case 77: *newweek=70; *newmonth=2; break;
			case 75: *newweek=56; *newmonth=2; break;
		} break;
		case 70: switch (action) {
			case 77: *newweek=77; *newmonth=2; break;
			case 75: *newweek=63; *newmonth=2; break;
		} break;
		case 77: switch (action) {
			case 77: *newweek=84; *newmonth=2; break;
			case 75: *newweek=70; *newmonth=2; break;
		} break;
		case 84: switch (action) {
			case 77: *newweek=91; *newmonth=3; break;
			case 75: *newweek=77; *newmonth=2; break;
		} break;
		case 91: switch (action) {
			case 77: *newweek=98; *newmonth=3; break;
			case 75: *newweek=84; *newmonth=2; break;
		} break;
		case 98: switch (action) {
			case 77: *newweek=105; *newmonth=3; break;
			case 75: *newweek=91; *newmonth=3; break;
		} break;
		case 105: switch (action) {
			case 77: *newweek=112; *newmonth=3; break;
			case 75: *newweek=98; *newmonth=3; break;
		} break;
		case 112: switch (action) {
			case 77: *newweek=119; *newmonth=4; break;
			case 75: *newweek=105; *newmonth=3; break;
		} break;
		case 119: switch (action) {
			case 77: *newweek=126; *newmonth=4; break;
			case 75: *newweek=112; *newmonth=3; break;
		} break;
		case 126: switch (action) {
			case 77: *newweek=133; *newmonth=4; break;
			case 75: *newweek=119; *newmonth=4; break;
		} break;
		case 133: switch (action) {
			case 77: *newweek=140; *newmonth=4; break;
			case 75: *newweek=126; *newmonth=4; break;
		} break;
		case 140: switch (action) {
			case 77: *newweek=147; *newmonth=5; break;
			case 75: *newweek=133; *newmonth=4; break;
		} break;
		case 147: switch (action) {
			case 77: *newweek=154; *newmonth=5; break;
			case 75: *newweek=140; *newmonth=4; break;
		} break;
		case 154: switch (action) {
			case 77: *newweek=161; *newmonth=5; break;
			case 75: *newweek=147; *newmonth=5; break;
		} break;
		case 161: switch (action) {
			case 77: *newweek=168; *newmonth=5; break;
			case 75: *newweek=154; *newmonth=5; break;
		} break;
		case 168: switch (action) {
			case 77: *newweek=175; *newmonth=5; break;
			case 75: *newweek=161; *newmonth=5; break;
		} break;
		case 175: switch (action) {
			case 77: *newweek=182; *newmonth=6; break;
			case 75: *newweek=168; *newmonth=5; break;
		} break;
		case 182: switch (action) {
			case 77: *newweek=189; *newmonth=6; break;
			case 75: *newweek=175; *newmonth=5; break;
		} break;
		case 189: switch (action) {
			case 77: *newweek=196; *newmonth=6; break;
			case 75: *newweek=182; *newmonth=6; break;
		} break;
		case 196: switch (action) {
			case 77: *newweek=203; *newmonth=6; break;
			case 75: *newweek=189; *newmonth=6; break;
		} break;
		case 203: switch (action) {
			case 77: *newweek=210; *newmonth=7; break;
			case 75: *newweek=196; *newmonth=6; break;
		} break;
		case 210: switch (action) {
			case 77: *newweek=217; *newmonth=7; break;
			case 75: *newweek=203; *newmonth=6; break;
		} break;
		case 217: switch (action) {
			case 77: *newweek=224; *newmonth=7; break;
			case 75: *newweek=210; *newmonth=7; break;
		} break;
		case 224: switch (action) {
			case 77: *newweek=231; *newmonth=7; break;
			case 75: *newweek=217; *newmonth=7; break;
		} break;
		case 231: switch (action) {
			case 77: *newweek=238; *newmonth=8; break;
			case 75: *newweek=224; *newmonth=7; break;
		} break;
		case 238: switch (action) {
			case 77: *newweek=245; *newmonth=8; break;
			case 75: *newweek=231; *newmonth=7; break;
		} break;
		case 245: switch (action) {
			case 77: *newweek=252; *newmonth=8; break;
			case 75: *newweek=238; *newmonth=8; break;
		} break;
		case 252: switch (action) {
			case 77: *newweek=259; *newmonth=8; break;
			case 75: *newweek=245; *newmonth=8; break;
		} break;
		case 259: switch (action) {
			case 77: *newweek=266; *newmonth=8; break;
			case 75: *newweek=252; *newmonth=8; break;
		} break;
		case 266: switch (action) {
			case 77: *newweek=273; *newmonth=9; break;
			case 75: *newweek=259; *newmonth=8; break;
		} break;
		case 273: switch (action) {
			case 77: *newweek=280; *newmonth=9; break;
			case 75: *newweek=266; *newmonth=8; break;
		} break;
		case 280: switch (action) {
			case 77: *newweek=287; *newmonth=9; break;
			case 75: *newweek=273; *newmonth=9; break;
		} break;
		case 287: switch (action) {
			case 77: *newweek=294; *newmonth=9; break;
			case 75: *newweek=280; *newmonth=9; break;
		} break;
		case 294: switch (action) {
			case 77: *newweek=301; *newmonth=10; break;
			case 75: *newweek=287; *newmonth=9; break;
		} break;
		case 301: switch (action) {
			case 77: *newweek=308; *newmonth=10; break;
			case 75: *newweek=294; *newmonth=9; break;
		} break;
		case 308: switch (action) {
			case 77: *newweek=315; *newmonth=10; break;
			case 75: *newweek=301; *newmonth=10; break;
		} break;
		case 315: switch (action) {
			case 77: *newweek=322; *newmonth=10; break;
			case 75: *newweek=308; *newmonth=10; break;
		} break;
		case 322: switch (action) {
			case 77: *newweek=329; *newmonth=11; break;
			case 75: *newweek=315; *newmonth=10; break;
		} break;
		case 329: switch (action) {
			case 77: *newweek=336; *newmonth=11; break;
			case 75: *newweek=322; *newmonth=10; break;
		} break;
		case 336: switch (action) {
			case 77: *newweek=343; *newmonth=11; break;
			case 75: *newweek=329; *newmonth=11; break;
		} break;
		case 343: switch (action) {
			case 77: *newweek=350; *newmonth=11; break;
			case 75: *newweek=336; *newmonth=11; break;
		} break;
		case 350: switch (action) {
			case 77: *newweek=357; *newmonth=11; break;
			case 75: *newweek=343; *newmonth=11; break;
		} break;
		case 357: switch (action) {
			case 77: *newweek=364; *newmonth=0; break;
			case 75: *newweek=350; *newmonth=11; break;
		} break;
		case 364: switch (action) {
			case 75: *newweek=357; *newmonth=11; break;
		} break;
	}
	int x;
	x = *newmonth;
	printmid(60,3,months[x]);
	int y;
	int z;
	z = *newweek;
	for (y=0; y<=115; y++) {
		if (y == 17 || y == 32 || y == 47 || y == 62 || y == 77 || y == 92 || y == 107) {
			printmid(y,5,days[z]);
			z++;
		}
	}
	
}
