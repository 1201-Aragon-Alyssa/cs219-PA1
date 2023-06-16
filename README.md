# cs219-PA1
Hexadecimal Calculator Program

This program is designed to perform operations on hexadecimal numbers. It reads input commands from a text file, performs the operation on the provided hexadecimal numbers, and displays the result on the terminal.

Working Process

1. The program reads the commands from the input file.
2. For each ADD command, the program extracts the two hexadecimal numbers.
3. The program performs addition on the hexadecimal numbers.
4. The result of the addition is displayed on the terminal in 32-bit hexadecimal format.
5. If an overflow occurs during the addition, the program detects it and displays "Overflow: yes" along with the result. Otherwise, it displays "Overflow: no".

Input Formatting

ADD <hex_number1> <hex_number2>
The ADD command is followed by two hexadecimal numbers separated by a space. The numbers should be in the format "0x" followed by the hexadecimal digits.

Program Output

The program will execute the commands in the input file and display the results on the terminal. The output format is as follows:
<command> <operand1> <operand2>: <result>
Overflow: <yes/no>
Each command is displayed with its corresponding result in 32-bit hexadecimal format. If an overflow occurs during the addition, the overflow flag is set to "yes"; otherwise, it is set to "no".

Correctness of Output

The provided output for each input command is correct based on the hexadecimal addition operation. Here's a breakdown of the correctness for each input:

- ADD 0x1 0x1: The correct result of adding 0x1 and 0x1 is 0x2. The output "0x00000002" is the correct 32-bit representation of the result in hexadecimal format. Since the result does not exceed the maximum value of a 32-bit hexadecimal number, there is no overflow.

- ADD 0xAAA5555 0x555AAAA: The correct result of adding 0xAAA5555 and 0x555AAAA is 0x0FFFFFFF. The output "0x0fffffff" is the correct 32-bit representation of the result in hexadecimal format. There is no overflow in this addition.

- ADD 0xFFFFFFFF 0x1: The correct result of adding 0xFFFFFFFF and 0x1 is 0x00000000. The output "0x00000000" is the correct 32-bit representation of the result in hexadecimal format. Since the result exceeds the maximum value of a 32-bit hexadecimal number, an overflow has occurred.

- ADD 0x1234 0x8765: The correct result of adding 0x1234 and 0x8765 is 0x00009999. The output "0x00009999" is the correct 32-bit representation of the result in hexadecimal format. There is no overflow in this addition.

- ADD 0x72DF9901 0x2E0B484A: The correct result of adding 0x72DF9901 and 0x2E0B484A is 0xA0EAE14B. The output "0xa0eae14b" is the correct 32-bit representation of the result in hexadecimal format. There is no overflow in this addition.

