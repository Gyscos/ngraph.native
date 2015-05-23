//
//  layout.h
//  layout++
//
//  Created by Andrei Kashcha on 5/21/15.
//  Copyright (c) 2015 Andrei Kashcha. All rights reserved.
//

#ifndef __layout____layout__
#define __layout____layout__

#include <vector>
#include "primitives.h"
#include "quadTree.h"

using namespace std;

class Layout {
  vector<Body> bodies;
  LayoutSettings settings;
  QuadTree tree;
  
  void accumulate();
  double integrate();
  void updateDragForce(Body *body);
  void updateSpringForce(Body *spring);
  
public:
  Layout(int *links, long size);
  bool step();
  size_t getBodiesCount();
  vector<Body> *getBodies() { return &bodies; };
};

#endif /* defined(__layout____layout__) */