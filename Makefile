CFLAGS=-Wall -g

CLEAN_FILES := ex1 ex3 ex4 ex5 ex6 \
				ex7 ex8 ex9 ex10 ex11 ex12 \
				ex13 ex14

clean:
	rm -f $(CLEAN_FILES)

all:
	make $(CLEAN_FILES) 

