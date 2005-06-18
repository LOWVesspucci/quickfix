<!--
*****************************************************************************
  Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.

  This file is part of the QuickFIX FIX Engine

  This file may be distributed under the terms of the quickfixengine.org
  license as defined by quickfixengine.org and appearing in the file
  LICENSE included in the packaging of this file.

  This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
  WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.

  See http://www.quickfixengine.org/LICENSE for licensing information.

  Contact ask@quickfixengine.org if any conditions of this licensing are
  not clear to you.
*****************************************************************************
-->

<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
 <xsl:output method="text" encoding="UTF-8"/>

 <xsl:template match="text()"/>

 <xsl:template match="/">/* -*- C++ -*- */
 <xsl:copy-of select="document('COPYRIGHT.xml')"/>
#ifndef FIX<xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/>_MESSAGES_H
#define FIX<xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/>_MESSAGES_H

#include "Message.h"
#include "Group.h"
<xsl:apply-templates/>
}

#endif //FIX<xsl:value-of select="//fix/@major"/><xsl:value-of select="//fix/@minor"/>_MESSAGES_H&#013;
</xsl:template>

 <xsl:template match="fix">
namespace FIX<xsl:value-of select="@major"/><xsl:value-of select="@minor"/>
{<xsl:apply-templates/></xsl:template>

 <xsl:template match="header">
  class Header : public FIX::Header
  {
  public:<xsl:apply-templates/>
  };</xsl:template>
 
 <xsl:template match="trailer">
  
  class Trailer : public FIX::Trailer
  {
  public:<xsl:apply-templates/>
  };</xsl:template>

 <xsl:template match="messages">
  
  class Message : public FIX::Message
  {
  public: 
    Message( const FIX::MsgType&amp; msgType ) 
    : FIX::Message(
      FIX::BeginString("FIX.<xsl:value-of select
      ="//fix/@major"/>.<xsl:value-of select="//fix/@minor"/>"),msgType ) {}   

    Header&amp; getHeader() { return (Header&amp;)m_header; }
    const Header&amp; getHeader() const { return (Header&amp;)m_header; }
    <xsl:for-each select="//fix/header/field">
    FIELD_SET(m_header, FIX::<xsl:value-of select="@name"/>);</xsl:for-each>
  };<xsl:apply-templates/></xsl:template>

 <xsl:template match="messages/message">
  <xsl:if test="(position()!=2)">
  };</xsl:if>

  class <xsl:value-of select="@name"/> : public Message
  {
  public: 
    <xsl:value-of select="@name"/>() : Message(MsgType()) {}
    <xsl:value-of select="@name"/>(const Message&amp; m) : Message(m) {}
    static FIX::MsgType MsgType() { return FIX::MsgType("<xsl:value-of select="@msgtype"/>"); }
  <xsl:call-template name="constructor-def"/>
  <xsl:apply-templates/>
  </xsl:template>

  <xsl:template name="constructor-def">
   <xsl:for-each select="field[@required='Y']">
    <xsl:if test="(position()=1)">  //
    <xsl:value-of select="../@name"/>(</xsl:if>
      const FIX::<xsl:value-of select="@name"/>&amp; a<xsl:value-of select=
      "@name"/>
    <xsl:if test="(position()!=last())">,</xsl:if>
    <xsl:if test="(position()=last())"> )
    : Message(FIX::MsgType("<xsl:value-of select="../@msgtype"/>"))
    <xsl:call-template name="constructor-impl"/>
    </xsl:if>
   </xsl:for-each>
  </xsl:template>

  <xsl:template name="constructor-impl">
    {<xsl:for-each select="../field[@required='Y']">
      set(a<xsl:value-of select="@name"/>);</xsl:for-each>
    }
  </xsl:template>

  <xsl:template name="group-constructor-impl">FIX::message_order(<xsl:apply-templates mode="group"/>0)){}</xsl:template>  
  <xsl:template mode="group" match="group/field"><xsl:variable name="name" select="@name"/><xsl:value-of select="//fix/fields/field[@name=$name]/@number"/>,</xsl:template>
  <xsl:template mode="group" match="group/component"><xsl:variable name="name" select="@name"/><xsl:for-each select="//fix/components/component[@name=$name]"><xsl:for-each select="field"><xsl:variable name="field_name" select="@name"/><xsl:value-of select="//fix/fields/field[@name=$field_name]/@number"/>,</xsl:for-each></xsl:for-each></xsl:template>

  <xsl:template name="group">
    FIELD_SET(*this, FIX::<xsl:value-of select="@name"/>);
    class <xsl:value-of select="@name"/> : public FIX::Group
    {
    public:
    <xsl:variable name="name" select="@name"/>
    <xsl:variable name="field_name" select="field/@name"/>
    <xsl:choose>
      <xsl:when test="string-length(field[1]/@name) > 0">
        <xsl:value-of select="@name"/>() : FIX::Group(<xsl:value-of select="//fix/fields/field[@name=$name]/@number"/>, <xsl:value-of select="//fix/fields/field[@name=$field_name]/@number"/>, <xsl:call-template name="group-constructor-impl"/>
      </xsl:when>
      <xsl:when test="string-length(component[1]/@name) > 0">
        <xsl:variable name="component_name" select="component[1]/@name"/>
        <xsl:variable name="component_field_name" select="//fix/components/component[@name=$component_name]/field[1]/@name"/>
        <xsl:value-of select="@name"/>() : FIX::Group(<xsl:value-of select="//fix/fields/field[@name=$name]/@number"/>, <xsl:value-of select="//fix/fields/field[@name=$component_field_name]/@number"/>, <xsl:call-template name="group-constructor-impl"/>
      </xsl:when>
    </xsl:choose>
    <xsl:for-each select="field">
      FIELD_SET(*this, FIX::<xsl:value-of select=
      "@name"/>);</xsl:for-each>
    <xsl:for-each select="group"><xsl:call-template name="group"/></xsl:for-each>
    <xsl:for-each select="component">
      <xsl:variable name="component_name" select="@name"/>
      <xsl:for-each select="//fix/components/component[@name=$component_name]/field">
        FIELD_SET(*this, FIX::<xsl:value-of select="@name"/>);</xsl:for-each>
      <xsl:for-each select="//fix/components/component[@name=$component_name]/group">
        <xsl:call-template name="group"/>
      </xsl:for-each>      
    </xsl:for-each>
    };</xsl:template>

 <xsl:template match="header/field">
    FIELD_SET(*this, FIX::<xsl:value-of select=
    "@name"/>);</xsl:template>
 <xsl:template match="trailer/field">
    FIELD_SET(*this, FIX::<xsl:value-of select=
    "@name"/>);</xsl:template>
 <xsl:template match="messages/message/field">
    FIELD_SET(*this, FIX::<xsl:value-of select=
    "@name"/>);</xsl:template>
 <xsl:template match="messages/message/component">
   <xsl:variable name="name" select="@name"/>
   <xsl:for-each select="//fix/components/component[@name=$name]/field">
    FIELD_SET(*this, FIX::<xsl:value-of select="@name"/>);</xsl:for-each>
   <xsl:for-each select="//fix/components/component[@name=$name]/group">
     <xsl:call-template name="group"/>
   </xsl:for-each>
 </xsl:template>
 <xsl:template match="component/group"></xsl:template>
 <xsl:template match="group">
    <xsl:call-template name="group"/>
 </xsl:template> 

 <xsl:template match="fields">
  };</xsl:template>

</xsl:stylesheet>
