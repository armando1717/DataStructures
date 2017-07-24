
SRC += Test.cpp \
       implementation/ArrayList.cpp \
       implementation/LinkedList.cpp

OBJ = "Test.o"

all: $(SRC)
	g++ -o  $(OBJ) $^

