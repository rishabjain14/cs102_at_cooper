CC=gcc
OBJ = hw1problem2quote.o
EXE = hw1problem2quote.exe
 

%.o: %.c
	$(CC) -c -o $@ $<

$(EXE): $(OBJ)
	$(CC) -o $@ $^

.PHONY: clean

clean: 
	/bin/rm -rf $(OBJ) $(EXE)


