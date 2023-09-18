import java.util.Arrays;
import java.util.Scanner;
public class day05 {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int i = 0;

        int num = n;
        int edit = 0;

        while (num > 0) {
            num /= 10;
            edit++;
        }

        int[] array = new int[edit];

        num = n;

        for (i = edit - 1; i >= 0; i--)
        {
            array[i] = num % 10;
            num /= 10;
        }

        for (i = 0; i < edit; i++)
        {
            for (int j = 0; j < edit - 1 - i; j++)
            {
                if (array[j] < array[j + 1])
                {
                    int temp = array[j];
                    array[j] = array[j + 1];
                    array[j + 1] = temp;
                }
            }
        }

        for(int k=0; k<i; k++)
        {
            System.out.print(array[k]);
        }
    }
}
