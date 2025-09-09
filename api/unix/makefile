# MSGAPI Makefile for macOS build

# Target library
TARGET=../unixapi.a

# Compiler and flags
CC=gcc
CFLAGS=-g -Wall
AR=ar
RANLIB=ranlib
SRC_DIR=..
VPATH=$(SRC_DIR)

# Object files
OBJS=1stchar.o msgapi.o cvtdate.o date2bin.o dosdate.o fexist.o flush.o \
     months.o parsenn.o qksort.o strftim.o stristr.o trail.o weekday.o \
     canlock.o api_jam.o api_hmb.o jamcrc32.o strlist.o api_sq.o api_sdm.o \
     common.o sqsdm.o unix.o

# Pattern rule: compile .c to .o
%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Build static library
$(TARGET): $(OBJS)
	$(AR) r $@ $(OBJS)
	$(RANLIB) $@

# Clean
.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)

