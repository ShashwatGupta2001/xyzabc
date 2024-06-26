#ifndef GEN_3AC_HPP
#define GEN_3AC_HPP

#include <string>
#ifndef AST_HPP
#include "ast.hpp"
#endif
using namespace std;

/*********************************** DATA STORAGE STRUCTURES ******************************************************/

// All classes and structures that you want to declare should go here.

/*********************************** DATA STORAGE STRUCTURES ******************************************************/

/*********************************** FUNCTION DECLARATIONS ********************************************************/

// All functions that you want to declare should go here.

// Call this function to generate 3AC IR from the root node of the Parse Tree
int make3AC(ASTNode* root);
// int generate3AC(ASTNode* root);
int typeset_3ac_code(string code);


/*********************************** FUNCTION DECLARATIONS ********************************************************/

#endif // GEN_3AC_CPP
