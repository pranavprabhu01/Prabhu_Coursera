#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# Make file that supports both host and target(ARM).
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      <FILE>.o-Builds <FILE>.o object file
#      <FILE>.i-Generates the preprocessed output
#	<FILE>.asm-Generates assembly output
#
#	compile-all:Compiles all files,doesn't build
#          build:Compile all object files and links into executables
#          clean:Removes all generated files
# Platform Overrides:
#     CPU-ARM Cortex M-4
#     ARCH-ARM Architecture(thumb)
#     SPECS-Specs file to give the linker(nosys.specs)
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
PLATFORM = 

# Architectures Specific Flags
LINKER_FILE = 
CPU = 
ARCH = 
SPECS = 

# Compiler Flags and Defines
CC = 
LD = 
LDFLAGS = 
CFLAGS = 
CPPFLAGs = 

