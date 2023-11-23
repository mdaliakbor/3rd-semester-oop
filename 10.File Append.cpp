#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    fstream file;
    ifstream ifile("E:\Ali Akbor\file.txt",ios::in);
    ofstream ofile("E:\Ali Akbor\file2.txt",ios::out | ios::app);
    if(!ifile.is_open()){
        cout<<"file not Found";
    }else{
        ofile<<ifile.rdbuf();
    }
    string word;
    file.open("E:\Ali Akbor\file2.txt");
    while(file>>word){
        cout<<word<<"";
    }
    return 0;
}
