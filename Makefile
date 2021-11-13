dist:
	mkdir -p dist

extern: dist
	gcc ./examples/extern/version.c ./examples/extern/main.c -o ./dist/extern

