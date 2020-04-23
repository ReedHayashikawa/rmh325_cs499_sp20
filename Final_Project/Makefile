all: *.c *.h
	clang -o cfunction afl_cfunction.c cfunction.c
	afl-clang -o afl_cfunction afl_cfunction.c cfunction.c
	clang++ -o cfunction_libfuzzer cfunction_libfuzzer.cpp cfunction.c -fsanitize=fuzzer

clean:
	\rm *.o *.*~ afl_cfunction cfunction cfunction_libfuzzer
