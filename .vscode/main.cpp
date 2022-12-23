#include <iostream>
#include <string>
#include <cstring>


using namespace std;


void Into_Char(string Input, int Length, char charChar[]){
     int count = 0; // for numbers
     int count1 = 0; // for special characters
     int count2 = 0; // for all letters
    strcpy(charChar, Input.c_str()); // making charChar array made of caharcters
    
    cout << "The array of char is: ";

    

    for (int i = 0; i < Length; i++){
        cout << "'" << charChar[i] << "'" << ", "; // reading  and  printing the characters
        // concept code of how to read the characters
        /* int k = 0;
  

  for (int i = 0; i < 10; i++){
    k+=(i == 5) ? 1: 0; k = k +  0 if k < 5; k = k + 1 if k == 5;
    // k = 0; before 5
    // k = 1; after 5
    
    cout << k << "   i:" << i <<  endl;
  }*/
       // but using three different counters, count that checks for numbers, 
       // count1 that checks for special characters
       // and count2 that checks for small case letters and special characters
       // if a minimum of 2 numbers, 2 special characters and at least
       // 7 characters comprimised of letters and special characters
       // it will print strong else weak

       // I tried this method. However, the counters remain at 0
       // Can someone explain why?
        


       
     

    }

    for (int i = 0; i < Length; i++){
        count += ((int)charChar[i] >= 48 && (int)charChar[i] <= 57) ? 1: 0;
        count1 += (((int)charChar[i] >= 35 && (int)charChar[i] <= 38) || ((int)charChar[i] == 33 || (int)charChar[i]== 42)) ? 1 : 0;
        count2 += ( (((int)charChar[i] >= 35 && (int)charChar[i] <= 38) || ((int)charChar[i] == 33 || (int)charChar[i]== 42)) || ((int)charChar[i] >= 65 && (int)charChar[i] <= 90)) ? 1: 0;

        cout << "Count: " << count << endl;

        cout << "Count1: " << count1 << endl;

        cout << "Count2: " << count2 << endl;

        if (count == 2 && count1 == 2 && count2 == 7){
            cout << "Strong" << endl;
            break;
        }
        else {
            
            cout << "Weak";
            break;
        }
    }
     
    

}



int main(){
    string input;
    int length2;

    

   

    getline(cin, input);

    

    if (input.length() >= 17){
        cout << "Invalid length. Enter the string again" << endl;
        getline(cin, input);

    }
    else {
        cout << "Good password " << endl;
         length2 =  input.length();
         char array[length2 + 1];
         
         Into_Char(input, length2, array);
         
    

    }
   

    return 0;
}