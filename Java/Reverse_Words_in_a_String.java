// Reversing the Words in a sentence using Java StringBuilder
// For example :
// input : "Today is Friday"
// output : "Friday is Today"
public class Reverse_Words_in_a_String {
    public static void main(String[] args) {
        String n = "Today is Friday";
        String[] str = n.split(" ");// converts the string into array
        StringBuilder builder = new StringBuilder();
        for(int i = str.length - 1; i >= 0; i--)
        {
            builder.append(str[i] + " "); // adding the words in the array from the ending into
            // the string builder
        }
        System.out.println(builder.toString().trim()); // Converting the string builder to string and removing
        //using toString() method and removing trailing spaces using trim() function
    }
}
