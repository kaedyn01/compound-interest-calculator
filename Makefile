test: make
	./cic 1000 4.3 1 1

make:
	gcc -Wall -Wextra -pedantic -Werror -lm -o cic compound-interest-calculator.c

clean: 
	rm cic
