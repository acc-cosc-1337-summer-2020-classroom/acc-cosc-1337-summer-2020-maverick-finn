#include "dna.h"
#include<string>
using std::string;


/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/

double get_gc_content(std::string& dna)
{
    //temporarily writing return 0.5 just to test main.cpp
    return 0.5;
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
    string reverse;
    for(int i = 0; i<dna.size(); i++)
    {
        reverse += dna[dna.size() - i];
    }

    return reverse;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/


string get_dna_complement(string dna)
{
    string reverse = get_dna_complement(dna);
    string complement;

    for(int i = 0; i<reverse.size(); i++)
    {
        switch(reverse[i])
        {
            case 'A':
                complement += 'T';
                break;
            case 'T':
                complement += 'A';
                break;
            case 'C':
                complement += 'G';
                break;
            case 'G':
                complement += 'C';
                break;
            default:
                break;
        }

    }

    return complement;

}

