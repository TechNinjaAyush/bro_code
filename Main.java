import java.util.Scanner;

class Main {
    public static void main(String[] args) {

        System.out.println("Enter object to be created \n1. Assistant Project Manager\n2.Teamlead\n3. ProjectManager\n4.Programmer");


        Scanner in = new Scanner(System.in);
        int ch = in.nextInt();
        System.out.println("Enter Basepay: ");
        int basePay = in.nextInt();
        switch (ch){
            case 1: AssistantProjectManager APM1= new AssistantProjectManager();
                    APM1.getData();
                    APM1.displayData();
                    APM1.salarySlip(basePay);
            case 2:TeamLead T1 = new TeamLead();
                    T1.getData();
                    T1.displayData();
                    T1.salarySlip(basePay);
            case 3: ProjectManager PM1= new ProjectManager();
                    PM1.getData();
                    PM1.displayData();
                    PM1.salarySlip(basePay);
            case 4: Programmer P1= new Programmer();
                    P1.getData();
                    P1.displayData();
                    P1.salarySlip(basePay);
        }
    }
}