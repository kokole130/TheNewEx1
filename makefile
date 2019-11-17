gcc = CC
CFLAG = -I.
MATHS = myMath.h
OBJ = basicMath.o power.o

all: mains maind $(OBJ) mymaths mymathd
	$(CC) *.o -L. -lmyMath -o Ex1

mains: main.c mymaths
	$(CC) -c -o main.o main.c $(CFLAG)

mymaths: $(OBJ) 
	ar rcs libmyMath.a $(OBJ)

maind: main.c mymathd
	$(CC) -c -o main.o main.c $(CFLAG)

mymathd: $(OBJ) 
	$(CC) -shared $(OBJ) -o libmyMath.so


power.o: power.c $(MATHS)
	$(CC) -c power.c -o $@

basicMath.o: basicMath.c $(MATHS)
	$(CC) -c basicMath.c -o $@

clean: 
	rm *.o *.so *.a Ex1
