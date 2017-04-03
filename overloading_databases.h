#ifndef OVERLOADING_DATABASES_H_INCLUDED
#define OVERLOADING_DATABASES_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

class data{
public:
    int id = 0, denda, tunjanga, gaji_pokok;
    float bonus;
    string nama;

public:
    void setData(int id, float bonus, int denda, int tunjanga, int gaji_pokok, string nama){
        this->id = id;
        this->bonus = bonus;
        this->tunjanga = tunjanga;
        this->gaji_pokok = gaji_pokok;
        this->nama = nama;
    }
};

class databases{
public:
    void get(data temp[]) { // bagian 1
        while(true) {
            cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
            temp++;
            if(temp->id == 0) {
                break;
            }
        }
    }

    void get(int id, data temp[]) { // bagian 2
        while(true) {
            if(id == temp->id) {
                cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                temp++;
            }
            else if(temp->id == 0) {
                break;
            }
            temp++;
        }
    }

    void get(string keyName, string value, data temp[]) { // bagian 3
        if(keyName == "nama") {
            while (true) {
                if(temp->id == 0) {
                    break;
                }
                else if(value == temp->nama){
                    cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                    temp++;
                }
                else {
                    temp++;
                }
            }
        }

        else {
            cout << "Ojok Ngawur nek gisi" << endl;
        }
    }

    void get(string keyName, int value, data temp[]) { // bagian 3
        if(keyName == "id") {
                while (true) {
                if(temp->id == 0) {
                    break;
                }
                else if(value == temp->id){
                    cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                    temp++;
                }
                else {
                    temp++;
                }
            }
        }

        else if(keyName == "bonus") {
                while (true) {

                if(temp->id == 0) {
                    break;
                }
                else if(value == temp->bonus){
                    cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                    temp++;
                }
                else {
                    temp++;
                }
            }
        }

        else if(keyName == "denda") {
                while (true) {
                if(temp->id == 0) {
                    break;
                }
                else if(value == temp->denda){
                    cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                    temp++;
                    break;
                }
                else {
                    temp++;
                }
            }
        }

        else if(keyName == "tunjangan") {
                while (true) {

                if(temp->id == 0) {
                    break;
                }

                else if(value == temp->tunjanga){
                    cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                    temp++;
                }
                else
                    temp++;
            }
        }

        else if(keyName == "gaji_pokok") {
                while (true) {
                if(temp->id == 0) {
                    break;
                }
                else if(value == temp->gaji_pokok){
                    cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                    temp++;
                    break;
                }
                else
                    temp++;
            }
        }

        else {
            cout << "Ojok Ngawur nek gisi" << endl;
        }
    }

    void get(string keyName, string penenda, int value, data temp[]) { // bagian 4

        if(keyName == "bonus") {
            if(penenda == ">=") {
                while (true) {
                    if(temp->id == 0) {
                        break;
                    }
                    else if(value <= temp->bonus){
                        cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                        temp++;
                    }
                    else {
                        temp++;
                    }
                }
            }
            else if (penenda == "<=") {
                while (true) {
                    if(temp->id == 0) {
                        break;
                    }
                    else if(value >= temp->bonus){
                        cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                        temp++;
                    }
                    else {
                        temp++;
                    }
                }
            }
            else {
                cout << "Maaf anda melewati batas" << endl;
            }
        }

        else if(keyName == "denda") {
            if(penenda == ">=") {
                while (true) {
                    if(temp->id == 0) {
                        break;
                    }
                    else if(value <= temp->denda){
                        cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                        temp++;
                        break;
                    }
                    else {
                        temp++;
                    }
                }
            }
            else if(penenda == "<=") {
                while (true) {
                    if(temp->id == 0) {
                        break;
                    }
                    else if(value >= temp->denda){
                        cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                        temp++;
                        break;
                    }
                    else {
                        temp++;
                    }
                }
            }
            else {
                cout << "Maaf anda melewati batas" << endl;
            }
        }

        else if(keyName == "tunjangan") {
            if(penenda == ">=") {
                while (true) {
                    if(temp->id == 0) {
                        break;
                    }
                    else if(value <= temp->tunjanga){
                        cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                        temp++;
                    }
                    else
                        temp++;
                }
            }
            else if(penenda == "<=") {
                while (true) {
                    if(temp->id == 0) {
                        break;
                    }
                    else if(value <= temp->tunjanga){
                        cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                        temp++;
                    }
                    else
                        temp++;
                }
            }
            else {
                cout << "Maaf anda melewati batas" << endl;
            }
        }

        else if(keyName == "gaji_pokok") {
            if(penenda == ">=") {
                while (true) {
                    if(temp->id == 0) {
                        break;
                    }
                    else if(value <= temp->gaji_pokok){
                        cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                        temp++;
                        break;
                    }
                    else
                        temp++;
                }
            }
            else if(penenda == "<=") {
                while (true) {
                    if(temp->id == 0) {
                        break;
                    }
                    else if(value >= temp->gaji_pokok){
                        cout << "Id : "<< temp->id << ", Bonus :" << temp->bonus << ", Tunjangan : "<< temp->tunjanga << ", Gaji : "<< temp->gaji_pokok << ", Nama : "<< temp->nama << endl;
                        temp++;
                        break;
                    }
                    else
                        temp++;
                }
            }
            else {
                cout << "Maaf anda melewati batas" << endl;
            }
        }
        else {
            cout << "Ojok Ngawur nek gisi" << endl;
        }
    }
};

#endif // OVERLOADING_DATABASES_H_INCLUDED
