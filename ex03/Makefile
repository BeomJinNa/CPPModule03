#parameters====================================================================

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -Wshadow -std=c++98

NAME	= Now_it_s_weird
INCLUDE	=


#sources=======================================================================

SRCS	= main.cpp \
		  ClapTrap.cpp \
		  ScavTrap.cpp \
		  FragTrap.cpp \
		  DiamondTrap.cpp

OBJS	= $(SRCS:.cpp=.o)

TARGET_OBJS = $(OBJS)

#rules=========================================================================

.PHONY: all
all :
	make $(NAME)

$(NAME) : $(TARGET_OBJS)
	$(CXX) -o $@ $(TARGET_OBJS)

#const options=================================================================

%.o : %.c
	$(CXX) $(CXXFLAGS) -I$(INCLUDE) -c $< -o $@

.PHONY: clean
clean :
	rm -f $(OBJS)

.PHONY: fclean
fclean :
	make clean
	rm -f $(NAME)

.PHONY: re
re :
	make fclean
	make all
