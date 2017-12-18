#include <stdio.h>

int main()
{
	int sundays = 0;
	int year;
	int day = 3;
	int i;
	for(year = 1901; year < 2001; year++)
	{
		
		for(i = 1; i <=31; i++)
		{
			if(day == 1 && i == 1)
				sundays++;
			day++;
			if(day == 8)
				day = 1;
		}
		if(year % 4 == 0)
			for(i = 1; i <= 29; i++)
			{
				if(day == 1 && i == 1)
					sundays++;
				day++;
				if(day == 8)
					day = 1;
			}
		else
			for(i = 1; i <= 28; i++)
			{
				if(day == 1 && i == 1)
					sundays++;
				day++;
				if(day == 8)
					day = 1;
			}
		for(i = 1; i <=31; i++)
		{
			if(day == 1 && i == 1)
				sundays++;
			day++;
			if(day == 8)
				day = 1;
		}
		for(i = 1; i <=30; i++)
		{
			if(day == 1 && i == 1)
				sundays++;
			day++;
			if(day == 8)
				day = 1;
		}
		for(i = 1; i <=31; i++)
		{
			if(day == 1 && i == 1)
				sundays++;
			day++;
			if(day == 8)
				day = 1;
		}
		for(i = 1; i <=30; i++)
		{
			if(day == 1 && i == 1)
				sundays++;
			day++;
			if(day == 8)
				day = 1;
		}
		for(i = 1; i <=31; i++)
		{
			if(day == 1 && i == 1)
				sundays++;
			day++;
			if(day == 8)
				day = 1;
		}
		for(i = 1; i <=31; i++)
		{
			if(day == 1 && i == 1)
				sundays++;
			day++;
			if(day == 8)
				day = 1;
		}
		for(i = 1; i <=30; i++)
		{
			if(day == 1 && i == 1)
				sundays++;
			day++;
			if(day == 8)
				day = 1;
		}
		for(i = 1; i <=31; i++)
		{
			if(day == 1 && i == 1)
				sundays++;
			day++;
			if(day == 8)
				day = 1;
		}
		for(i = 1; i <=30; i++)
		{
			if(day == 1 && i == 1)
				sundays++;
			day++;
			if(day == 8)
				day = 1;
		}
		for(i = 1; i <=31; i++)
		{
			if(day == 1 && i == 1)
				sundays++;
			day++;
			if(day == 8)
				day = 1;
		}
	}
	printf("result = %d\n", sundays);
}










