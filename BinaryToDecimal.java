// Binary To Deciaml Converter in Java
import java.util.Scanner;
public class BinaryToDecimal{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter binary number : 011... ");
        System.out.println("Decimal = " + coverter(sc.nextLine()));
    }
    static int coverter(String binary){
        int i = binary.length()-1;
        int decimal = 0;
        while( i > -1){
            if ('1' == binary.charAt((binary.length()-1) - i)) decimal += Math.pow(2,i);
            i--;
        }
        return decimal;
    }
}