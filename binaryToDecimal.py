# Binary To Deciaml Converter in Python
import  math
binary = input("Enter binary number : 011... ");
decimal = 0;
i = len(binary)-1;
while i > -1:
    if "1" == binary[(len(binary)-1) - i]: decimal += math.pow(2,i);
    i-=1;
print(f"{binary} = {int(decimal)}");

