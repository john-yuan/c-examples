dist:
	mkdir -p dist

extern: dist
	gcc ./examples/extern/version.c ./examples/extern/main.c -o ./dist/extern

function-pointers: dist
	gcc ./examples/function-pointers/main.c -o ./dist/function-pointers
