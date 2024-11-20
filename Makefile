TARGET=rvas
CC=clang++
SRC=main.cpp

${TARGET}: clean
	${CC} ${SRC} -o ${TARGET}

.PHONY: test
test: ${TARGET}
	./test.sh

clean:
	@rm -f ${TARGET} *.o *.s
