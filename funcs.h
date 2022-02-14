
struct Node
{
	int data;
	struct Node *next;
};


class LinkedList {

private:

    Node * head;

    Node * createNewNode(int data);

public:

    void appendFirst(int node_data);

    void appendLast(int node_data);

    void displayList();
//                      ?
};
