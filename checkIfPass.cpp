#include <iostream>


using namespace std;

int main()
{
int imePredmeta;
float assignments=0;
float colloq1=0;
float colloq2=0;
float sumColloq=0;
float avgColloq=0;
float final=0;
float sumFinal=0;
float avgFinal=0;


cout << "Choose a subject: "<< endl << "1. PROGRAMMING I," << endl << "2. CONTEMPORARY SOFTWARE TOOLS,"<< endl << "3. MATHEMATICS I I," << endl << "4. INTRODUCTION TO COMPUTERS," << endl << "5. INTRODUCTION TO WEB"<< endl;
cin >> imePredmeta;


switch(imePredmeta) {

case 1:


        sumColloq= colloq1 + colloq2 + assignments;
        avgColloq= sumColloq / 3;

    cout << "Enter assignment grade in %: "<< endl;
    cin >> assignments;
    cout << "Enter first colloquium grade in %: "<< endl;
    cin >> colloq1;
    cout << "Enter second colloquium grade in %: "<< endl;
    cin >> colloq2;

    if (assignments > 49 && avgColloq > 49 && colloq1 > 34 && colloq2 > 34) {
            cout << "You passed with: " << avgColloq << " %" << endl;
       }
    else if (assignments > 49 && avgColloq < 50 ) {
        cout << "You didn't pass with colloquiums, enter your results for the finals" << endl;
        cin >> final;

        sumFinal= assignments + final;
        avgFinal= sumFinal / 2;

             if(avgFinal > 49){
               cout << "You passed with:  " << avgFinal << " %" << endl;
             }
                else {
                  cout << "You didn't pass, you have: " << avgFinal << " %" << endl;
               }

    }
    else if (assignments < 50){
        cout << "You didn't get the minimum requirement for assignments."<< endl;;
    }
break;

case 2:

        sumColloq= colloq1 + colloq2 + assignments;
        avgColloq= sumColloq / 3;

        cout << "Enter assignment grade in %: "<< endl;
        cin >> assignments;
        cout << "Enter first colloquium grade in %: "<< endl;
        cin >> colloq1;
        cout << "Enter second colloquium grade in %: "<< endl;
        cin >> colloq2;

    if (assignments > 49 && avgColloq > 49 && colloq1 > 34 && colloq2 > 34) {
            cout << "You passed with: " << avgColloq << " %" << endl;
       }
    else if (assignments > 49 && avgColloq < 50 ) {
        cout << "You didn't pass with colloquiums, enter your results for the finals" << endl;
        cin >> final;

        sumFinal= assignments + final;
        avgFinal= sumFinal / 2;

             if(avgFinal > 49){
               cout << "You passed with: " << avgFinal << " %" << endl;
             }
                else {
                  cout << "You didn't pass, you have: " << avgFinal << " %" << endl;
               }

    }
    else if (assignments < 50){
        cout << "You didn't get the minimum requirement for assignments."<< endl;;
    }
break;


case 4:

        sumColloq= colloq1 + colloq2 + assignments;
        avgColloq= sumColloq / 3;

        cout << "Enter assignment grade in %: "<< endl;
        cin >> assignments;
        cout << "Enter first colloquium grade in %: "<< endl;
        cin >> colloq1;
        cout << "Enter second colloquium grade in %: "<< endl;
        cin >> colloq2;

    if (assignments > 49 && avgColloq > 49 && colloq1 > 34 && colloq2 > 34) {
            cout << "You passed with: " << avgColloq << " %" << endl;
       }
    else if (assignments > 49 && avgColloq < 50 ) {
        cout << "You didn't pass with colloquiums, enter your results for the finals" << endl;
        cin >> final;

        sumFinal= assignments + final;
        avgFinal= sumFinal / 2;

             if(avgFinal > 49){
               cout << "You passed with: " << avgFinal << " %" << endl;
             }
                else {
                  cout << "You didn't pass, you have: " << avgFinal << " %" << endl;
               }

    }
    else if (assignments < 50){
        cout << "You didn't get the minimum requirement for assignments."<< endl;;
    }
break;
case 5:

        sumColloq= colloq1 + colloq2 + assignments;
        avgColloq= sumColloq / 3;


        cout << "Enter assignment grade in %: "<< endl;
        cin >> assignments;
        cout << "Enter first colloquium grade in %: "<< endl;
        cin >> colloq1;
        cout << "Enter second colloquium grade in %: "<< endl;
        cin >> colloq2;

    if (assignments > 49 && avgColloq > 49 && colloq1 > 34 && colloq2 > 34) {
            cout << "You passed with: " << avgColloq << " %" << endl;
       }
    else if (assignments > 49 && avgColloq < 50 ) {
        cout << "You didn't pass with colloquiums, enter your results for the finals" << endl;
        cin >> final;

        sumFinal= assignments + final;
        avgFinal= sumFinal / 2;

             if(avgFinal > 49){
               cout << "You passed with: " << avgFinal << " %" << endl;
             }
                else {
                  cout << "You didn't pass, you have: " << avgFinal << " %" << endl;
               }

    }
    else if (assignments < 50){
        cout << "You didn't get the minimum requirement for assignments."<< endl;;
    }
break;

case 3:

        cout << "Enter first colloquium grade in %: "<< endl;
        cin >> colloq1;
        cout << "Enter second colloquium grade in %: "<< endl;
        cin >> colloq2;

        sumColloq= colloq1 + colloq2;
        avgColloq= sumColloq / 2;

    if (avgColloq > 49 && colloq1 > 49 && colloq2 > 49) {
            cout << "You passed with: " << avgColloq << " %" << endl;
       }
    else if (avgColloq < 50) {
        cout << "You didn't pass with colloquiums, enter your results for the finals" << endl;
        cin >> final;

        sumFinal=final;
        avgFinal=sumFinal;


             if(avgFinal > 49){
               cout << "You passed with: " << avgFinal << " %" << endl;
             }
                else {
                  cout << "You didn't pass, you have: " << avgFinal << " %" << endl;
               }

    }
break;
}
    return 0;
}
