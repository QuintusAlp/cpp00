SRCS = megaphone.cpp

CC = g++
CFLAGS = -Wall -Wextra -std=c++98
NAME = megaphone

OBJS = $(SRCS:.cpp=.o)

# Default rule to build the program
all: $(NAME)

# Rule to link object files into the NAME executable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS)

# Rule to compile source files into object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule to remove compiled files
clean:
	rm -f $(OBJS) $(NAME)
fclean: clean
	@${RM} ${NAME}
	
# Phony NAMEs (not associated with real files)
.PHONY: all clean