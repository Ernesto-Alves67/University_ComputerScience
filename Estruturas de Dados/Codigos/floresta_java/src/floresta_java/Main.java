package floresta_java;

import estruturas.Arvore_Rubro_Negra;

public class Main {
	
	public static Arvore_Rubro_Negra tree1;
	public static void main(String[] args) {
		
		System.out.println("Bem vindo a Floresta Java");
		
		tree1 = new Arvore_Rubro_Negra();
		
		tree1.insert(34);
		tree1.insert(89);
		tree1.insert(56);
		tree1.insert(78);

		
		tree1.printArvore();
	}

}
