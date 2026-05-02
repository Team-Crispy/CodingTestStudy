package yourim08;

public class test {
    public static void main(String args[]) {
        String p = "271";
        String t = "3141592";
        int answer = 0;
        int pLen = p.length();
        int pValue = Integer.parseInt(p);
        int count = t.length() - pLen + 1;
        for(int i=0; i<count; i++){
            int compare = Integer.parseInt(t.substring(i, i+pLen));
            if(compare <= pValue) answer++;
        }
        System.out.println(answer);
    }
}