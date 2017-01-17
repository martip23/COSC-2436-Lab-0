# Makefile to build libraries
LIBNAME = 	lab0

#source files
FILES 	= $(wildcard *.cpp)

#generated files
OBJS 	= $(FILES:.cpp=.o)

#tools we use
CXX 	= g++
AR 		= ar
RM 		= rm -f

# header files live here
INCDIR 	= ../include

# targets follow
all: 	lib$(LIBNAME).a

clean:
		$(RM) $(OBJS) lib$(LIBNAME).a

lib$(LIBNAME).a: 	$(OBJS)
	$(AR) -rcs $@ $^

# implicit rules
%.o: 	%.cpp
	$(CXX) -c -I $(INCDIR) $< -o $@

#include dependency file
