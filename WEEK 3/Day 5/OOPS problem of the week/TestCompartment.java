/*
Problem: Railway Compartment System using Abstract Class

Description:
Design a railway compartment system using an abstract class and inheritance. Create different compartment types and demonstrate runtime polymorphism by invoking the overridden notice() method based on randomly generated compartment objects.
*/


import java.util.Random;

abstract class Compartment {
    public abstract String notice();
}

class FirstClass extends Compartment {
    public String notice() {
        return "First Class Compartment";
    }
}

class Ladies extends Compartment {
    public String notice() {
        return "Ladies Compartment";
    }
}

class General extends Compartment {
    public String notice() {
        return "General Compartment";
    }
}

class Luggage extends Compartment {
    public String notice() {
        return "Luggage Compartment";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] c = new Compartment[10];
        Random r = new Random();

        for (int i = 0; i < 10; i++) {
            int n = r.nextInt(4) + 1;

            switch (n) {
                case 1:
                    c[i] = new FirstClass();
                    break;
                case 2:
                    c[i] = new Ladies();
                    break;
                case 3:
                    c[i] = new General();
                    break;
                case 4:
                    c[i] = new Luggage();
                    break;
            }
        }

        for (int i = 0; i < 10; i++) {
            System.out.println(c[i].notice());
        }
    }
}