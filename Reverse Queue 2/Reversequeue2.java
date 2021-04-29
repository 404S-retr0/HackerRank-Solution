import java.util.LinkedList;
import java.util.Queue;
import java.util.Stack;
import java.util.Scanner;

public class Queue_reverse 
{
      
    static Queue<Integer> queue;
    static void Print()
    {
        while (!queue.isEmpty()) 
        {
            System.out.print( queue.peek() + " ");
            queue.remove();
        }
    }
    static void reversequeue()
    {
        Stack<Integer> stack = new Stack<>();
        while (!queue.isEmpty()) 
        {
            stack.add(queue.peek());
            queue.remove();
        }
        while (!stack.isEmpty()) 
        {
            queue.add(stack.peek());
            stack.pop();
        }
    }
    public static void main(String args[])
    {
        queue = new LinkedList<Integer>();
        Scanner myObj = new Scanner(System.in);
        int n = myObj.nextInt();
        for(int i = 0; i < n; i++)
        { 
            int t = myObj.nextInt();
            queue.add(t);
        }
        reversequeue();
        Print();
    }
}
