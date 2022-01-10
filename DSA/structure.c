#include <stdio.h>

struct date{
	 int month,day,year;
};

struct time{
	int hour,mins,secs;
};

struct date_time{
	struct date sdate;
	struct time stime;
};

static struct date_time today={{2,11,1985},{2,45,30}};

int main(){

	printf("%d",today.sdate.month);
	printf("%d",today.stime.hour);
	return 0;
}
