/*
 * This is programe for arraylist Hashmap hashset linkedlist 
 * Name: Denis Kipkurui
 * Adno: BSE-05-0175/2024
 */

//import java.util.Scanner;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.LinkedList;

public class Data_Structures {
    public static void main(String[] args){
        //ArrayList
        //Object
        ArrayList<String> cars = new ArrayList<String>();
        cars.add("BMW");        
        cars.add("Mazda");
        System.out.println(cars);

        
        //LinkedList
        //Object
        LinkedList<String> animals = new LinkedList<String>();  
        animals.add("Cow");
        animals.add("Dog");
        System.out.println(animals);

        //HashMap
        //Object
        HashMap<String, String> capitalCities = new HashMap<String, String>();
        capitalCities.put("Kenya", "Nairobi");
        capitalCities.put("Uganda", "Kampala");
        capitalCities.put("Tanzania", "Dodoma");
        System.out.println(capitalCities);

        //HashSet
        //objact
        HashSet<String> car = new HashSet<String>();
        car.add("BMW");
        car.add("Ford");
        car.add("Mazda");
        car.add("BMW");
        System.out.println(car);
    } 
}