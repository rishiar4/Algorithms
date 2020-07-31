import java.util.*;

public class binarySearch{
    public static void main(String[] args) {
        Scanner scn = new Scanner( System.in );
        int n = scn.nextInt();
        int[] arr = new int[n];
        //System.out.println("Insert in Sorted Order");
        for( int i = 0; i < n; i++)
        {
            arr[i] = scn.nextInt();
        }
        int k = scn.nextInt();
        int pos = bSearch(arr,k);
        if( pos == -1 )
        {
            System.out.println("Not Found");
        }
        else
        {
            System.out.println(pos);
        }
    }

    public static int bSearch( int[] arr, int k)
    {
        int low = 0, high = arr.length;
        int mid = ( low + high )/2;
        int pos = -1;
        while( low < high )
        {
            if( arr[ mid ] == k )
            {
                pos = mid;
                break;
            }
            else if( arr[ mid ] > k )
            {
                high = mid + 1;
            }
            else
            {
                low = mid - 1;
            }
            mid = ( low + high )/2;
        }
        return pos;
    }
}
