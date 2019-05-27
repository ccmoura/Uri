from decimal import Decimal
_input = input().split(" ")
_input[0] = Decimal(_input[0])
_input[1] = Decimal(_input[1])
print(round(Decimal(_input[0]/_input[1]), 2))