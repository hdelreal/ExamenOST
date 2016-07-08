#!/usr/bin/python

import calendar


for years in range(1950, 2050):
	for months in range (13):
		if months == 2:
			c = calendar.Calendar(calendar.SUNDAY)
			for number in c.itermonthdays(years, months):
				if number == 29:
					print years
