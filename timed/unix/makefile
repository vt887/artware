# timEd makefile for UNIX build (GNU make compatible)

TARGET = ../timedunx

# Compiler and flags
CC = gcc
RM = rm -f
CFLAGS = -Wfatal-errors -m64 -fstack-protector-all -W -Wall -g -I../../api -I../util -funsigned-char
MSGAPI = ../../api/unixapi.a
AR=ar
RANLIB=ranlib
SRC_DIR = ..
VPATH = $(SRC_DIR)

OBJS=areatags.o attach.o bmg.o checkcc.o choose.o select.o shel2dos.o \
  showhdr.o showinfo.o showmail.o getmsg.o globals.o header.o help.o \
  idlekeyunix.o input.o list.o lock.o maint.o marklist.o memunix.o message.o \
  cleanidx.o clock.o config.o copymsg.o dirlist.o edit.o pickone.o \
  print.o printer.o quotos2.o readarea.o repedit.o reply.o request.o \
  errorrpt.o fido.o find.o getbody.o getfmt.o timed.o tosslog.o \
  txtbuild.o unrec.o nodeglue.o working.o wrap.o videounix.o \
  scrnutilunix.o picklist.o markchn.o macro.o charset.o filter.o v7.o fd.o \
  nodelist.o nodebrow.o private.o fidonode.o fidouser.o patmat.o

# Pattern rule: compile .c → .o
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Pattern rule for utils subdirectory
$(SRC_DIR)/utils/%.o: $(SRC_DIR)/util/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

# Link target
$(TARGET): $(OBJS) $(MSGAPI)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(MSGAPI) -lncurses

# Clean
.PHONY: clean
clean:
	rm -f $(OBJS) $(TARGET)
