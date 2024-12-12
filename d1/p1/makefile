# sets compiler, enables all warnings, and the C++ standard version
CXX = g++
CXXFLAGS = -Wall -std=c++17

# names the executable after the CWD
TARGET = $(notdir $(CURDIR)).out

# the source file
SRC = p1.cpp

# sets the default target when make is ran w/o any arguments
all: $(TARGET)

# sets how to build the executable
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

# sets how to clean the build
clean:
	rm -f $(TARGET)