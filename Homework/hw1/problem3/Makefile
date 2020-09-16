CC=gcc
OBJ=hw1problem3.o
EXE=hw1problem3.exe

%.o: %.c 
		$(CC) -c -o $@ $<

$(EXE): $(OBJ)
		$(CC) -o $@ $^

.PHONY: clean

clean:
		/bin/rm -f $(OBJ) $(EXE)
