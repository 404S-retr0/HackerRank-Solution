import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        int distinct = 0;
        int size[] = new int[2];
        Scanner rd = new Scanner(System.in);
        for(int i=0; i<2; i++) size[i]=rd.nextInt();
        int sa = size[0];
        int sb = size[1];
        int a[] =  new int[sa];
        int b[] = new int[sb];
        for(int i=0; i<sa; i++)
        a[i]=rd.nextInt();
        for(int i=0; i<sb; i++)
        b[i]=rd.nextInt();
        
        for(int i=0; i<sa; i++){
            for(int j=0; j<sb; j++){
               if(a[i]==b[j]) break;
               else if((a[i]!=b[j])&&(j==(sb-1))){
                  System.out.print(a[i]+" ");
                  distinct++;
               }
               else continue;
            }
         }
        
        for(int i=0; i<sb; i++){
            for(int j=0; j<sa; j++){
               if(b[i]==a[j]) break;
               else if((b[i]!=a[j])&&(j==(sa-1))){
                  System.out.print(b[i]+" ");
                  distinct++;
               }
               else continue;
            }
         }
        if(distinct==0){ System.out.println(0);
        }
        else System.out.println("\n"+distinct);
        
    }
}
