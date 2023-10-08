 CC=g++
CFLAGS=-c -pedantic-errors -g
LDFLAGS=
SOURCES=test_assignment.cpp arrays.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=test_assignment

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXECUTABLE)
