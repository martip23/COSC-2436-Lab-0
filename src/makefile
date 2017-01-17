# Makefile for primary application

TARGET =	lab0

#Tools to be used
CXX 	= g++
RM 		= rm -f

#define src files
FILES = $(wildcard *.cpp)

#Libraries we will need
LIBDIR 	= ../lib
LIB 	= lab0
LIBC 	= -L$(LIBDIR) -l$(LIB)

# generated files (cleaned)
OBJS 	= $(FILES:.cpp=.o)

#header files live here
INCDIR = ../include

# targets follow
all: 	$(TARGET)

$(TARGET): 	$(OBJS)
		$(CXX) -o $(TARGET) $(OBJS) $(LIBC)

clean:
		$(RM) $(TARGET) $(OBJS)

run:	$(TARGET)
		./$(TARGET)

#implicit rules
%.o:	%.cpp
		$(CXX) -c -I$(INCDIR) $< -o $@
