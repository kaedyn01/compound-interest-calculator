make:
	gcc -Wall -Wextra -pedantic -Werror -lm -o cic compound-interest-calculator.c

clean: 
	rm cic
