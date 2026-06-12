/*
Problem: Musical Instrument System using Interface

Description:
Design a Java application using interfaces and packages to represent different musical instruments. Implement the Playable interface in Veena and Saxophone classes and demonstrate runtime polymorphism by invoking the play() method through interface references.
*/


interface Playable {
    void play();
}

class Veena implements Playable {
    public void play() {
        System.out.println("Veena is playing");
    }
}

class Saxophone implements Playable {
    public void play() {
        System.out.println("Saxophone is playing");
    }
}

public class Test {
    public static void main(String[] args) {
        Veena v = new Veena();
        v.play();

        Saxophone s = new Saxophone();
        s.play();

        Playable p;

        p = new Veena();
        p.play();

        p = new Saxophone();
        p.play();
    }
}