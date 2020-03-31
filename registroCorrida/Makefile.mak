CC     = gcc
RM     = rm -f
OBJS   = registro.o \
         main.o \
         Sem\ T�tulo1.o

LIBS   =
CFLAGS =

.PHONY: RegistroCorrida.exe clean clean-after

all: RegistroCorrida.exe

clean:
	$(RM) $(OBJS) RegistroCorrida.exe

clean-after:
	$(RM) $(OBJS)

RegistroCorrida.exe: $(OBJS)
	$(CC)  -o $@ $(OBJS) $(LIBS)

registro.o: registro.c registro.h
	$(CC)  -c $< -o $@ $(CFLAGS)

main.o: main.c registro.h
	$(CC)  -c $< -o $@ $(CFLAGS)

Sem\ T�tulo1.o: Sem\ T�tulo1.c
	$(CC)  -c '$<' -o '$@' $(CFLAGS)

