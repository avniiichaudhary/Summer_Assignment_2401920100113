/*
Problem: Library Management System using Interface

Description:
Design a library management system using Java Interfaces. Implement different user roles (KidUser and AdultUser) with specific rules for account registration and book borrowing based on age and book category. This demonstrates the use of interfaces, classes, and polymorphism in object-oriented programming.
*/


interface LibraryUser {
    void registerAccount();
    void requestBook();
}

class KidUser implements LibraryUser {
    int age;
    String bookType;

    public void registerAccount() {
        if (age < 12)
            System.out.println("You have successfully registered under a Kids Account");
        else
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
    }

    public void requestBook() {
        if (bookType.equals("Kids"))
            System.out.println("Book Issued successfully, please return the book within 10 days");
        else
            System.out.println("Oops, you are allowed to take only kids books");
    }
}

class AdultUser implements LibraryUser {
    int age;
    String bookType;

    public void registerAccount() {
        if (age > 12)
            System.out.println("You have successfully registered under an Adult Account");
        else
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
    }

    public void requestBook() {
        if (bookType.equals("Fiction"))
            System.out.println("Book Issued successfully, please return the book within 7 days");
        else
            System.out.println("Oops, you are allowed to take only adult Fiction books");
    }
}

public class LibraryInterfaceDemo {
    public static void main(String[] args) {

        KidUser k = new KidUser();
        k.age = 10;
        k.registerAccount();

        k.age = 18;
        k.registerAccount();

        k.bookType = "Kids";
        k.requestBook();

        k.bookType = "Fiction";
        k.requestBook();

        AdultUser a = new AdultUser();
        a.age = 5;
        a.registerAccount();

        a.age = 23;
        a.registerAccount();

        a.bookType = "Kids";
        a.requestBook();

        a.bookType = "Fiction";
        a.requestBook();
    }
}