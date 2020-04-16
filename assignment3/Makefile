all: *.c *.h
	clang -o cfunction sum_of_two_prime.c
	afl-clang -o afl_function sum_of_two_prime.c
	clang++ -o libfuzzer_sum_of_two_prime libfuzzer_sum_of_two_prime.cpp -fsanitize=fuzzer

clean:
	\rm *.o *.*~ cfunction afl_function libfuzzer_sum_of_two_prime
