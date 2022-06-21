//Simple C++ program to encrypt and decrypt a string

#include <iostream>

int main()
{
   int i, x;
   char str[100];

   std::cout << "Please enter a string:\t";
   std::cin >> str;

   std::cout << "\nPlease choose following options:\n";
   std::cout << "1 = Encrypt the string.\n";
   std::cout << "2 = Decrypt the string.\n";
   std::cin >> x;

   //using switch case statements
   switch(x)
   {
      //first case for encrypting a string
      case 1:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
            str[i] = str[i] + 2; //the key for encryption is 3 that is added to ASCII value

         std::cout << "\nEncrypted string: " << str << std::endl;
         break;

      //second case for decrypting a string
      case 2:
         for(i = 0; (i < 100 && str[i] != '\0'); i++)
         str[i] = str[i] - 2; //the key for encryption is 3 that is subtracted to ASCII value

      std::cout << "\nDecrypted string: " << str << std::endl;
      break;

      default:
         std::cout << "\nInvalid Input !!!\n";
   }
   return 0;
}

