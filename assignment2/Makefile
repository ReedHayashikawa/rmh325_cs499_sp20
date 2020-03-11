all: *.c *.h
	clang -o c-non-blocking-input c-non-blocking-input.c
	afl-clang -o afl_function c-non-blocking-input.c
	clang++ -o libfuzzer_c-non-blocking-input c-non-blocking-input_libfuzzer.cpp -fsanitize=fuzzer

clean:
	\rm *.o *.*~ c-non-blocking-input afl_function libfuzzer_c-non-blocking-input
