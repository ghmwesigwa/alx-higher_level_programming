#!/usr/bin/python3
import sys

if __name__ == "__main__":
    argv = sys.argv  # Get the list of command-line arguments

    # Calculate the number of arguments
    num_args = len(argv) - 1  # Subtract 1 to exclude the script name

    # Print the number of arguments and the appropriate label (argument or arguments)
    print("{} {}:".format(num_args, "argument" if num_args == 1 else "arguments"))

    # Print each argument with its position
    for i in range(1, len(argv)):
        print("{}: {}".format(i, argv[i]))
