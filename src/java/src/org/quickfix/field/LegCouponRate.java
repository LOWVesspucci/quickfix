package org.quickfix.field; 
import org.quickfix.DoubleField; 
import java.util.Date; 

public class LegCouponRate extends DoubleField 
{ 

  public LegCouponRate() 
  { 
    super(615);
  } 
  public LegCouponRate(double data) 
  { 
    super(615, data);
  } 
} 
