#!/usr/bin/python3
def square_matrix_simple(matrix):
    result = [[y ** 2 for y in x] for x in matrix]
    return result
