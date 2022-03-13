##
# @file Makefile
# @author YW0330
# @date 2022.3.13
# @brief 建置Kinova Gen3靜態函式庫的Makefile

# Static Library 名稱
TARGET = KinovaGen3Model

# 暫存資料夾名稱
BUILD_DIR := build
# cpp所屬資料夾
SOURCE_DIR := src

# 添加搜索路徑
VPATH = src

LIBSRC = $(wildcard $(SOURCE_DIR)/*.cpp)
LIBOBJ = $(addprefix $(BUILD_DIR)/, $(patsubst %.cpp, %.o, $(notdir $(LIBSRC))))

CC = g++
INC_DIR = -I./include
CFLAG = -O1 -Wall $(INC_DIR)

$(TARGET).a: $(LIBOBJ)
	@ar rcs $@ $^

$(BUILD_DIR)/%.o: %.cpp
	@mkdir -p $(BUILD_DIR)
	@$(CC) $(CFLAG) -c $< -o $@

.PHONY: clean
clean:
	@rm -rf $(BUILD_DIR) $(TARGET).a