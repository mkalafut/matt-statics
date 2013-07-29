
PROGRAM=peoplesaddresses
SRC=src
BIN=bin


all: $(PROGRAM)

$(PROGRAM): dirs
	g++ -o $(BIN)/$@ $(SRC)/main.cpp

dirs:
	mkdir -p $(BIN)/

clean:
	rm -r $(BIN)
	
