minhalib.o: $(SRC_DIR)/funcoes1.cpp $(SRC_DIR)/funcoes2.cpp $(INC_DIR)/minhalib.h
	$(CC) $(CFLAGS) -c $(SRC_DIR)/funcoes1.cpp -o $(OBJ_DIR)/funcoes1.o
	$(CC) $(CFLAGS) -c $(SRC_DIR)/funcoes2.cpp -o $(OBJ_DIR)/funcoes2.o
	$(AR) rcs $(LIB_DIR)/$@ $(OBJ_DIR)/funcoes1.o $(OBJ_DIR)/funcoes2.o
	@echo "biblioteca estatica criada em ..."

minhalib.so: $(SRC_DIR)/funcoes1.cpp $(SRC_DIR)/funcoes2.cpp $(INC_DIR)/minhalib.h
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/funcoes1.cpp -o $(OBJ_DIR)/funcoes1.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/funcoes2.cpp -o $(OBJ_DIR)/funcoes2.o
	$(CC) -shared -fPIC -o $(LIB_DIR)/$@ $(OBJ_DIR)/funcoes1.o $(OBJ_DIR)/funcoes2.o
	@echo "biblioteca dinamica criada em"


prog_estatico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/minhalib.a -o $(OBJ_DIR)/$@
prog_dinamico:
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/minhalib.a -o $(OBJ_DIR)/$@
