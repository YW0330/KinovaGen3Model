##
# @file Makefile
# @author YW0330
# @date 2022.3.14
# @brief 建置各模組object file的Makefile


current_dir = $(notdir $(shell pwd))
# 暫存資料夾路徑
BUILD_DIR := ../../build/$(current_dir)
# source code 資料夾
SOURCE_DIR := ./lib

LIBSRC = $(wildcard *.cpp)
LIBOBJ = $(addprefix $(BUILD_DIR)/, $(patsubst %.cpp, %.o, $(LIBSRC)))

default: $(LIBOBJ)
	
CC = g++
CFLAG = -Os -Wall 
CFLAG += -I$(SOURCE_DIR)

$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAG) -c $^ -o $@

