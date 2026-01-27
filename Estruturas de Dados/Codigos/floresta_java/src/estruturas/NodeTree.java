package estruturas;

public class NodeTree {

}

//Estrutura básica do Nó
class Node {
	int data;
	Node left, right, parent;
	char color; // 'R' para vermelho, 'B' para preto

	public Node(int data) {
		this.data = data;
		this.color = 'R'; // Novos nós são geralmente vermelhos
		this.left = this.right = this.parent = null;
	}
}