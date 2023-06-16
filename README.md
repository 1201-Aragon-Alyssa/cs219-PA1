# cs219-PA1
Hexadecimal Calculator Program

This program is designed to perform operations on hexadecimal numbers. It reads input commands from a text file, performs the operation on the provided hexadecimal numbers, and displays the result on the terminal.

Working Process

The program reads the commands from the input file.
For each ADD command, the program extracts the two hexadecimal numbers.
The program performs addition on the hexadecimal numbers.
The result of the addition is displayed on the terminal in 32-bit hexadecimal format.
If an overflow occurs during the addition, the program detects it and displays "Overflow: yes" along with the result. Otherwise, it displays "Overflow: no".

Input Formatting

ADD <hex_number1> <hex_number2>
The ADD command is followed by two hexadecimal numbers separated by a space. The numbers should be in the format "0x" followed by the hexadecimal digits.

Program Output

The program will execute the commands in the input file and display the results on the terminal. The output format is as follows:
<command> <operand1> <operand2>: <result>
Overflow: <yes/no>
Each command is displayed with its corresponding result in 32-bit hexadecimal format. If an overflow occurs during the addition, the overflow flag is set to "yes"; otherwise, it is set to "no".
