import java.util.Scanner;
public class ques122 {
    public int maxp(int[] prices)
    {
        int maxprofit=0;
        for(int i=1;i<prices.length;i++)
        {
            if(prices[i]>prices[i-1])
            {
                maxprofit+=prices[i]-prices[i-1];
            }
        }
        return maxprofit;
    }
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int prices[]=new int[n];
        for(int i =0;i<n;i++)
        {
            prices[i]=sc.nextInt();
        }
        ques122 obj=new ques122();
        System.out.println("Maximum Profit: "+obj.maxp(prices));

    }
}
