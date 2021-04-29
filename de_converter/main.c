#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float _get_decimal_input()
{
	return -42.3;
}

int _get_binary_input()
{

}

/*
converts binary to ascii text
binary_input_length = (255 [number of ascii characters] * 8 [bits to bytes]) + 255[for spaces] + 1 [null terminator]
*/
void binary_to_ascii()
{
    const char valid_binary_chars[2] = "01";
    int binary_input_length = 2296;
    char binary_input[binary_input_length];
    printf("Enter binary value: ");
    fgets(binary_input, binary_input_length, stdin);
    printf("binary value entered: %s", binary_input);
    int length_of_binary_input = strlen(binary_input);
    printf("binary input length: %d\n", length_of_binary_input);
    int i, int_val;
    char char_val;
    for (i = 0; i < length_of_binary_input; i++)
    {
        char_val = binary_input[i];
        printf("char_val: %c\n", char_val);
        int_val = atoi(&char_val);
        printf("int_val: %d\n", int_val);
    }
}

void hexadecimal_to_decimal()
{}

void decimal_to_hexadecimal()
{}

void decimal_to_binary()
{
	puts("Converting Decimal to Binary: ");
	int input_value = _get_decimal_input();
	printf("%f\n", input_value); // debug : print input value
	int quotient = input_value / 2;
	int remainder = input_value % 2;
	printf("quotient: %d\n remainder: %d\n", quotient, remainder);
}

void decimal_to_binary_bitwise()
{
	int c, k; // c = bit counter, k = temp value
	int input_value = _get_decimal_input();
	printf("%d in binary is: \n", input_value); // debug : print input value
	for (c = 31; c >= 0; c--)
	{
		k = input_value >> c;
		if (k & 1)
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}

void binary_to_decimal()
{
}

/*
data encoding converter
*/
int main()
{
    puts("Data Encoding Converter");
    //binary_to_ascii();
    decimal_to_binary_bitwise();
    return 0;
}
