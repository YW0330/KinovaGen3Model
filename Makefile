##
# @file Makefile
# @author YW0330
# @date 2022.3.14
# @brief 建置Kinova Gen3靜態函式庫的Makefile

# Static Library 名稱
TARGET = KinovaGen3Model

# 暫存資料夾名稱
BUILD_DIR := build
# cpp所屬資料夾
SOURCE_DIR := src

DIR := $(shell find ./lib/* -maxdepth 1 -type d)
LIBOBJ = $(wildcard $(BUILD_DIR)/*.o)

.PHONY: all

all:
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

