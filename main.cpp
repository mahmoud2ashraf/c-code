#include <iostream>

using namespace std;

int main()
{
    cout <<"Ahlan ya user ua habibi."<<endl;;
    cout <<"What do you like to do today?"<<endl;
    cout <<"1- Cipher a message"<<endl;
    cout <<"2- Decipher a message "<<endl;
    cout <<"3- End "<<endl;
    int n ;
    cout<<">>>";
    cin >> n ;
    if (n == 1 )
    {
        string name ;
        cout <<"Please enter the message to cipher: " ;
        cin.ignore();
        getline(cin, name);
        string arrayOfletter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string cipher[] = {".- ","-... ","-.-. ","-.. ",". ","..-. ","--. ",".... ",".. ",".--- ","-.- ",".-.. ","-- ","-. ","--- ",".--. ","--.- ",".-. ","... ","- ","..- ","...- ",".-- ","-..- ","-.-- ","--.. ",".- ","-... ","-.-. ","-.. ",". ","..-. ","--. ",".... ",".. ",".--- ","-.- ",".-.. ","-- ","-. ","--- ",".--. ","--.- ",".-. ","... ","- ","..- ","...- ",".-- ","-..- ","-.-- ","--.. "};
        for (int  i = 0 ; i < name.size() ; i++)
        {
            for (int j=0 ; j< 29; j++)
            {
                if (name[i] == arrayOfletter[j])
                {
                    cout << cipher[j];
                }
                if (name[i] == ' ')
                {
                    cout <<"   ";
                    break;
                }

            }
        }
    }
    else if (n == 2)
    {
        string arrayOfletter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string cipher[52] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..",".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string decryption;
        cin.ignore();
        string name ;
        cout <<"Enter your cipher (for example, ... --- ...  ... --- ...) :  "<<endl;
        getline(cin,name);
        string letter;
        for(int i=0; i< name.size(); i++)
        {
            while (name[i]!=32)
            {

                letter+=name[i];
                i++;
            }
            for(int j=0 ; j<26; ++j)
            {
                if(letter == cipher[j])
                {
                    decryption += arrayOfletter[j];
                    letter="";
                }
            }
            if (name[i]==32)
            {
                if ((name[i+1]==32 && name[i+2] == 32)||(name[i+1]==32))
                {
                    decryption+=" ";
                }
            }


        }
        cout<<decryption;
    }
    return 0;
}
