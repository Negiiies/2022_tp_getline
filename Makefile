# E89 Pedagogical & Technical Lab
# project:     2022_tp_getline
# created on:  2022-12-09 - 09:58 +0100
# 1st author:  dylan.le - dylan.le
# description: Building the projet

# E89 Pedagogical & Technical Lab
# project:     2022_rev
# created on:  2022-11-22 - 11:19 +0100
# 1st author:  dylan.le - dylan.le
# description: Makefile

NAME	=	getline.a

NAME_TEST = 	test.out

SRCS	=	src/split_inplace.c		\
		src/strdupcat.c			\
		src/strlen.c			\
		src/loop_read_until.c		\
		src/stu_strdup.c		\
		src/stu_strchr.c

SRCS_TEST =	test/test_split_inplace.c	\
		test/test_strdupcat.c		\
		test/test_loop_read_until.c

OBJS		=	$(SRCS:.c=.o)

OBJS_TEST	=	$(SRCS_TEST:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME_TEST)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o ar rc $(NAME)

$(NAME_TEST): $(OBJS) $(OBJS_TEST)
	$(CC) -o $(NAME_TEST) $(OBJS) $(OBJS_TEST) -lcriterion

normale: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)

t:
	make
	./test.out

d:
	rm src/*.o src/*.c~ test/*.o test/*.c~ include/*.h~ *~

save:
	git add src/ test/ include/ Makefile
	git commit -m "Sauvegarde"
	git push --force

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re

# Theses rules do not directly map to a specific fi
