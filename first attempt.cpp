#include<iostream>
#include<math.h>
#include<string>
#include<vector>

using namespace std;
enum type
{
    SHIRT,
    JEANS,
    JACKET,
    SWEATER
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
    void addel(Clothing i)
    {
        testVector.push_back(i);
    };
    void goOut()
    {

        if (testVector.size() > 3)
        {
            cout << " You can go for a walk" << endl;
        }
        else { cout << " You can not go for a walk" << endl; };


    };
    void  kilktyp(Clothing j)
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
        cout << "Виведення відсортованого масиву" << endl;
        for (int i = 0; i < testVector.size(); i++)
        {
            cout << "Елемент з індексом " << i << " має значення " << testVector[i].size << endl;
        }
    };

};


int main() {
    Clothing shirt("shirt ", "forsummer", "for_city", "red", 43, type::SHIRT);
    Clothing jeans("jeans", "forcloudyr", "for_city", "blue", 44, type::JEANS);
    Clothing jacket("jacket", "forsunnnyr", "for_city", "red", 51, type::JACKET);
    Clothing sweater("sweater", "forrainy", "for_city", "red", 42, type::SWEATER);

    Wardrobe wardrobeObj1;
    wardrobeObj1.addel(shirt);
    wardrobeObj1.goOut();

    wardrobeObj1.addel(jeans);
    wardrobeObj1.goOut();

    wardrobeObj1.addel(jacket);
    wardrobeObj1.goOut();

    wardrobeObj1.addel(sweater);
    wardrobeObj1.goOut();

    wardrobeObj1.kilktyp(shirt);

    wardrobeObj1.Sort();


    system("pause");
    return 0;
};


