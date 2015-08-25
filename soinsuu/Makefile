#Sample make

#build resource
PROGRAM = exec
OBJS = soinsuu01.o

#Build parameter
CC = gcc 
CFLAGS = -Wall -O2 
LOADLIBES =

$(PROGRAM): $(OBJS)
	$(CC) $(CFLAGS) -o $(PROGRAM) $^

#Clean command
.PHONY: clean
clean:
	rm -f $(OBJS) *~ *.bak