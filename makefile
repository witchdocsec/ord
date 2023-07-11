all: greet compile install
greet:
	@echo "installing ord"
compile:
	gcc ord.c -o ord -lncurses
install:
	sudo mv ./ord /bin/ord