class Questao7 { 
  
    static Node head1, head2; 
  
    static class Node { 
        int data; 
        Node next; 
  
        Node(int res) { 
            data = res; 
            next = null; 
        } 
    } 
  
    int getNode() { 
        int m = getCount(head1); 
        int n = getCount(head2); 
        int res; 

        if(m > n) { 
            res = m - n; 
            return intersection(res, head1, head2); 
        } 
        else { 
            res = n - m; 
            return intersection(res, head2, head1); 
        } 
    } 

    int intersection(int res, Node node1, Node node2) { 
        int i; 
        Node current1 = node1; 
        Node current2 = node2; 
        for(i = 0; i < res; i++) { 
            if(current1 == null) { 
                return -1; 
            } 
            current1 = current1.next; 
        } 
        while(current1 != null && current2 != null) { 
            if(current1.data == current2.data) { 
                return current1.data; 
            } 
            current1 = current1.next; 
            current2 = current2.next; 
        } 
  
        return -1; 
    } 
  
    int getCount(Node node) { 
        Node current = node; 
        int count = 0; 
  
        while(current != null) { 
            count++; 
            current = current.next; 
        } 
  
        return count; 
    } 
  
    public static void main(String[] args) { 
        
    	Questao7 list = new Questao7(); 
  
        list.head1 = new Node(2); 
        list.head1.next = new Node(3); 
        list.head1.next.next = new Node(7); 
        list.head1.next.next.next = new Node(15); 
        list.head1.next.next.next.next = new Node(30); 
  
        list.head2 = new Node(4); 
        list.head2.next = new Node(7); 
        list.head2.next.next = new Node(30); 
        list.head1.next.next.next = new Node(31); 
  
        System.out.println("The node of intersection is " + list.getNode()); 
    } 
}