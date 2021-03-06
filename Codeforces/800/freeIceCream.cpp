// A. Free Ice Cream
// time limit per test2 seconds
// memory limit per test256 megabytes
// inputstandard input
// outputstandard output
// After their adventure with the magic mirror Kay and Gerda have returned home and sometimes give free ice cream to kids in the summer.

// At the start of the day they have x ice cream packs. Since the ice cream is free, people start standing in the queue before Kay and Gerda's house even in the night. Each person in the queue wants either to take several ice cream packs for himself and his friends or to give several ice cream packs to Kay and Gerda (carriers that bring ice cream have to stand in the same queue).

// If a carrier with d ice cream packs comes to the house, then Kay and Gerda take all his packs. If a child who wants to take d ice cream packs comes to the house, then Kay and Gerda will give him d packs if they have enough ice cream, otherwise the child will get no ice cream at all and will leave in distress.

// Kay wants to find the amount of ice cream they will have after all people will leave from the queue, and Gerda wants to find the number of distressed kids.

#include <iostream>
#include <sstream>
using namespace std;
int main(){
    //?Recibir inputs
    int n, nIceCreams, inputInt = 0, disa = 0;
    string input, number;
    cin >> n >> nIceCreams;
    //?Se usa getline para obtener todo
    for(int i = 0; i <= n; i++){
        getline(cin,input);  
        //?Si tiene un mas se suma si no se resta             
        if(input[0] == '+'){
            //!Aiuda, esto es para parsear de str a int pero debe de exisitir una mejor manera
            number = input.substr(2,input.length()-1);
            stringstream numbStream(number);  
            numbStream >> inputInt;
            nIceCreams += inputInt;
        }
        else if(input[0] == '-'){
            number = input.substr(2,input.length()-1);
            stringstream numbStream(number);  
            numbStream >> inputInt; 
            //?Solo da helado si hay la cantidad que solicito
            if(inputInt <= nIceCreams)nIceCreams -= inputInt;
            else disa++;
        }
    }
    cout << nIceCreams << " " << disa << endl;
    return 0;
}
