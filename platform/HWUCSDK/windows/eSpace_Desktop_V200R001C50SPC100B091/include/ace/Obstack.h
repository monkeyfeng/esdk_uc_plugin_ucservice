// -*- C++ -*-
//=============================================================================
/**
 *  @file    Obstack.h
 *
 *  $Id: Obstack.h 76320 2007-01-04 08:56:08Z johnnyw $
 *
 *  @author Douglas C. Schmidt <schmidt@cs.wustl.edu>
 */
//=============================================================================

#ifndef ACE_OBSTACK_H
#define ACE_OBSTACK_H
#include /**/ "ace/pre.h"

#include "ace/Obstack_T.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_SINGLETON_DECLARATION (ACE_Obstack_T <char>;)

typedef ACE_Obstack_T<char> ACE_Obstack;

ACE_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"
#endif /* ACE_OBSTACK_H */
