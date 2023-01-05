##
# @file Makefile
# @author YW0330
# @date 20223.01.06
# @brief 建置此專案的編譯規則之 Makefile
#
# 包括如何編譯成obj、a之規則

current_dir = $(notdir $(shell pwd))
# 暫存資料夾路徑
BUILD_DIR ?= ../../build/$(current_dir)
# 發布資料夾名稱
DIST_DIR ?= ../../dist
# source code 資料夾
SOURCE_DIR ?= ./lib

LIBSRC = $(wildcard *.cpp)
LIBOBJS = $(addprefix $(BUILD_DIR)/, $(patsubst %.cpp, %.o, $(LIBSRC)))

LIB = $(addprefix $(DIST_DIR)/lib, $(addsuffix .a, $(current_dir)))

default: $(LIBOBJS)
library: $(LIB)

CC := g++
CFLAG = -Os -Wall 
CFLAG += -I$(SOURCE_DIR)

# 建置單個模組的目標檔
$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAG) -c $< -o $@

# 建置單個模組的靜態函式庫
%.a: $(LIBOBJS)
	@mkdir -p $(DIST_DIR)
	@ar rcs $@ $^

# 建置整個專案的靜態函式庫
$(TARGET): $(OBJS)
	@mkdir -p $(DIST_DIR)
	@ar rcs $@ $^