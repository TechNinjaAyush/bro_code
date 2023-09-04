// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.
import java.util.*;

class ComplexNumber {

    double real, image;

    public ComplexNumber(double r, double i) {
        this.real = r;
        this.image = i;
    }

    public void showC() {
        if (this.image<0){
            System.out.print(this.real +" "+  this.image+"i");
        }
        else{
            System.out.println(this.real + "+" + this.image + "i");
        }
    }

    public static ComplexNumber add(ComplexNumber n1, ComplexNumber n2) {
        ComplexNumber res = new ComplexNumber(0, 0);
        res.real = n1.real + n2.real;
        res.image = n1.image + n2.image;
        return res;
    }

    public static ComplexNumber sub(ComplexNumber n1, ComplexNumber n2) {
        ComplexNumber abc = new ComplexNumber(0, 0);
        abc.real = n1.real - n2.real;
        abc.image = n1.image - n2.image;
        return abc;
    }

    public static  ComplexNumber multiply(ComplexNumber n1, ComplexNumber n2) {
        ComplexNumber mul = new ComplexNumber(0, 0);
        mul.real = n1.real * n2.real - n1.image * n2.image;
        mul.image = n1.image * n2.real + n2.image * n1.real;
        return mul;
    }

    public static ComplexNumber divide(ComplexNumber n1, ComplexNumber n2) {
        ComplexNumber div = new ComplexNumber(0, 0);
        double denominator = n2.real * n2.real + n2.image * n2.image;
        div.real = (n1.real * n2.real + n1.image * n2.image) / denominator;
        div.image = (n1.image * n2.real - n1.real * n2.image) / denominator;
        return div;
    }
}

class Main {
    public static void main(String[] args) {
        double a, b, c, d;
        int choice;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter real part of first number:");
        a = sc.nextDouble();
        System.out.println("Enter imaginary part of first number:");
        b = sc.nextDouble();
        System.out.println("Enter real part of second number:");
        c = sc.nextDouble();
        System.out.println("Enter real part of second number:");
        d = sc.nextDouble();

        // Creating two complex numbers
        ComplexNumber c1 = new ComplexNumber(a, b);
        ComplexNumber c2 = new ComplexNumber(c, d);

        System.out.print("First Complex number: ");
        c1.showC();
        System.out.print("\nSecond Complex number: ");
        c2.showC();

        System.out.println("\n================================================================");

        do {
            System.out.println("\nChoose the operation you want to perform:");
            System.out.println("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    ComplexNumber res = ComplexNumber.add(c1, c2);
                    System.out.println("\nAddition is:");
                    res.showC();
                    break;

                case 2:
                    ComplexNumber abc = ComplexNumber.sub(c1, c2);
                    System.out.println("\nSubtraction is:");
                    abc.showC();
                    break;

                case 3:
                    ComplexNumber mul = ComplexNumber.multiply(c1, c2);
                    System.out.println("\nMultiplication is:");
                    mul.showC();
                    break;

                case 4:
                    ComplexNumber div = ComplexNumber.divide(c1, c2);
                    System.out.println("\nDivision is:");
                    div.showC();
                    break;

                case 5:
                    System.out.println("Exiting the program.");
                    return;

                default:
                    System.out.println("Please enter a valid choice.");
                    break;
            }


        } while (true);
    }
}}