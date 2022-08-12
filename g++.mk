##
# @file Makefile
# @author YW0330
# @date 2022.3.14
# @brief 建置各模組object file的Makefile

# 暫存資料夾路徑
BUILD_DIR := ../../build
# source code 資料夾
SOURCE_DIR := ./lib

LIBSRC = $(wildcard *.cpp)
LIBOBJ = $(addprefix $(BUILD_DIR)/, $(patsubst %.cpp, %.o, $(LIBSRC)))

default: $(LIBOBJ)

CC = g++
INC_DIR = -I$(SOURCE_DIR) -I./lib
CFLAG = -O1 -Wall 

$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAG) -c $< -o $@ $(INC_DIR)

