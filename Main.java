/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
import java.util.Scanner;
public class employee{
    String name;
    int id;
    String mail;
    String mobile_no;
     String address;
    public  void getdata(){
         Scanner sc=new Scanner(System.in);
         System.out.println("enter the name of employee:");
         name=sc.nextLine();
         System.out.println("enter the ID of employee :");
         id=sc.nextInt();
         System.out.println("enter the email of employee:");
         mail=sc.nextLine();
         System.out.println("enter the mobile_number of employee:");
         mobile_no=sc.nextLine();
         System.out.println("enter the address of employee:");
         address=sc.nextLine();
     }
     public void displaydata(){
         System.out.println("name of employee"+name+"id is"+mail+"mobile_no"+mobile_no+"address is"+address);
     }
     void salarySlip(int BasePay){
        System.out.println("\n\nDA: " + (0.95*BasePay) + "\nHRA: " + (0.1*BasePay) + "\nPF: " + (0.12*BasePay) + "\nStaff Club Fund: " + (0.001*BasePay));
        System.out.println("Gross Salary: " + (BasePay * 2.191));
        System.out.println("Net Salary: " + (BasePay * 2.07));
    }
    public class programmer extend employee{
        @Override
        int BasePay
        public void getdata(){
        super.getdata();
        }
        @Override
        public void displaydata(){
            super.displaydata();
        }
        @Override
        public void salarySlip(int bp){
            super.salarySlip(bp);
        }

    
    }
}
 

public class Main
{
	public static void main(String[] args) {
int basepay=10000;
   programmer P1=new programmer();
   p1.getdata();
   p1.displaydata();
   p1.salarySlip()

	}
}
