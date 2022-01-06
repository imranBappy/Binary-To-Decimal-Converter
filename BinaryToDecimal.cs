// Binary To Deciaml Converter in C#
using System;
class BinaryToDecimal{
    static void Main(string[] args){
        Console.Write("Enter binary number : 011... ");
        Console.WriteLine("Decimal = " + converter(Console.ReadLine()));
    }
    static double converter(string binary){
        double decimalNum = 0;
        int i  = binary.Length - 1;
        while(i > -1){
            if ('1' == binary[(binary.Length-1) - i]) decimalNum += Math.Pow(2,i);
            i--;
        }
        return decimalNum;
    }
}