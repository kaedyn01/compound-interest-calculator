test: make
	./cic 1000 4.3 1 1

make:
	gcc compound-interest-calculator.c -o cic -lm -Wall -Wextra -pedantic -Werror 

clean: 
	rm cic
