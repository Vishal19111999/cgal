// Copyright (c) 2005  INRIA Sophia-Antipolis (France) 
// All rights reserved.
//
// Authors : Monique Teillaud <Monique.Teillaud@sophia.inria.fr>
//           Sylvain Pion     <Sylvain.Pion@sophia.inria.fr>
// 
// Partially supported by the IST Programme of the EU as a Shared-cost
// RTD (FET Open) Project under Contract No  IST-2000-26473 
// (ECG - Effective Computational Geometry for Curves and Surfaces) 
// and a STREP (FET Open) Project under Contract No  IST-006413 
// (ACS -- Algorithms for Complex Shapes)

// file : include/CGAL/Circular_arc_traits.h

#ifndef CGAL_CURVED_KERNEL_CIRCULAR_ARC_TRAITS_H
#define CGAL_CURVED_KERNEL_CIRCULAR_ARC_TRAITS_H

#include <CGAL/basic.h>
#include <cassert>
#include <CGAL/global_functions_on_circular_arcs_2.h>

namespace CGAL {

/// Traits class for CGAL::Arrangement_2 (and similar) based on a CircularKernel.

template < typename CircularKernel >
class Circular_arc_traits {

  CircularKernel ck;

public:

  typedef CircularKernel Kernel;
  typedef typename CircularKernel::Circular_arc_2  Curve_2;
  typedef typename CircularKernel::Circular_arc_2  X_monotone_curve_2;

  typedef typename CircularKernel::Circular_arc_point_2      Point;
  typedef typename CircularKernel::Circular_arc_point_2      Point_2;

  typedef CGAL::Tag_false                        Has_left_category;
  typedef CGAL::Tag_false 			 Has_merge_category;

  Circular_arc_traits(const CircularKernel &k = CircularKernel())
    : ck(k) {}

  typedef typename CircularKernel::Compare_x_2            Compare_x_2;
  typedef typename CircularKernel::Compare_xy_2           Compare_xy_2;
  typedef typename CircularKernel::Compare_y_at_x_2       Compare_y_at_x_2;
  typedef typename CircularKernel::Compare_y_to_right_2   Compare_y_at_x_right_2;
  typedef typename CircularKernel::Construct_Circular_max_vertex_2 Construct_max_vertex_2;
  typedef typename CircularKernel::Construct_Circular_min_vertex_2 Construct_min_vertex_2;     
  typedef typename CircularKernel::Equal_2                Equal_2;
  typedef typename CircularKernel::Make_x_monotone_2      Make_x_monotone_2;
  typedef typename CircularKernel::Split_2                Split_2;
  typedef typename CircularKernel::Intersect_2 Intersect_2;
  typedef typename CircularKernel::Is_vertical_2 Is_vertical_2;
  
  Compare_x_2 compare_x_2_object() const
  { return ck.compare_x_2_object(); }

  Compare_xy_2 compare_xy_2_object() const
  { return ck.compare_xy_2_object(); }

  Compare_y_at_x_2 compare_y_at_x_2_object() const 
  { return ck.compare_y_at_x_2_object(); }

  Compare_y_at_x_right_2 compare_y_at_x_right_2_object() const 
  { return ck.compare_y_to_right_2_object(); }

  Equal_2 equal_2_object() const
  { return ck.equal_2_object(); }

  Make_x_monotone_2 make_x_monotone_2_object() const
  { return ck.make_x_monotone_2_object(); }

  Split_2 split_2_object() const
  { return ck.split_2_object(); }

  Intersect_2 intersect_2_object() const
    { return ck.intersect_2_object(); }
    
  Construct_max_vertex_2 construct_max_vertex_2_object() const
    { return ck.construct_circular_max_vertex_2_object(); }
       
  Construct_min_vertex_2 construct_min_vertex_2_object() const
    { return ck.construct_circular_min_vertex_2_object(); }
       
  Is_vertical_2 is_vertical_2_object() const
    { return ck.is_vertical_2_object();  }


};

} // namespace CGAL

#endif // CGAL_CURVED_KERNEL_CIRCULAR_ARC_TRAITS_H
