#!/usr/bin/python3
"""Print the alphabet in lowercase, not followed by a new line."""

for letter_ascii in range(ord('a'), ord('z') + 1):
    print(chr(letter_ascii), end='')
print()
