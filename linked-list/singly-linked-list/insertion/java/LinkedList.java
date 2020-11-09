class Node{
    int data;
    Node next;
    Node prev;
    Node(int data){
        this.data = data;
    }

    static int countNodes(Node head){
        int count = 1;
        Node current = head;
        while(current.next != null){
            current = current.next;
            count += 1;
        }
        return count;
    }
}

public class LinkedList {
    public static void main(String[] args) {
        Node head = new Node(6);
        Node nodeB = new Node(3);
        Node nodeC = new Node(4);
        head.next = nodeB;
        nodeB.next = nodeC;
        node.prev = nodeB;
        nodeB.prev = head;
        nodeC.next = null;
        int result = Node.countNodes(head);
        System.out.println(result);
    }
}
