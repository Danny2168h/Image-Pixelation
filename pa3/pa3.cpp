#include "sqtree.h"

int main() {

  // read in image
  PNG orig;
  orig.readFromFile("images/orig/landscape.png");
 
 
  // use it to build a sqtree
  SQtree t(orig,5000000);

  // render the sqtree
  PNG pic = t.render();

  // write it out
  pic.writeToFile("images/out/output.png");

  t.~SQtree();

  return 0;
}
