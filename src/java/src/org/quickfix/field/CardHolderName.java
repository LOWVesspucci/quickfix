package org.quickfix.field; 
import org.quickfix.StringField; 
import java.util.Date; 

public class CardHolderName extends StringField 
{ 

  public CardHolderName() 
  { 
    super(488);
  } 
  public CardHolderName(String data) 
  { 
    super(488, data);
  } 
} 
