import java.util.Scanner;

//THIS IS THE ASSIGNMENT FOR OVERRIDING AND OVERLOADING
class Shape {
    public void ComputeArea() {
        System.out.println("COMPUTE THE AREA OF FOLLOWING SHAPES\n ");
    }

    class Rectangle extends Shape {
        public void ComputeArea(int length, int breadth) {
            System.out.println("THE AREA OF RECTANGLE IS :"+length * breadth+" \n");
        }
    }

    class triangle extends Shape {
        public void ComputeArea(int base, int height) {
            System.out.println("THE AREA OF TRIANGLE IS :");
        }
    }
}
class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Shape obj1 = new Shape();
        int length, breadth;
        length = sc.nextInt();
        breadth = sc.nextInt();
        obj1.ComputeArea(length, breadth);
        int base, height;
        base = sc.nextInt();
        height = sc.nextInt();
        obj1.ComputeArea(base, height);
    }
}