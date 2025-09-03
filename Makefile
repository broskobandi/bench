# Project 
PROJECT := bench

# Dirs
INC_INSTALL_DIR := /usr/local/include
DOC_DIR := doc
INC_DIR := include

# Files
INC := $(INC_DIR)/$(PROJECT).h

# Rules
.PHONY: all doc install uninstall

all: 

doc:
	doxygen

install: $(LIB_SO) $(LIB_A)
	cp $(INC) $(INC_INSTALL_DIR)/

uninstall:
	rm $(addprefix $(INC_INSTALL_DIR)/, $(notdir $(INC)))
