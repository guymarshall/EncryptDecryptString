#include <iostream>
#include <string>

int main()
{
   std::string stringToEncrypt;
   std::cout << "Please enter a string:\t";
   std::cin >> stringToEncrypt;

   //TODO output to txt file
   int option;
   std::cout << "\nPlease choose following options:\n";
   std::cout << "1 = Encrypt the string.\n";
   std::cout << "2 = Decrypt the string.\n";
   std::cin >> option;

   switch (option)
   {
      case 1:
         for (int i = 0; (i < 100 && stringToEncrypt[i] != '\0'); i++)
         {
            stringToEncrypt[i] = stringToEncrypt[i] + 2;
         }

         std::cout << "\nEncrypted string: " << stringToEncrypt << std::endl;
         break;

      case 2:
         for (int i = 0; (i < 100 && stringToEncrypt[i] != '\0'); i++)
         {
            stringToEncrypt[i] = stringToEncrypt[i] - 2;
         }

      std::cout << "\nDecrypted string: " << stringToEncrypt << std::endl;
      break;

      default:
         std::cout << "\nInvalid Input !!!\n";
   }
   return 0;
}

