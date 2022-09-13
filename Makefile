##
# @file Makefile
# @author YW0330
# @date 2022.3.14
# @brief 建置 Kinova Gen3 靜態函式庫的 Makefile

# Static Library 名稱
LIBARY_NAME ?= KinovaGen3Model

# 暫存資料夾名稱
BUILD_DIR := ./build
# source code 資料夾
SOURCE_DIR := ./lib

DIR := $(shell find $(SOURCE_DIR)/* -maxdepth 1 -type d)
FIND_OBJS = $(wildcard $(BUILD_DIR)/$(dir)/*.o)
LIBOBJ = $(foreach dir, $(notdir $(DIR)), $(FIND_OBJS))
TARGET = lib$(LIBARY_NAME)

.PHONY: all
all: clean
	@mkdir -p $(BUILD_DIR)
	@make deps -s
	@make $(TARGET).a -s
	@echo '$(TARGET).a is done.'

deps:
	@$(foreach dir, $(DIR), echo '===== Building obj file for $(notdir $(dir)) =====' && make -s -C $(dir) &&) echo 'All modules done!'

$(TARGET).a: $(LIBOBJ)
	@ar rcs $@ $^

.PHONY: clean
clean:
	@rm -rf $(BUILD_DIR) $(TARGET).a