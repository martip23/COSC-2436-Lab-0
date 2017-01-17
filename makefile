DIRS 	= lib src 

# tools used in this file
RM 		= rm -rf

# targets below ---------------
all:
		for dir in $(DIRS); do \
			($(MAKE) -C $$dir all); \
		done

#clean command
clean:
		for dir in $(DIRS); do \
			($(MAKE) -C $$dir clean); \
		done
		$(RM) build/*

#run the primary application
run:
		$(MAKE) -C src run

.PHONY: all clean run
