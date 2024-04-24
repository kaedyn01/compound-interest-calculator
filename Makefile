make:
	gcc -Wall -Wextra -pedantic -Werror -lm -o compound-interest-calculator compound-interest-calculator.c

clean: 
	rm compound-interest-calculator
