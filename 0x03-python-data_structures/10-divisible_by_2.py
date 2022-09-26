#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    if my_list is not None:
        values = []
        for i in my_list:
            if i % 2 is 0:
                values.append(True)
            else:
                values.append(False)
        return values
