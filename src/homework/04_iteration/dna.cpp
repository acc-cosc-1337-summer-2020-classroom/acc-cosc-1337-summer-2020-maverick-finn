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

double get_gc_content(const std::string& dna)
{
    double counter = 0.0;

    for(int i=0; i<dna.size(); i++)
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        {
            counter += 1;
        }
    }

    double gc_content = counter / dna.size();
    return counter / dna.size();
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
        reverse += dna[dna.size() - i - 1];
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
    string reverse = get_reverse_string(dna);
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

