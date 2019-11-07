#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <myheader.h>
//#include <term.h>
#include <stdlib.h>
#include <year.h>
#include <month.h>
#include <week.h>
#include <day.h>



void year() {
	janyear();
	febyear();
	maryear();
	apryear();
	mayyear();
	junyear();
	julyear();
	augyear();
	sepyear();
	octyear();
	novyear();
	decyear();
}



void month() {
	enum days {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
	enum months {Jan, Feb, Mar, Apr, Ma, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

	monthlayout();
	january();
	arrowsmonths();

	enum months month;
	month = Jan;
	int action;                              // for swiping right and left between the months
	int currentmonth = month;
	int newcurrentmonth = 0;                     // initiating the newcurrentmonth, setting it to nothing will hinder the software
	while (action != 0x1B) {
		action = getch();
		deletemonths();
		swipemonths(currentmonth,action,&newcurrentmonth);
		currentmonth = newcurrentmonth;                             // updating the current month
	}
}


void week() {
	layoutweeks();
	dayhoursinweek();
	weekdays();
	arrowsweeks();
	char days[270][4] = { "31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5"};
	char months[12][10] = { "January" , "February" , "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December"};
	int currentmonth = 0;
	int newmonth = 0;
	int x;
	x = currentmonth;
	int currentweek = 0;
	int newweek = 0;
	int z = currentweek;
	printmid(53,3,"<<<               >>>");
	printmid(60,3,months[x]);
	int y;
	for (y=0; y<=115; y++) {
		if (y == 17 || y == 32 || y == 47 || y == 62 || y == 77 || y == 92 || y == 107) {
			printmid(y,5,days[z]);
			z++;
		}
	}
	int action;
	while (action != 0x1B) {
		action = getch();
		if
		deleteweek();
		deletemonth();
		swipeweeks(currentweek, currentmonth, action, &newweek, &newmonth);
		currentweek = newweek;
	}
}



void day() {
	layoutday();
	dayhoursinday();
	char dates[371][4] = { "1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31" };
	char days[7][10] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	char months[12][10] = { "January" , "February" , "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December"};
	int currentdateinday = 0;
	int newdateinday = 0;
	int currentdayinday = 0;
	int newdayinday = 0;
	int currentmonthinday = 0;
	int newmonthinday = 0;
	int z,x,y;
	z = currentdateinday;
	x = currentdayinday;
	y = currentmonthinday;
	printmid(12,4,"~~  Day:         ~~");
	printmid(21,4,days[x]);
	printmid(48,4,"<<<    Month:                  >>>");
	printmid(62,4,months[y]);
	printmid(70,4," - ");
	printmid(74,4,dates[z]);
	printmid(98,4,"## Year: 2019 ##");
	int actioninday;
	while (actioninday != 0x1B) {
		actioninday = getch();
		deletedateinday();
		deletedayinday();
		deletemonthinday();
		swipedays(currentdateinday,currentdayinday,currentmonthinday,actioninday,&newdateinday,&newdayinday,&newmonthinday);
		currentdateinday = newdateinday;
		currentdayinday = newdayinday;
		currentmonthinday = newmonthinday;
	}
}




int main(int argc, char **argv) {
	printmid(35,1," ------ Reinventing Calenders for 2019 and beyond ------ ");
	
	
	
	char layout;	
	printmid(40,12,"Year(y) or Month(m) or Week(w) or Day(d)");
	layout=getchar();
	switch(layout) {
		case 'y': printmid(40,12,"                                                   ");year();break;
		case 'm': printmid(40,12,"                                                   ");month();break;
		case 'w': printmid(40,12,"                                                   ");week();break;
		case 'd': printmid(40,12,"                                                   ");day();break;
	}
	
	
	
	cursor(10,29);
	
	
	
		
	return 0;
}