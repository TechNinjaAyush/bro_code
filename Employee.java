import java.util.Scanner;

public class Employee{
        String name;
        int id;
        String mail;
        Long mobile_no;
        String address;

        public void getData() {
            Scanner sc = new Scanner(System.in);
            System.out.println("enter the name of employee:");
            name = sc.nextLine();
            System.out.println("enter the ID of employee :");
            id = sc.nextInt();
            System.out.println("enter the email of employee:");
            mail = sc.next();
            System.out.println("Enter the mobile number of employee:");
            mobile_no = sc.nextLong();
            System.out.println("enter the address of employee:");
            address = sc.nextLine();
        }

        public void displayData() {
            System.out.println("name of employee" + name + "id is" + mail + "mobile_no" + mobile_no + "address is" + address);
        }
 
        void salarySlip(int basePay) {
            System.out.println("\n\nDA: " + (0.95 * basePay) + "\nHRA: " + (0.1 * basePay) + "\nPF: " + (0.12 * basePay) + "\nStaff Club Fund: " + (0.001 * basePay));
            System.out.println("Gross Salary: " + (basePay * 2.191));
            System.out.println("Net Salary: " + (basePay * 2.07));
        }
    }






