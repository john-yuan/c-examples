dist:
	mkdir -p dist

extern: dist
	gcc ./examples/extern/version.c ./examples/extern/main.c -o ./dist/extern

function-pointers: dist
	gcc ./examples/function-pointers/main.c -o ./dist/function-pointers

static-functions: dist
	gcc ./examples/static-functions/main.c \
		./examples/static-functions/greeting.c \
		-o ./dist/static-functions
