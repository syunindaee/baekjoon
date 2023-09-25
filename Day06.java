import java.util.Arrays;
import java.util.Scanner;
public class Day06 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        int count = 0;

        int[][] empty = {{0}, };

        int[] array = new int[2];

        for(int l=0; l<num; l++)
        {
            for (int i = 0; i < 2; i++)
            {
                array[i] = sc.nextInt();
            }
            for(int j=array[1]; j<array[1]+10; j++)
            {
                for(int k=array[0]; k<array[0]+10; k++)
                {
                    empty[j][k] = 1;
                }
            }
        }

        for(int i=0; i<100; i++)
        {
            for(int j=0; j<100; j++)
            {
                if(empty[i][j] == 1)
                {
                    count++;
                }
            }
        }

        System.out.println(count);

    }
}
