# **************************************************************************** #
#                                   CONFIG                                     #
# **************************************************************************** #

NAME        = Animal
CXX         = c++
CXXFLAGS    = -Wall -Wextra -Werror -std=c++98
RM          = rm -f

SRC_DIR     = src
OBJ_DIR     = objs

SRC         = $(SRC_DIR)/main.cpp \
			$(SRC_DIR)/Animal.cpp \
			$(SRC_DIR)/Dog.cpp \
			$(SRC_DIR)/Cat.cpp \
			$(SRC_DIR)/WrongAnimal.cpp \
			$(SRC_DIR)/WrongCat.cpp 



OBJ         = $(SRC:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# **************************************************************************** #
#                                   RULES                                      #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "✅ Build complete: $(NAME)"

# Rule to compile .cpp → .o inside objs/
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@
	@echo "Compiled: $< → $@"

clean:
	$(RM) -r $(OBJ_DIR)
	@echo "🧹 Object files removed"

fclean: clean
	$(RM) $(NAME)
	@echo "🗑️  Executable removed"

re: fclean all

# **************************************************************************** #
#                                   UTILS                                      #
# **************************************************************************** #

.PHONY: all clean fclean re
