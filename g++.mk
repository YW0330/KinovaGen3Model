##
# @file Makefile
# @author YW0330
# @date 2022.3.14
# @brief 建置各模組object file的Makefile

# 暫存資料夾路徑
BUILD_DIR := ../../build

LIBSRC = $(wildcard *.cpp)
LIBOBJ = $(addprefix $(BUILD_DIR)/, $(patsubst %.cpp, %.o, $(LIBSRC)))
LIBHEAD = $(wildcard *.h)

default: $(LIBOBJ)

CC = g++
INC_DIR = \
	-I./lib
CFLAG = -O1 -Wall $(INC_DIR)

$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAG) -c $< -o $@

