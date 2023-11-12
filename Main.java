// Press Shift twice to open the Search Everywhere dialog and type `show whitespaces`,
// then press Enter. You can now see whitespace characters in your code.

import javax.swing.plaf.synth.SynthOptionPaneUI;
import java.sql.SQLOutput;
import java.util.Scanner;
import java.io.*;
class Student{
    String name ;
    int sgpa ;
    int roll_number ;

   void get_data(){
        Scanner sc  = new Scanner((System.in));
        System.out.println("ENTER THE NAME OF STUDENT");
        name = sc.next();
        System.out.println("ENTER THE SGPA OF STUDENT");
        sgpa = sc.nextInt();
        System.out.println("ENTER THE ROLL_NUMBER OF A STUDENT");
        roll_number = sc.nextInt();
   }
   void write_file() {
       String s;

       FileWriter fileWriter;
       try {
           get_data();
           s = name + " " + sgpa + " " + roll_number + " ";
           fileWriter = new FileWriter("ABC.TXT");
           fileWriter.write(s);
           fileWriter.close();
        }
       catch (IOException e){

       }
   }

   void read_file(){
       String s  ;
       try{
           File file  = new File("ABC.TXT");
           Scanner sc = new Scanner(file);

           while(sc.hasNext()){
               s = sc.nextLine() ;
               String line[] = s.split(" ");
               System.out.println("NAME OF A STUDENT IS "+line[0]);
               System.out.println("SGPA OF A STUDENT IS "+line[1]);
               System.out.println("MARKS OF A STUDENT IS "+line[2]);


           }
         sc.close();
       }
       catch (IOException e){

       }
   }
}



public class Main {
    public static void main(String[] args) {
     Student obj1  = new Student();
     obj1.write_file();
     obj1.read_file();


        }
    }
