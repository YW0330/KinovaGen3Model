##
# @file Makefile
# @author YW0330
# @date 2023.01.06
# @brief 建置 Kinova Gen3 靜態函式庫的 Makefile

# 需要獨立建置的資料夾
MODULE_IGNORED_DIR ?= kinova_FK_axisAngle

# Static Library 名稱
LIBARY_NAME ?= KinovaGen3Model

# 暫存資料夾名稱
BUILD_DIR ?= ./build
# source code 資料夾
SOURCE_DIR ?= ./lib
# 發布資料夾名稱
DIST_DIR ?= ./dist


MODULE_IGNORED = $(addprefix $(SOURCE_DIR)/,$(MODULE_IGNORED_DIR))
DIR = $(shell find $(SOURCE_DIR)/* -maxdepth 1 -type d)
MODULES_EXCLUDE = $(filter $(MODULE_IGNORED), $(DIR))
MODULES = $(filter-out $(MODULE_IGNORED), $(DIR))

FIND_OBJS = $(wildcard $(BUILD_DIR)/$(dir)/*.o)
OBJS = $(foreach dir, $(notdir $(MODULES)), $(FIND_OBJS))
TARGET = $(DIST_DIR)/lib$(LIBARY_NAME).a

default: clean
	@make deps -s
	@make $(TARGET) -s
	@echo '$(notdir $(TARGET)) is done.'

all: clean
	@$(foreach dir, $(DIR), echo '===== Building static library for $(notdir $(dir)) =====' && make library -s -C $(dir) &&) echo 'All static libraries done!'

exclude: 
	@$(foreach dir, $(MODULES_EXCLUDE), echo '===== Building static library for $(notdir $(dir)) =====' && make library -s -C $(dir) &&) echo 'Exclude packages static libraries done!'

deps:
	@$(foreach dir, $(MODULES), echo '===== Building obj file for $(notdir $(dir)) =====' && make -s -C $(dir) &&) echo 'All modules done!'

clean:
	@rm -rf $(BUILD_DIR) $(DIST_DIR)

.PHONY: all deps exclude clean

include g++.mk