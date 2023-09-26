import java.util.Scanner;

//THIS IS THE ASSIGNMENT FOR OVERRIDING AND OVERLOADING
class Shape {
    double dim1,dim2;
    Shape(){
        dim1=0;
        dim2=0;
    }
    public void ComputeArea() {
        System.out.println("COMPUTE THE AREA OF FOLLOWING SHAPES\n ");
    }
}

    class Rectangle extends Shape {
        public void ComputeArea(double length, double breadth) {
            dim1=length;
            dim2=breadth;
            System.out.println("THE AREA OF RECTANGLE IS :"+dim1 * dim2);
        }
    }

    class triangle extends Shape {
        public void ComputeArea(double base, double height) {
            dim1=base;
            dim2=height;
            System.out.println("THE AREA OF TRIANGLE IS :"+0.5*dim1*dim2);
        }
    }

class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Shape obj1 = new Shape();
        obj1.ComputeArea();
        double length, breadth;
        Rectangle obj2 = new Rectangle();
        triangle obj3 = new triangle();
        int ch;


        do {
            System.out.println("ENTER 1 FOR CALCULATING THE AREA OF RECTANGLE\nENTER 2 FOR CALCULATING THE AREA OF TRIANGLE");


            ch= sc.nextInt();

            switch (ch) {
                case 1:
                    System.out.println("ENTER THE LENGTH OF RECTANGLE : ");
                    length = sc.nextDouble();
                    System.out.println("ENTER THE BREADTH OF RECTANGLE :  ");
                    breadth = sc.nextInt();
                    obj2.ComputeArea(length, breadth);
                    break;

                case 2:
                    double base, height;
                    System.out.println("ENTER BASE OF TRIANGLE :  ");
                    base = sc.nextInt();
                    System.out.println("ENTER HEIGHT OF TRIANGLE :  ");
                    height = sc.nextInt();
                    obj3.ComputeArea(base, height);
                    break;

                case 3:
                System.out.println("EXIT THE PROGRAM");

            }


        }

        while (ch != 3) ;
    }
}