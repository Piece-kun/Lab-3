CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

SRC = main.cpp matrix.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = programm

TEST_SRC = test_matrix.cpp
TEST_OBJ = test_matrix.o
TEST_EXEC = test_programm

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

test: $(TEST_EXEC)
	./$(TEST_EXEC)

$(TEST_EXEC): $(TEST_OBJ) matrix.o
	$(CXX) $(CXXFLAGS) -o $(TEST_EXEC) $(TEST_OBJ) matrix.o

clean:
	rm -f $(OBJ) $(EXEC) $(TEST_OBJ) $(TEST_EXEC)
