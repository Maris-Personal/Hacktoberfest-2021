class Node:
    def __init__(self, data=None):
        self.data = data
        self.next = None


class Linked:
    def __init__(self):
        self.head = None

    def show(self):
        node = self.head
        while node is not None:
            print(node.data)
            node = node.next

    def add(self, new):
        new_node = Node(new)
        new_node.next = self.head
        self.head = new_node
    def reverse(self):
        prev = None
        current = self.head
        while (current is not None):
            next = current.next
            current.next = prev
            prev = current
            current = next
        self.head = prev

link = Linked()
elem = Node("John")
link.head = elem
elem2 = Node("Cena")
link.head.next = elem2

link.add("YCantSM")
link.reverse()
link.show()

