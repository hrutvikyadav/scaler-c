gcc:
	mkdir -p ./bin/gcc
	gcc src/input-output.c -o bin/gcc/input-output

zig:
	mkdir -p ./bin/zig
	zig cc src/input-output.c -o bin/zig/input-output

clean-gcc:
	rm -r ./bin/gcc 

clean-zig:
	rm -r ./bin/zig

