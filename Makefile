
SRC += test/Test.cpp \
       implementation/ArrayList.cpp \
      #implementation/LinkedList.cpp

OBJ = "run.o"

all: $(SRC)
	g++ -o  $(OBJ) $^

