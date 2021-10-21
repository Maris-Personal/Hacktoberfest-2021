
/**
 * @author Urveshkumar Patel
 * GitHub: https://github.com/urvesh254
 */
public class ReverseLinkedList {

    /**
    * It is a representation of the LinkedList node. 
    */
    public static class Node<T> {
        T data;
        Node<T> next;

        public Node(T data) {
            this.data = data;
        }

        public Node(T data, Node<T> next) {
            this.data = data;
            this.next = next;
        }

        @Override
        public String toString() {
            return "Node [data=" + data + ", next=" + next + "]";
        }

    }

    /**
     * => Efficient method for reversing the LinkedList.
     *         
     * Time Complexity: O(n)
     * Space Complexity: O(1)
     * 
     * @param head Start pointer of the LinkedList.
     * @return Updated head after reversing the LinkedList.
     */
    public static <T> Node<T> reverseLL(Node<T> head) {
        Node<T> pre = null, next = null, curr = head;

        while (curr != null) {
            pre = curr.next;
            curr.next = next;
            next = curr;

            curr = pre;
        }

        return next;
    }
}
