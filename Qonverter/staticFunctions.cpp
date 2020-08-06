#include "mainwindow.h"

QString MainWindow::convertDecimalToBinary(lli number) {
    // a string to store binary number
    QString binaryNumber;

    // counter for binary array
    int counter = 0;

    for (counter = 0; number > 0; counter++){
        binaryNumber.push_back( char((number % 2) + 48) );
        //binaryNumber[counter] = number % 2;
        number /= 2;
    }

    return MainWindow::reverseString(binaryNumber);
}

QString MainWindow::convertDecimalToOctal(lli number) {
    // a string to store octal number
    QString octalNumber;

    // counter for octal array
    int counter = 0;

    for (counter = 0; number > 0; counter++){
        octalNumber.push_back( char( (number % 8) + 48) );
        number /= 8;
    }

    return MainWindow::reverseString(octalNumber);
}

QString MainWindow::convertDecimalToHexadecimal(lli number) {
    // a string to store hexadecimal number
    QString hexaDecimalNum;

    // counter for hexadecimal number array
    int counter = 0;
    while(number != 0){
        // temporary variable to store remainder
        int temp  = 0;

        // storing remainder in temp variable.
        temp = number % 16;

        // check if temp < 10
        if(temp < 10){
            // add numbers
            hexaDecimalNum.push_back( char( temp + 48) );
            counter++;
        }
        else{
            // add caps alphabets
            hexaDecimalNum.push_back( char( temp + 55) );
            counter++;
        }

        number /= 16;
    }

    return MainWindow::reverseString(hexaDecimalNum);
}

QString MainWindow::convertBinaryToDecimal(lli number) {
    lli dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    lli base = 1;
    // temp variable
    lli temp = number;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return  QString::number(dec_value);
}

QString MainWindow::convertOctalToDecimal(lli number) {
    lli dec_value = 0;

    // Initializing base value to 1, i.e 8^0
    lli base = 1;

    lli temp = number;
    while (temp) {

        // Extracting last digit
        int last_digit = temp % 10;
        temp = temp / 10;

        // Multiplying last digit with appropriate
        // base value and adding it to dec_value
        dec_value += last_digit * base;

        base = base * 8;
    }

    return QString::number(dec_value);
}

QString MainWindow::convertOctalToHexadecimal(lli number) {

    QString converted0;
    converted0 = convertOctalToDecimal(number);
    QString hexadecimal;
    hexadecimal = convertDecimalToHexadecimal( converted0.toLong() );

    return hexadecimal;
}

QString MainWindow::convertHexadecimalToDecimal(QString hexNumber) {
    int size = hexNumber.size();

    // Initializing base value to 1, i.e 16^0
    lli base = 1;
    //lli dec_value = 0;
qlonglong dec_value = 0;
    // Extracting characters as digits from last character
    for (int counter = size-1; counter >= 0; counter--){
        // if character lies in '0'-'9', converting
        // it to integral 0-9 by subtracting 48 from
        // ASCII value.
        if (hexNumber.at(counter) >= '0' && hexNumber.at(counter) <= '9'){
            dec_value += ( hexNumber[counter].unicode()  - 48)*base;


            // incrementing base by power
            base *= 16;
        }

        // if character lies in 'A'-'F' , converting
        // it to integral 10 - 15 by subtracting 55
        // from ASCII value
        else if (hexNumber.at(counter) >= 'A' && hexNumber.at(counter) <= 'F') {
            dec_value += (hexNumber[counter].unicode() - 55)*base;

            // incrementing base by power
            base *= 16;
        }
    }

    return QString::number(dec_value);
}

QString MainWindow::convertHexadecimalToOctal(QString number) {

    QString converted0;
    converted0 = convertHexadecimalToDecimal( number );
    QString octal;
    octal = convertDecimalToOctal( converted0.toLong() );

    return octal;
}

QString MainWindow::convertHexadecimalToBinary(QString number) {

    qlonglong convert0;
    convert0 = convertHexadecimalToDecimal( number ).toInt();
    qlonglong convert1;
    convert1 = convertDecimalToBinary( convert0 ).toInt();

    return QString::number(convert1);

}

QString MainWindow::convertOctalToBinary(lli number) {

    qlonglong convert0;
    convert0 = convertOctalToDecimal( number ).toInt();
    qlonglong convert1;
    convert1 = convertDecimalToBinary( convert0 ).toInt();

    return QString::number(convert1);

}

QString MainWindow::convertBinaryToOctal(lli number) {

    qlonglong convert0;
    convert0 = convertBinaryToDecimal(number).toInt();
    qlonglong convert1;
    convert1 = convertDecimalToOctal(convert0).toInt();

    return QString::number( convert1 );
}

QString MainWindow::convertBinaryToHexadecimal(lli number) {

    qlonglong convert0;
    convert0 = convertBinaryToDecimal(number).toInt();
    QString convert1;
    convert1 = convertDecimalToHexadecimal(convert0);

    return convert1;

}

QString MainWindow::reverseString(QString stringToReverse) {
    int stringSize = stringToReverse.size();
    QString newString = stringToReverse;

    for(int k = 0; k < stringSize / 2; k++) {

        newString[k] = stringToReverse[stringSize - 1 - k];
        newString[stringSize - 1 - k] = stringToReverse[k];

    }

    return newString;
}
