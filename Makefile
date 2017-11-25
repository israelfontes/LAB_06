
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
LIB_DIR=./lib

RM = rm -rf

AR = ar

CC = g++

CPPFLAGS = -Wall -pedantic -ansi -std=c++11

OBJS_E = $(LIB_DIR)/israel.a $(INC_DIR)/calcula.hpp $(SRC_DIR)/calcula.cpp $(SRC_DIR)/main.cpp

OBJS_D = $(LIB_DIR)/israel.so $(INC_DIR)/calcula.hpp $(SRC_DIR)/calcula.cpp $(SRC_DIR)/main.cpp

geometria_dinamica: clean dir $(OBJS_D)
	$(CC) $(CPPFLAGS) -lm -I$(INC_DIR) $(OBJS_D) -o $@

geometria_estatica: clean dir $(OBJS_E)
	$(CC) $(CPPFLAGS) -lm -I$(INC_DIR) $(SRC_DIR)/main.cpp $(INC_DIR)/calcula.hpp $(SRC_DIR)/calcula.cpp $(LIB_DIR)/israel.a -o $@



$(LIB_DIR)/israel.a: $(SRC_DIR)/israel.cpp $(INC_DIR)/israel.hpp
	$(CC) $(CPPFLAGS) -lm -I$(INC_DIR) -c $(SRC_DIR)/israel.cpp -o $(OBJ_DIR)/israel.o 
	$(AR) rcs $(LIB_DIR)/israel.a $(OBJ_DIR)/israel.o

$(LIB_DIR)/israel.so: $(SRC_DIR)/israel.cpp $(INC_DIR)/israel.hpp
	$(CC) $(CFLAGS) -fPIC -lm -I$(INC_DIR) -c $(SRC_DIR)/israel.cpp -o $(OBJ_DIR)/israel.o
	$(CC) -shared -fPIC -o $(LIB_DIR)/israel.so



$(OBJ_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CC) -c $(CPPFLAGS) -lm -I$(INC_DIR)/ -o $@ $<


doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

dir:
	mkdir -p bin build doc lib

clean: dir
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(DOC_DIR)/*
	$(RM) $(LIB_DIR)/*