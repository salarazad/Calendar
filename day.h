
void layoutday() {
	int p, q;
	for (q=6; q<=78; q++) {
		for (p=5; p<=118; p++) {
			if (q==6 || q==9 || q==12 || q==15 || q==18 || q==21 || q==24 || q==27 || q==30 || q==33 || q==36 || q==39 || q==42 || q==45 || q==48 || q==51 || q==54 || q==57 || q==60 || q==63 || q==66 || q==69 || q==72 || q==75 || q==78) {
				printmid(p,q,"_");
			}
			if (p==7) {
				printmid(p,q,"|");
			}
		}
	}
}



void dayhoursinday() {
	int p;
	int q=0;
//	char days[]
	char hours[24][6] = { "1 AM", "2 AM", "3 AM", "4 AM", "5 AM", "6 AM", "7 AM", "8 AM", "9 AM", "10 AM", "11 AM", "12 AM", "1 PM", "2 PM", "3 PM", "4 PM", "5 PM", "6 PM", "7 PM", "8 PM", "9 PM", "10 PM", "11 PM", "12 PM" };
	for (p = 8; p<=78; p=p+3) {
		printmid(2,p,hours[q]);
		q++;
	}
}



void deletedateinday() {
	printmid(74,4,"        ");
}



void deletedayinday() {
	printmid(21,4,"          ");
}


void deletemonthinday() {
	printmid(62,4,"          ");
}


void swipedays(int currentdateinday,int currentdayinday,int currentmonthinday,int actioninday,int *newdateinday,int *newdayinday,int *newmonthinday) {
	char dates[371][4] = { "1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31" };
	char days[7][10] = { "Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday" };
	char months[12][10] = { "January" , "February" , "March" , "April" , "May" , "June" , "July" , "August" , "September" , "October" , "November" , "December"};
	
//	struct months {
//		char monthname[10];
//		int numdays;
//	};
//	struct months month0;
//	struct months month1;
//	struct months month2;
//	struct months month3;
//	struct months month4;
//	struct months month5;
//	struct months month6;
//	struct months month7;
//	struct months month8;
//	struct months month9;
//	struct months month10;
//	struct months month11;
//	
//	strcpy(month0.monthname,"January");
//	month0.numdays = 31;
//	strcpy(month0.monthname,"February");
//	month1.numdays = 28;
//	strcpy(month0.monthname,"March");
//	month2.numdays = 31;
//	strcpy(month0.monthname,"April");
//	month3.numdays = 30;
//	strcpy(month0.monthname,"May");
//	month4.numdays = 31;
//	strcpy(month0.monthname,"June");
//	month5.numdays = 30;
//	strcpy(month0.monthname,"July");
//	month6.numdays = 31;
//	strcpy(month0.monthname,"August");
//	month7.numdays = 31;
//	strcpy(month0.monthname,"September");
//	month8.numdays = 30;
//	strcpy(month0.monthname,"October");
//	month9.numdays = 31;
//	strcpy(month0.monthname,"November");
//	month10.numdays = 30;
//	strcpy(month0.monthname,"December");
//	month11.numdays = 30;


	
//	switch(currentdateinday) {
//		case 0: switch(actioninday) {
//					case 77: *newdateinday=currentdateinday+1; *newdayinday=currentdayinday+1; *newmonthinday=currentmonthinday; break;
//				}
//	}
	
	
//	switch(actioninday) {
//		case 77: *newdateinday=currentdateinday+1; *newmonthinday=currentmonthinday; break; 
//		case 75: *newdateinday=currentdateinday-1; *newmonthinday=currentmonthinday; break; 
//	}
	
	
	// days swiping
	switch(currentdateinday) {
		case 0: switch (actioninday) {
			case 77: *newdateinday=currentdateinday+1; *newmonthinday=currentmonthinday; break; 
		}
		case 1 ... 364: switch(actioninday) {
			case 77: *newdateinday=currentdateinday+1; *newmonthinday=currentmonthinday; break; 
			case 75: *newdateinday=currentdateinday-1; *newmonthinday=currentmonthinday; break; 
		}
		case 365: switch(actioninday) {
			case 75: *newdateinday=currentdateinday-1; *newmonthinday=currentmonthinday; break; 
		}
	}
	
	
	// dates swiping
	switch(currentdateinday) {
		case 0: switch (actioninday) {
			case 77: *newdayinday=currentdayinday+1; break;
		} break;
		case 1 ... 5: switch (actioninday) {
			case 77: *newdayinday=currentdayinday+1; break;
			case 75: *newdayinday=currentdayinday-1; break;
		} break;
		case 6: switch (actioninday) {
			case 77: *newdayinday=0; break;
			case 75: *newdayinday=currentdayinday-1; break;
		} break;
	}
	
	//month swiping
	switch(currentmonthinday) {
		case 0: switch (currentdateinday) {
			case 0: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday; break;
			} break;
			case 1 ... 29: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
			case 30: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday+1; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
		} break;
		case 1: switch (currentdateinday) {
			case 31 ... 57: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
			case 58: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday+1; break;
				case 75: *newmonthinday = currentmonthinday; break;
			}
		} break;
		case 2: switch (currentdateinday) {
			case 59 ... 88: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
			case 89: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday+1; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
		} break;
		case 3: switch (currentdateinday) {
			case 90 ... 118: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
			case 119: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday+1; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
		} break;
		case 4: switch (currentdateinday) {
			case 120 ... 149: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
			case 150: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday+1; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
		} break;
		case 5: switch (currentdateinday) {
			case 151 ... 179: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
			case 180: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday+1; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
		} break;
		case 6: switch (currentdateinday) {
			case 181 ... 210: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
			case 211: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday+1; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
		} break;
		case 7: switch (currentdateinday) {
			case 212 ... 241: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
			case 242: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday+1; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
		} break;
		case 8: switch (currentdateinday) {
			case 243 ... 271: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
			case 272: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday+1; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
		} break;
		case 9: switch (currentdateinday) {
			case 273 ... 302: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
			case 303: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday+1; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
		} break;
		case 10: switch (currentdateinday) {
			case 304 ... 332: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
			case 333: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday+1; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
		} break;
		case 11: switch (currentdateinday) {
			case 334 ... 363: switch (actioninday) {
				case 77: *newmonthinday = currentmonthinday; break;
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
			case 364: switch (actioninday) {
				case 75: *newmonthinday = currentmonthinday; break;
			} break;
		} break;
	}
	
	
//	*newdateinday=currentdateinday+1;
//	*newdayinday=currentdayinday+1;
//	*newmonthinday=currentmonthinday;
	
	int z,x,y;
	z = *newdateinday;
	x = *newdayinday;
	y = *newmonthinday;
	printmid(74,4,dates[z]);
	printmid(21,4,days[x]);
	printmid(62,4,months[y]);
//	switch(currentdates) {
//		switch (action) {
//			case
//		}
//	}
}