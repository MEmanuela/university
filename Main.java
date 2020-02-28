public class Main
{
    public static long getBoundarySum(int a[][], int m, int n)
    {
        long sum = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0)
                    sum += a[i][j];
                else if (i == m - 1)
                    sum += a[i][j];
                else if (j == 0)
                    sum += a[i][j];
                else if (j == n - 1)
                    sum += a[i][j];
            }
        }
        return sum;
    }

    /* Driver program to test above function */
    public static void main(String[] args)
    {
        int a[][] = { { 1, 2, 3, 4 }, { 10, 0, 2, 5 }, { 9, 8, 7, 6 }};
        long sum = getBoundarySum(a, 3, 4);
        System.out.println("Sum of boundary elements" + " is " + sum);
    }
}
