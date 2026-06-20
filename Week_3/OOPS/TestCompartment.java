import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "Notice: This is a First Class compartment.";
    }
}

class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Notice: This compartment is reserved strictly for Ladies.";
    }
}

class General extends Compartment {
    @Override
    public String notice() {
        return "Notice: This is a General compartment.";
    }
}

class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Notice: This compartment is reserved for Luggage only.";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] compartments = new Compartment[10];
        Random random = new Random();

        for (int i = 0; i < compartments.length; i++) {
            int randomNum = random.nextInt(4) + 1;

            if (randomNum == 1) {
                compartments[i] = new FirstClass();
            } else if (randomNum == 2) {
                compartments[i] = new Ladies();
            } else if (randomNum == 3) {
                compartments[i] = new General();
            } else if (randomNum == 4) {
                compartments[i] = new Luggage();
            }
        }

        for (int i = 0; i < compartments.length; i++) {
            System.out.println("Coach " + (i + 1) + " -> " + compartments[i].notice());
        }
    }
}