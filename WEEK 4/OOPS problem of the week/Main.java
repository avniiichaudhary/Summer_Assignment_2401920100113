interface Test {
    int square(int n);
}

class Arithmetic implements Test {
    public int square(int n) {
        return n * n;
    }
}

class Outer {
    void display() {
        System.out.println("Outer class display");
    }

    class Inner {
        void display() {
            System.out.println("Inner class display");
        }
    }
}

class Point {
    private int x, y;

    Point() {
        x = 0;
        y = 0;
    }

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void setX(int x) {
        this.x = x;
    }

    void setY(int y) {
        this.y = y;
    }

    void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void display() {
        System.out.println("Point: (" + x + ", " + y + ")");
    }
}

class Box {
    double length, breadth;

    Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }

    double area() {
        return length * breadth;
    }
}

class Box3D extends Box {
    double height;

    Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }

    double volume() {
        return length * breadth * height;
    }
}

public class Main {
    public static void main(String[] args) {
        Arithmetic a = new Arithmetic();
        System.out.println("Square of 5 = " + a.square(5));

        Outer o = new Outer();
        o.display();
        Outer.Inner i = o.new Inner();
        i.display();

        Point p = new Point();
        p.setXY(10, 20);
        p.display();

        Box3D b = new Box3D(5, 4, 3);
        System.out.println("Area = " + b.area());
        System.out.println("Volume = " + b.volume());
    }
}