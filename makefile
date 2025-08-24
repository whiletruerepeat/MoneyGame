# Compilers
CXX = g++
CXX_WIN = x86_64-w64-mingw32-g++

# Flags
CXXFLAGS = -Wall
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin

# Files
LINUX_OBJS = $(OBJ_DIR)/testjoueur.o $(OBJ_DIR)/player.o
WIN_OBJS   = $(OBJ_DIR)/testjoueur_win.o $(OBJ_DIR)/player_win.o

# Targets
all: testlinux testwindows

# Linux build
testlinux: $(LINUX_OBJS)
	$(CXX) $(LINUX_OBJS) -o $(BIN_DIR)/test

$(OBJ_DIR)/testjoueur.o: $(SRC_DIR)/test.cpp 
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/player.o: $(SRC_DIR)/player.cpp $(SRC_DIR)/player.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Windows build
testwindows: $(WIN_OBJS)
	$(CXX_WIN) $(WIN_OBJS) -o $(BIN_DIR)/test.exe

$(OBJ_DIR)/testjoueur_win.o: $(SRC_DIR)/test.cpp 
	$(CXX_WIN) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/player_win.o: $(SRC_DIR)/player.cpp $(SRC_DIR)/player.h
	$(CXX_WIN) $(CXXFLAGS) -c $< -o $@

# Clean
clean:
	rm -f $(OBJ_DIR)/*.o $(BIN_DIR)/test $(BIN_DIR)/test.exe