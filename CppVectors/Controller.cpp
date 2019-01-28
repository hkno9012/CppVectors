//
//  Controller.cpp
//  CppVectors
//
//  Created by Knott, Hunter on 1/28/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#include "Controller.hpp"
#include <vector>

void Controller :: start()
{
    vector<int> numbers {1, 2, 3, 4, 5};
    vector<string> shout {"fus", "ro", "dah"};
    
    for(int i = 0; i < 5; i++)
    {
        cout << numbers[i] << endl;
    }
    
    cout << endl;
    
    for(int i = 0; i < 3; i++)
    {
        cout << shout[i] << endl;
    }
    
    cout << endl;
    
    string spam[3];
    for(int j = 0; j < shout.size(); j++)
    {
        spam[j] = shout[j];
        
        cout << spam[j] << endl;
    }
}

