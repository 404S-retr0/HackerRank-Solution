import java.util.*;
public class ReverseString
{
  public static void main(String[] args)
  {
    Scanner scan = new Scanner(System.in);
    String input = scan.nextLine();
    String reverse = reverseString(input);
    String novowel = reverse.replaceAll("[aeiou]", "");
    if(novowel.length()==0)
      System.out.print("-1");
    else
      System.out.print(novowel);

  }
  public static String reverseString(String str)
  {
    StringBuilder sb=new StringBuilder(str);
    sb.reverse();
    return sb.toString();
  }
}
