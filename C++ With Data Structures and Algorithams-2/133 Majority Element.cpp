//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.lang.*;
import java.util.*;

class Geeks {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        for (int g = 0; g < t; g++) {
            String[] str = (br.readLine()).trim().split(" ");
            int arr[] = new int[str.length];
            for (int i = 0; i < str.length; i++) arr[i] = Integer.parseInt(str[i]);
            System.out.println(new Solution().majorityElement(arr));
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solution {
    static int findCandidate(int a[], int size) {
        int maj_index = 0, count = 1;
        for (int i = 1; i < size; i++) {
            if (a[maj_index] == a[i])
                count++;
            else
                count--;
            if (count == 0) {
                maj_index = i;
                count = 1;
            }
        }
        return a[maj_index];
    }
    static boolean isMajority(int a[], int size, int cand) {
        int count = 0;
        for (int i = 0; i < size; i++)
            if (a[i] == cand) count++;
        if (count > size / 2)
            return true;
        else
            return false;
    }

    static int majorityElement(int arr[]) {
        int size = arr.length;
        int cand = findCandidate(arr, size);
        if (isMajority(arr, size, cand) == true)
            return cand;
        else
            return -1;
    }
}