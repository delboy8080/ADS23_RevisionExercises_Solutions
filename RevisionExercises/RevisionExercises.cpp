#include "Recursion.h"
#include "DynamicMemory.h"
#include "AllKinds.h"
#include "Flower.h"

void recursion_q1();
void recursion_q2();
void recursion_q3();
void recursion_q4();
void recursion_q5();

void classes_q1();
void classes_flowerMain();

/*
    Uncomment the main method for the question(s) you wish to run
*/
int main()
{
     //recursion_q1();
     //recursion_q2();
     //recursion_q3();
     //recursion_q4();
     //recursion_q5();

     // dynamic_main1();
     // dynamic_main2();
     // dynamic_main3();
     // dynamic_main4();
     // dynamic_main5();
     // dynamic_main6();
     
     //classes_q1()
     classes_flowerMain();
   
}

void recursion_q1()
{
    cout << "=======       Recursion Question 1.           =============" << endl;
    string s[] = { "racecar", "gohangasalamiimalasagnahog", "ractecar", "stark" };
    for (int i = 0; i < 4; i++)
    {
        string result = isPalindrome(s[i]) ? "True" : "False";
        cout << s[i] << " is a Palindrome: " << result << endl;
    }
}
void recursion_q2()
{
    cout << "=======       Recursion Question 2.           =============" << endl;
    int* arr = new int[5] {4,2,5,1,3};
    
    display(arr, 5);
    int min, max;
    minMax(arr, 5, min, max);
    cout << "Minimum Value: " << min<<endl;
    cout << "Maximum Value: " << max<<endl;

}
void recursion_q3()
{
    cout << "=======       Recursion Question 3.           =============" << endl;

    string s = "pots&pans";
    cout << s << " Reversed is " << reverse(s) << endl;
}
void recursion_q4()
{
    cout << "=======       Recursion Question 4.           =============" << endl;
    string s = "12345";
    cout << s << " as an integer is " << convertToInt(s) << endl;
}
void recursion_q5()
{
    int x = 2;
    int y = 10;
    cout << x << " ^ " << y << " = " << power(x, y) << endl;
}

void classes_q1()
{
    AllKinds ak(4, 3.15145, 987536987l);
    cout << "Integer + Float = " << ak.getIntFloat() << endl;
    cout << "Integer + Long = " << ak.getIntLong() << endl;
    cout << "Long + Float = " << ak.getFloatLong() << endl;

}

void classes_flowerMain()
{
    Flower f;
    Flower f2("Daisy", 12, .25);
    cout << "F: " << f << endl;
    cout << "F2: " << f2 << endl;

    //test setters
    f.setName("Lily");
    f.setNumberOfPetals(6);
    f.setPrice(1.50);
    cout << "After setters called " << endl;
    cout << "F: " << f << endl;

    f2 = f2 + .5;
    cout << "F2 After price increase: " << f2 << endl;


    cout << "Post increment on f: " << ++f << endl;
    cout << "Pre increment on f: " << f++ << endl;
    cout << "After both increments applied: " << f << endl;


}