# Name of the project
PROJECT_NAME = GamingArea

# Output directory
BUILD = build

# All source code files
SRC = mainCode.c\
src/*.c

# All test source files
TEST_SRC = src/calculator_operations.c\
test/test_calculator_operations.c\
unity/unity.c\


# To Check OS is Windows or Linux

ifdef OS
	RM = del /q
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
		RM = rm -rf
		FixPath = $1
		EXEC = out
	endif
endif

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC	= -Iinc\
-Iunity\


# Project Output name
PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME)

# Document files
DOCUMENTATION_OUTPUT = documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).$(EXEC)

# Call `make run` to run the application
run:$(PROJECT_NAME)
	$(FixPath)$(PROJECT_OUTPUT).$(EXEC)

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	$(RM) $(BUILD) $(documentation)


#Coverage
coverageCheck:$(BUILD)
	g++ -fprofile-arcs -ftest-coverage -fPIC -O0 $(TEST_SRC) $(INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

#valgrind
valgrind:
	valgrind $(FixPath)$(TEST_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
