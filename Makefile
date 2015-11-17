CFLAGS=-Wall -g

CLEAN_FILES := ex1 ex3 ex4 ex5 ex6 ex7 ex8 ex9

clean:
	rm -f $(CLEAN_FILES)

all:
	make $(CLEAN_FILES) 

