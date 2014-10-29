# Makefile for Midterm I project

CC = clang
CFLAGS = -Wall -O0 -g
LFLAGS = -O0 -g
LIBS = -lm

main1: main1.o pi_leibniz.o
	${CC} $(LFLAGS) -o main1 main1.o pi_leibniz.o -lm

main1.o pi_leibniz.o: pi_funs.h

main2: main2.o pi_bbp.o
	${CC} $(LFLAGS) -o main2 main2.o pi_bbp.o -lm

main2.o pi_bbp.o: pi_funs.h

main3: main3.o pi_leibniz.o pi_bbp.o
	${CC} $(LFLAGS) -o main3 main3.o pi_leibniz.o pi_bbp.o -lm

main3.o pi_leibniz.o pi_bbp.o: pi_funs.h

clean:
	rm -f *.o *~

veryclean: clean
	rm -f main1 main2 main3
