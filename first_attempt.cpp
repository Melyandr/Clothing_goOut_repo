#include<iostream>
#include<math.h>
#include<string>
#include<vector>

using namespace std;

enum type
{
    shirt,
    jeans,
    jacket,
    sweater
};

class Clothing
{
public: string name, description, location, colour;
public:     int  size;
      type atype;


      Clothing(string name, string description, string location, string colour, int size, type atype)
      {
          this->name = name;
          this->description = description;
          this->location = location;
          this->colour = colour;
          this->size = size;
          this->atype = atype;
      };

};

class Wardrobe
{
public:
    vector<Clothing> testVector;
    Wardrobe() { }
    Wardrobe(vector <Clothing> testVector)
    {
        this->testVector = testVector;
    };
    void AdDel(Clothing i)
    {
        testVector.push_back(i);
    };
    void  GoOut()
    {

        if (testVector.size() > 3)
        {
            cout << " You can go for a walk" << endl;
        }
        else { cout << " You can not go for a walk" << endl; };


    };
    void  KilkType(Clothing j)
    {
        cout << "type of clouthing" << endl;
        for (int i = 0; i < testVector.size(); i++)
        {

            cout << testVector[i].atype << endl;
        };


    };
    void Sort()
    {
       //сортування бульбашкою
        cout << "Sorted by size:" << endl;
        int i, j;
        for (i = 0; i < testVector.size() - 1; i++)

            // Last i elements are already
            // in place
            for (j = 0; j < testVector.size() - i - 1; j++)
                if (testVector[j].size > testVector[j + 1].size)
                    swap(testVector[j], testVector[j + 1]);



        // виведення відсортованого масиву
        cout << "Sorted array output" << endl;
        for (int i = 0; i < testVector.size(); i++)
        {
            cout << "element's index " << i << " has value " << testVector[i].size << endl;
        }
    };

};


int main() {
    Clothing shirt("shirt ", "forsummer", "for_city", "red", 43, type::shirt);
    Clothing jeans("jeans", "forcloudyr", "for_city", "blue", 44, type::jeans);
    Clothing jacket("jacket", "forsunnnyr", "for_city", "red", 51, type::jacket);
    Clothing sweater("sweater", "forrainy", "for_city", "red", 42, type::sweater);

    Wardrobe wardrobeObj1;
    wardrobeObj1.AdDel(shirt);
    wardrobeObj1.GoOut();

    wardrobeObj1.AdDel(jeans);
    wardrobeObj1.GoOut();

    wardrobeObj1.AdDel(jacket);
    wardrobeObj1.GoOut();

    wardrobeObj1.AdDel(sweater);
    wardrobeObj1.GoOut();

    wardrobeObj1.KilkType(shirt);

    wardrobeObj1.Sort();


    
    return 0;
};




