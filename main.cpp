#include "md5.h"
#include <conio.h>
#include <string>
#include <vector>


/* header */
void header(){
    cout << "+------------------------------------------------------------------------------+";
    cout << "+             Coded by Omer Citak - www.omercitak.net - @Om3rCitak             +";
    cout << "+------------------------------------------------------------------------------+";
}

/* char sets */
string charSeta[]   = {  "", "0", "1", "2", "3", "4", "5", "6", "7", "8",
                        "9", "a", "b", "c", "ç", "d", "e", "f", "g", "ğ",
                        "h", "ı", "i", "j", "k", "l", "m", "n", "o", "ö",
                        "p", "q", "r", "s", "ş", "t", "u", "v", "w", "x",
                        "y", "z", "A", "B", "C", "Ç", "D", "E", "F", "G",
                        "Ğ", "H", "I", "İ", "J", "K", "L", "M", "N", "O",
                        "Ö", "P", "Q", "R", "S", "Ş", "T", "U", "V", "W",
                        "X", "Y", "Z" };

vector <string> charSetv;

/* main */
int main()
{
    /* variables */
    string getHash;
    string hash;
    char getChar;
    int crack       = 0;
    int charSetLen  = sizeof(charSeta)/4;

    /* include functions */ 
    header();

    /* array to vector */
    for(int v=0; v<charSetLen; v++){
        charSetv.push_back(charSeta[v]);
    }

    /* get hash */
    cout << "\nMd5 hash (right click and paste) : ";
    do{
        getChar = getch();
        if((getChar>47 && getChar<58) || (getChar>64 && getChar<91) || (getChar>96 && getChar<123)){
            getHash += getChar;
            cout << getChar;
        }
    }while(getHash.length()<32);

    cout << "\n\n" << getHash << " << crack process is started. please wait ... \n" << endl;

    /* cracking */
    for(int q=0; q<charSetLen; q++){
        for(int w=0; w<charSetLen; w++){
            for(int e=0; e<charSetLen; e++){
                for(int r=0; r<charSetLen; r++){
                    for(int t=0; t<charSetLen; t++){
                        for(int y=0; y<charSetLen; y++){
                            for(int u=0; u<charSetLen; u++){
                                for(int o=0; o<charSetLen; o++){
                                    for(int p=0; p<charSetLen; p++){
                                        for(int a=0; a<charSetLen; a++){
                                            for(int s=0; s<charSetLen; s++){
                                                for(int d=0; d<charSetLen; d++){
                                                    for(int f=0; f<charSetLen; f++){
                                                        for(int g=0; g<charSetLen; g++){
                                                            hash  = charSetv.at(q);
                                                            hash += charSetv.at(w);
                                                            hash += charSetv.at(e);
                                                            hash += charSetv.at(r);
                                                            hash += charSetv.at(t);
                                                            hash += charSetv.at(y);
                                                            hash += charSetv.at(u);
                                                            hash += charSetv.at(o);
                                                            hash += charSetv.at(p);
                                                            hash += charSetv.at(a);
                                                            hash += charSetv.at(s);
                                                            hash += charSetv.at(d);
                                                            hash += charSetv.at(f);
                                                            hash += charSetv.at(g);
                                                            if(md5(hash)==getHash){
                                                                crack = 1;
                                                                goto result;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    /* result */
    result:
    if(crack==1){
        cout << hash << " <- hash is broken!" << endl;
    }else{
        cout << " hash has not been broken :( " << endl;
    }

    /* system pause */
    getch();
}
