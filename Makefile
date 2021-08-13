# Makefile template is inspired from this question: https://stackoverflow.com/questions/26028834/

CXX = g++
CXXFLAGS = -std=c++14 -Wall -fmax-errors=5
LINKFLAGS := -lSDL2

.PHONY: all

SRC_PATH := ./src/
OBJ_PATH := ./obj/
INC_PATH := ./include/

TARGET = ./bin/main.exe

OBJ1 := A.o \
        B.o \
        kontroller.o \
        main.o
OBJ := $(patsubst %,$(OBJ_PATH)%,$(OBJ1))

all: $(TARGET)
	@echo [INFO] Finished building [$(TARGET)]

$(TARGET): $(OBJ)
	@echo [INFO] Creating Binary Executable [$(TARGET)]
	@$(CXX) -o $@ $^ $(LINKFLAGS)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp
	@echo [CXX] $<
	@$(CXX) $(CXXFLAGS) -o $@ -c $< -I $(INC_PATH)