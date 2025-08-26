public class calculaIMC {
    public static void main(String[] args) {
    IMC calc = new IMC();

    double resultado = calc.calculoIMC(115, 1.76);

    System.out.printf("IMC = %.2f", resultado);
    System.out.println("\nClassificação = " + IMC.classificacao(resultado));
    }
}