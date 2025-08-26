public class IMC {
    public double calculoIMC(double peso, double altura) {
        double imc = peso / (altura * altura);

        return imc;

    }
    public static String classificacao(double imc) {
        if(imc < 18.5){
            return "Magreza";
        }else if(imc < 24.9){
            return "Normal";
        }else if(imc < 29.9){
            return "Sobrepeso";
        }else if(imc < 34.9){
            return "Obesidade I";
        }else if(imc < 40 ){
            return "Obesidade II";
        }else{
            return "Obesidade Gravissima";
        }
    }
}
