
# the name of the target program
TARGET = result
# TARGET1 = client

# other source files and the associated object files (this can be blank)
 SRC =  main.c search.c sort.c test.c
#  SRC1 =  menu.c
 OBJ = $(SRC:.c=.o)
#  OBJ1 = $(SRC1:.c=.o)

# special include directories
INCLUDE = -I.

# special libraries (none for now)
LIB = 
# LIB	= -pthread

# select the compiler and flags
CC = /usr/bin/gcc
CFLAGS = -g

# .SUFFIXES: .c

# specify how to compile the .c files
.c.o:
	$(CC) $(CFLAGS) $(INCLUDE) -c $<

# if you type 'make' without arguments, this is the default
build: $(TARGET) #$(TARGET1)

# specify how to compile the target

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(INCLUDE)  $(OBJ) $(LIB) -o $(TARGET)
# $(TARGET1): $(OBJ1)
# 	$(CC) $(CFLAGS) $(INCLUDE)  $(OBJ1) $(LIB) -o $(TARGET1)
# remove binaries
clean:
	rm -f $(OBJ) $(TARGET) #$(OBJ1) $(TARGET1)
# echo "clean all"
<<<<<<< HEAD

=======
	
>>>>>>> fe9e42563cef1a0c4b6bce0b68cd21bec1949c8e
# remove binaries and other junk
clobber:
	make clean
	rm -f core *~
