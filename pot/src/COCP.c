/* This code is generated by pOt. */
#line 13 "cocp.mod"

#line 13 "cocp.mod"
#include <pOtRTL.h>
#line 13 "cocp.mod"
#include "Strings.h"
#line 13 "cocp.mod"
#include "COCT.h"
#line 13 "cocp.mod"
#include "COCQ.h"
#line 13 "cocp.mod"
#include "COCN.h"
#line 13 "cocp.mod"

#line 13 "cocp.mod"
#include "COCP.hi"
#line 13 "cocp.mod"

#line 13 "cocp.mod"

#line 13 "cocp.mod"

#line 13 "cocp.mod"

#line 13 "cocp.mod"
static struct {void *next, *vars[0x1];} pOt__gc_ptrs = {pOt_NIL,{
#line 13 "cocp.mod"
  pOt_NIL
#line 13 "cocp.mod"
}};
#line 13 "cocp.mod"
static struct {void *next, *vars[0x1];} pOt__gc_strs = {&pOt__gc_ptrs,{
#line 13 "cocp.mod"
  pOt_NIL
#line 13 "cocp.mod"
}};
#line 13 "cocp.mod"

#line 13 "cocp.mod"

#line 16 "cocp.mod"

#line 16 "cocp.mod"

#line 16 "cocp.mod"
extern void pOt_AssignPfx_COCP
#line 16 "cocp.mod"
#if pOt__ANSI_C
#line 16 "cocp.mod"
  (struct pOt__tag_3_COCT *pOt_x, pOt_BOOLEAN pOt_typchk)
#line 16 "cocp.mod"
#else
#line 16 "cocp.mod"
  (pOt_x, pOt_typchk)
#line 16 "cocp.mod"
  struct pOt__tag_3_COCT *pOt_x;
#line 16 "cocp.mod"
  pOt_BOOLEAN pOt_typchk;
#line 16 "cocp.mod"

#line 16 "cocp.mod"
#endif
#line 16 "cocp.mod"
{
#line 16 "cocp.mod"
  pOt_INTEGER pOt_np;
#line 16 "cocp.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 16 "cocp.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 16 "cocp.mod"

#line 16 "cocp.mod"
  switch((*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*pOt_x).pOt_typ))).pOt_form) {
  case 0:
  break;
#line 18 "cocp.mod"
  case 1:
#line 18 "cocp.mod"
  case 2:
#line 18 "cocp.mod"
  case 3:
#line 18 "cocp.mod"
  case 4:
#line 18 "cocp.mod"
    pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x0L],&pOt__str_td[0x1]))));
  break;
#line 19 "cocp.mod"
  case 5:
#line 19 "cocp.mod"
  case 6:
#line 19 "cocp.mod"
  case 7:
#line 19 "cocp.mod"
  case 8:
#line 19 "cocp.mod"
  case 13:
    pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x8L],&pOt__str_td[0x2]))));
    pOt_CTDenoter_COCN((struct pOt__tag_2_COCT*)((*pOt_x).pOt_typ),(pOt_INTEGER)(pOt_cslen_COCQ),&pOt_np);
    pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x10L],&pOt__str_td[0x2]))));
  break;
#line 23 "cocp.mod"
  case 9:
#line 23 "cocp.mod"
  case 14:
#line 23 "cocp.mod"
    pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x0L],&pOt__str_td[0x1]))));
  break;
#line 24 "cocp.mod"
  case 10:
  case 11:
#line 25 "cocp.mod"
  case 12:
#line 25 "cocp.mod"
  break;
#line 25 "cocp.mod"
  case 15:
#line 25 "cocp.mod"
    pOt_Prepend_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x18L],&pOt__str_td[0x23]))),(pOt_INTEGER)((*pOt_x).pOt_qoffs),&pOt_np);
#line 27 "cocp.mod"
    pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x40L],&pOt__str_td[0x14]))));
  break;
#line 28 "cocp.mod"
  case 16:
  break;
#line 29 "cocp.mod"
  case 17:
    if((pOt_typchk&&(((((*pOt_x).pOt_obj==pOt_wasderef_COCT))||((((*pOt_x).pOt_obj!=pOt_NIL))&&(((*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,(*pOt_x).pOt_obj))).pOt_mode==3))))))) {
      pOt_Prepend_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x5CL],&pOt__str_td[0x38]))),(pOt_INTEGER)((*pOt_x).pOt_qoffs),&pOt_np);
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x9CL],&pOt__str_td[0x14]))));
#line 34 "cocp.mod"
    } else {
#line 34 "cocp.mod"
      pOt_Prepend_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0xB8L],&pOt__str_td[0x23]))),(pOt_INTEGER)((*pOt_x).pOt_qoffs),&pOt_np);
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x9CL],&pOt__str_td[0x14]))));
#line 37 "cocp.mod"
    }
#line 37 "cocp.mod"
  break;
  default:;
#line 38 "cocp.mod"
    pOt__halt(__FILE__,__LINE__,0x10);
#line 38 "cocp.mod"
  }
#line 38 "cocp.mod"

#line 38 "cocp.mod"
pOt__Epilogue:;
#line 38 "cocp.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 38 "cocp.mod"
}
#line 38 "cocp.mod"

#line 38 "cocp.mod"

#line 42 "cocp.mod"

#line 42 "cocp.mod"

#line 42 "cocp.mod"
extern void pOt_AssignSfx_COCP
#line 42 "cocp.mod"
#if pOt__ANSI_C
#line 42 "cocp.mod"
  (struct pOt__tag_3_COCT *pOt_x, struct pOt__tag_3_COCT *pOt_y)
#line 42 "cocp.mod"
#else
#line 42 "cocp.mod"
  (pOt_x, pOt_y)
#line 42 "cocp.mod"
  struct pOt__tag_3_COCT *pOt_x, *pOt_y;
#line 42 "cocp.mod"

#line 42 "cocp.mod"
#endif
#line 42 "cocp.mod"
{
#line 42 "cocp.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 42 "cocp.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 42 "cocp.mod"

#line 42 "cocp.mod"
  switch((*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*pOt_x).pOt_typ))).pOt_form) {
  case 0:
  break;
#line 44 "cocp.mod"
  case 1:
  case 2:
#line 45 "cocp.mod"
  case 3:
#line 45 "cocp.mod"
  case 4:
#line 45 "cocp.mod"
  break;
#line 45 "cocp.mod"
  case 5:
#line 45 "cocp.mod"
  case 6:
#line 45 "cocp.mod"
  case 7:
#line 45 "cocp.mod"
  case 8:
#line 45 "cocp.mod"
  case 13:
#line 45 "cocp.mod"
    pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0xE0L],&pOt__str_td[0x1]))));
  break;
#line 46 "cocp.mod"
  case 9:
#line 46 "cocp.mod"
  case 14:
  break;
#line 47 "cocp.mod"
  case 10:
  case 11:
#line 48 "cocp.mod"
  case 12:
#line 48 "cocp.mod"
  break;
#line 48 "cocp.mod"
  case 15:
#line 48 "cocp.mod"
    pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0xE0L],&pOt__str_td[0x1]))));
  break;
#line 49 "cocp.mod"
  case 16:
  break;
#line 50 "cocp.mod"
  case 17:
#line 50 "cocp.mod"
    pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0xE0L],&pOt__str_td[0x1]))));
#line 52 "cocp.mod"
  break;
#line 52 "cocp.mod"
  default:;
#line 52 "cocp.mod"
    pOt__halt(__FILE__,__LINE__,0x10);
#line 52 "cocp.mod"
  }
#line 52 "cocp.mod"

#line 52 "cocp.mod"
pOt__Epilogue:;
#line 52 "cocp.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 52 "cocp.mod"
}
#line 52 "cocp.mod"

#line 52 "cocp.mod"

#line 57 "cocp.mod"

#line 57 "cocp.mod"

#line 57 "cocp.mod"
extern void pOt_ParamPfx_COCP
#line 57 "cocp.mod"
#if pOt__ANSI_C
#line 57 "cocp.mod"
  (pOt_Object_COCT pOt_f)
#line 57 "cocp.mod"
#else
#line 57 "cocp.mod"
  (pOt_f)
#line 57 "cocp.mod"
  pOt_Object_COCT pOt_f;
#line 57 "cocp.mod"

#line 57 "cocp.mod"
#endif
#line 57 "cocp.mod"
{
#line 57 "cocp.mod"
  pOt_INTEGER pOt_np;
#line 57 "cocp.mod"
  struct {void *next, *vars[0x2];} pOt__gc_ptrs;
#line 57 "cocp.mod"
  struct {void *next, *vars[0x1];} pOt__gc_strs;
#line 57 "cocp.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 57 "cocp.mod"
  pOt__gc_strs.next = &pOt__gc_ptrs;
#line 57 "cocp.mod"
  pOt__gc_ptrs.vars[0x1]=pOt_NIL;
#line 57 "cocp.mod"
  pOt__gc_strs.vars[0x0]=pOt_NIL;
#line 57 "cocp.mod"
  pOt__gc_ptrs.vars[0x0]=&pOt_f;
#line 57 "cocp.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)&pOt__gc_strs;
#line 57 "cocp.mod"

#line 57 "cocp.mod"
  if(( (*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_mode==3)) {
    switch((*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_typ))).pOt_form) {
#line 58 "cocp.mod"
    case 0:
    break;
#line 59 "cocp.mod"
    case 1:
#line 59 "cocp.mod"
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0xE8L],&pOt__str_td[0x13]))));
    break;
#line 60 "cocp.mod"
    case 2:
#line 60 "cocp.mod"
    case 3:
#line 60 "cocp.mod"
    case 4:
#line 60 "cocp.mod"
    case 5:
#line 60 "cocp.mod"
    case 6:
#line 60 "cocp.mod"
    case 7:
#line 60 "cocp.mod"
    case 8:
#line 60 "cocp.mod"
    case 9:
#line 60 "cocp.mod"
    case 10:
#line 60 "cocp.mod"
    case 11:
#line 60 "cocp.mod"
    case 12:
#line 60 "cocp.mod"
    case 13:
#line 60 "cocp.mod"
    case 14:
#line 60 "cocp.mod"
    case 15:
#line 60 "cocp.mod"
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x100L],&pOt__str_td[0x1]))));
    break;
#line 61 "cocp.mod"
    case 16:
#line 61 "cocp.mod"
      if(( (*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_typ))).pOt_BaseTyp))).pOt_form==1)) {
        pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x108L],&pOt__str_td[0x1B]))));
      } else {
#line 63 "cocp.mod"
        pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x128L],&pOt__str_td[0x13]))));
      }
#line 64 "cocp.mod"
    break;
    case 17:
#line 65 "cocp.mod"
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x140L],&pOt__str_td[0x1]))));
      pOt_CTDenoter_COCN((struct pOt__tag_2_COCT*)((*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_typ),(pOt_INTEGER)(pOt_cslen_COCQ),&pOt_np);
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x148L],&pOt__str_td[0x3]))));
#line 70 "cocp.mod"
    break;
#line 70 "cocp.mod"
    default:;
#line 70 "cocp.mod"
      pOt__halt(__FILE__,__LINE__,0x10);
#line 70 "cocp.mod"
    }
#line 70 "cocp.mod"
  } else {
    switch((*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_typ))).pOt_form) {
    case 0:
    case 1:
#line 73 "cocp.mod"
    case 2:
#line 73 "cocp.mod"
    case 3:
#line 73 "cocp.mod"
    case 4:
#line 73 "cocp.mod"
    break;
#line 73 "cocp.mod"
    case 5:
#line 73 "cocp.mod"
    case 6:
#line 73 "cocp.mod"
    case 7:
#line 73 "cocp.mod"
    case 8:
#line 73 "cocp.mod"
    case 13:
#line 73 "cocp.mod"
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x140L],&pOt__str_td[0x1]))));
      pOt_CTDenoter_COCN((struct pOt__tag_2_COCT*)((*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_typ),(pOt_INTEGER)(pOt_cslen_COCQ),&pOt_np);
#line 76 "cocp.mod"
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x10L],&pOt__str_td[0x2]))));
    break;
#line 77 "cocp.mod"
    case 9:
#line 77 "cocp.mod"
    case 14:
    break;
#line 78 "cocp.mod"
    case 10:
    case 11:
#line 79 "cocp.mod"
    case 12:
#line 79 "cocp.mod"
    break;
#line 79 "cocp.mod"
    case 15:
#line 79 "cocp.mod"
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x140L],&pOt__str_td[0x1]))));
      pOt_CTDenoter_COCN((struct pOt__tag_2_COCT*)((*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_typ),(pOt_INTEGER)(pOt_cslen_COCQ),&pOt_np);
#line 82 "cocp.mod"
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x150L],&pOt__str_td[0x2]))));
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x158L],&pOt__str_td[0x32]))));
    break;
#line 84 "cocp.mod"
    case 16:
#line 84 "cocp.mod"
      if(( (*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_typ))).pOt_BaseTyp))).pOt_form==1)) {
        pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x190L],&pOt__str_td[0x2C]))));
      } else {
#line 86 "cocp.mod"
        pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x158L],&pOt__str_td[0x32]))));
#line 88 "cocp.mod"
      }
#line 88 "cocp.mod"
    break;
#line 88 "cocp.mod"
    case 17:
#line 88 "cocp.mod"
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x140L],&pOt__str_td[0x1]))));
      pOt_CTDenoter_COCN((struct pOt__tag_2_COCT*)((*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_typ),(pOt_INTEGER)(pOt_cslen_COCQ),&pOt_np);
#line 91 "cocp.mod"
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x150L],&pOt__str_td[0x2]))));
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x1C4L],&pOt__str_td[0x32]))));
#line 94 "cocp.mod"
    break;
#line 94 "cocp.mod"
    default:;
#line 94 "cocp.mod"
      pOt__halt(__FILE__,__LINE__,0x10);
#line 94 "cocp.mod"
    }
#line 94 "cocp.mod"
  }

#line 95 "cocp.mod"
pOt__Epilogue:;
#line 95 "cocp.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 95 "cocp.mod"
}
#line 95 "cocp.mod"

#line 95 "cocp.mod"

#line 100 "cocp.mod"

#line 100 "cocp.mod"

#line 100 "cocp.mod"
extern void pOt_ParamSfx_COCP
#line 100 "cocp.mod"
#if pOt__ANSI_C
#line 100 "cocp.mod"
  (struct pOt__tag_3_COCT *pOt_ap, pOt_Object_COCT pOt_f)
#line 100 "cocp.mod"
#else
#line 100 "cocp.mod"
  (pOt_ap, pOt_f)
#line 100 "cocp.mod"
  struct pOt__tag_3_COCT *pOt_ap;
#line 100 "cocp.mod"
  pOt_Object_COCT pOt_f;
#line 100 "cocp.mod"

#line 100 "cocp.mod"
#endif
#line 100 "cocp.mod"
{
#line 100 "cocp.mod"
  pOt_INTEGER pOt_np;
#line 100 "cocp.mod"
  struct {void *next, *vars[0x2];} pOt__gc_ptrs;
#line 100 "cocp.mod"
  struct {void *next, *vars[0x1];} pOt__gc_strs;
#line 100 "cocp.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 100 "cocp.mod"
  pOt__gc_strs.next = &pOt__gc_ptrs;
#line 100 "cocp.mod"
  pOt__gc_ptrs.vars[0x1]=pOt_NIL;
#line 100 "cocp.mod"
  pOt__gc_strs.vars[0x0]=pOt_NIL;
#line 100 "cocp.mod"
  pOt__gc_ptrs.vars[0x0]=&pOt_f;
#line 100 "cocp.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)&pOt__gc_strs;
#line 100 "cocp.mod"

#line 100 "cocp.mod"
  if(( (*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_mode==3)) {
    switch((*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_typ))).pOt_form) {
#line 101 "cocp.mod"
    case 0:
#line 101 "cocp.mod"
    case 1:
#line 101 "cocp.mod"
    break;
    case 2:
#line 102 "cocp.mod"
    case 3:
#line 102 "cocp.mod"
    case 4:
#line 102 "cocp.mod"
    case 5:
#line 102 "cocp.mod"
    case 6:
#line 102 "cocp.mod"
    case 7:
#line 102 "cocp.mod"
    case 8:
#line 102 "cocp.mod"
    case 9:
#line 102 "cocp.mod"
    case 10:
#line 102 "cocp.mod"
    case 11:
#line 102 "cocp.mod"
    case 12:
#line 102 "cocp.mod"
    case 13:
#line 102 "cocp.mod"
    case 14:
#line 102 "cocp.mod"
    case 15:
#line 102 "cocp.mod"
    break;
    case 16:
#line 103 "cocp.mod"
      if(( (*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_typ))).pOt_BaseTyp))).pOt_form==1)) {
#line 105 "cocp.mod"
        pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x1FCL],&pOt__str_td[0x1]))));
        switch((*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*pOt_ap).pOt_typ))).pOt_form) {
#line 106 "cocp.mod"
        case 1:
#line 106 "cocp.mod"
        case 2:
#line 106 "cocp.mod"
        case 3:
#line 106 "cocp.mod"
        case 4:
#line 106 "cocp.mod"
        case 5:
#line 106 "cocp.mod"
        case 6:
#line 106 "cocp.mod"
        case 7:
#line 106 "cocp.mod"
        case 8:
#line 106 "cocp.mod"
        case 9:
#line 106 "cocp.mod"
          pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x204L],&pOt__str_td[0x2]))));
          pOt_CTSize_COCN((struct pOt__tag_2_COCT*)((*pOt_ap).pOt_typ),(pOt_INTEGER)(pOt_cslen_COCQ),&pOt_np);
#line 109 "cocp.mod"
          pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0xE0L],&pOt__str_td[0x1]))));
        break;
#line 110 "cocp.mod"
        case 15:
#line 110 "cocp.mod"
        case 16:
#line 110 "cocp.mod"
          if((((((*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*pOt_ap).pOt_typ))).pOt_form==16))&&(((*pOt_ap).pOt_intval==((pOt_LONGINT)(0)))))&&(((*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*pOt_ap).pOt_typ))).pOt_BaseTyp))).pOt_form==1)))) {
#line 113 "cocp.mod"
            pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x20CL],&pOt__str_td[0x4]))));
          } else if(((unsigned long)0!=((unsigned long)1<<pOt__rngchk_se(__FILE__,__LINE__, (*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*pOt_ap).pOt_typ))).pOt_BaseTyp))).pOt_form)&(pOt_SET)0x1EL))) {
            pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x218L],&pOt__str_td[0x4]))));
          } else {
            pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x224L],&pOt__str_td[0x4]))));
#line 119 "cocp.mod"
          }
#line 119 "cocp.mod"
        break;
#line 119 "cocp.mod"
        case 17:
#line 119 "cocp.mod"
          pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x230L],&pOt__str_td[0x4]))));
#line 121 "cocp.mod"
        break;
#line 121 "cocp.mod"
        default:;
#line 121 "cocp.mod"
          pOt__halt(__FILE__,__LINE__,0x10);
#line 121 "cocp.mod"
        }
#line 121 "cocp.mod"
      }
    break;
#line 122 "cocp.mod"
    case 17:
    break;
    default:;
#line 124 "cocp.mod"
      pOt__halt(__FILE__,__LINE__,0x10);
#line 124 "cocp.mod"
    }
#line 124 "cocp.mod"
  } else {
    switch((*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_typ))).pOt_form) {
    case 0:
    case 1:
#line 127 "cocp.mod"
    case 2:
#line 127 "cocp.mod"
    case 3:
#line 127 "cocp.mod"
    case 4:
#line 127 "cocp.mod"
    break;
#line 127 "cocp.mod"
    case 5:
#line 127 "cocp.mod"
    case 6:
#line 127 "cocp.mod"
    case 7:
#line 127 "cocp.mod"
    case 8:
#line 127 "cocp.mod"
    case 13:
#line 127 "cocp.mod"
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0xE0L],&pOt__str_td[0x1]))));
    break;
#line 128 "cocp.mod"
    case 9:
#line 128 "cocp.mod"
    case 14:
    break;
#line 129 "cocp.mod"
    case 10:
    case 11:
#line 130 "cocp.mod"
    case 12:
#line 130 "cocp.mod"
    break;
#line 130 "cocp.mod"
    case 15:
#line 130 "cocp.mod"
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0xE0L],&pOt__str_td[0x1]))));
    break;
#line 131 "cocp.mod"
    case 16:
#line 131 "cocp.mod"
      if(( (*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_typ))).pOt_BaseTyp))).pOt_form==1)) {
#line 133 "cocp.mod"
        if(((((*((struct pOt__tag_2_COCT*)pOt__nilchk(__FILE__,__LINE__,(*pOt_ap).pOt_typ))).pOt_form==16))&&(((*pOt_ap).pOt_intval==((pOt_LONGINT)(0)))))) {
          pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x23CL],&pOt__str_td[0x3]))));
        } else {
          pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x244L],&pOt__str_td[0x3]))));
#line 138 "cocp.mod"
        }
#line 138 "cocp.mod"
      } else {
#line 138 "cocp.mod"
        pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0xE0L],&pOt__str_td[0x1]))));
#line 140 "cocp.mod"
      }
#line 140 "cocp.mod"
    break;
#line 140 "cocp.mod"
    case 17:
#line 140 "cocp.mod"
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x24CL],&pOt__str_td[0x13]))));
      pOt_CTDName_COCN((struct pOt__tag_2_COCT*)((*((struct pOt__tag_1_COCT*)pOt__nilchk(__FILE__,__LINE__,pOt_f))).pOt_typ),(pOt_INTEGER)(pOt_cslen_COCQ),&pOt_np);
#line 141 "cocp.mod"
      pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0xE0L],&pOt__str_td[0x1]))));
#line 144 "cocp.mod"
    break;
#line 144 "cocp.mod"
    default:;
#line 144 "cocp.mod"
      pOt__halt(__FILE__,__LINE__,0x10);
#line 144 "cocp.mod"
    }
#line 144 "cocp.mod"
  }

#line 145 "cocp.mod"
pOt__Epilogue:;
#line 145 "cocp.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 145 "cocp.mod"
}
#line 145 "cocp.mod"

#line 145 "cocp.mod"

#line 148 "cocp.mod"

#line 148 "cocp.mod"

#line 148 "cocp.mod"
extern void pOt_ParamListPfx_COCP()
#line 148 "cocp.mod"
{
#line 148 "cocp.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 148 "cocp.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 148 "cocp.mod"

#line 148 "cocp.mod"
  pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x140L],&pOt__str_td[0x1]))));

#line 149 "cocp.mod"
pOt__Epilogue:;
#line 149 "cocp.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 149 "cocp.mod"
}
#line 149 "cocp.mod"

#line 149 "cocp.mod"

#line 152 "cocp.mod"

#line 152 "cocp.mod"

#line 152 "cocp.mod"
extern void pOt_NextParam_COCP()
#line 152 "cocp.mod"
{
#line 152 "cocp.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 152 "cocp.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 152 "cocp.mod"

#line 152 "cocp.mod"
  pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x1FCL],&pOt__str_td[0x1]))));

#line 153 "cocp.mod"
pOt__Epilogue:;
#line 153 "cocp.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 153 "cocp.mod"
}
#line 153 "cocp.mod"

#line 153 "cocp.mod"

#line 156 "cocp.mod"

#line 156 "cocp.mod"

#line 156 "cocp.mod"
extern void pOt_ParamListSfx_COCP()
#line 156 "cocp.mod"
{
#line 156 "cocp.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 156 "cocp.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 156 "cocp.mod"

#line 156 "cocp.mod"
  pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0xE0L],&pOt__str_td[0x1]))));

#line 157 "cocp.mod"
pOt__Epilogue:;
#line 157 "cocp.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 157 "cocp.mod"
}
#line 157 "cocp.mod"

#line 157 "cocp.mod"

#line 161 "cocp.mod"
struct pOt__tag_0_COCP {
#line 161 "cocp.mod"
  pOt__ArrTypDsc *td;
#line 161 "cocp.mod"
  pOt_CHAR arr[0x9L];
#line 161 "cocp.mod"
} ;
#line 161 "cocp.mod"
static pOt__ArrTypDsc pOt__td_0_COCP= {
#line 161 "cocp.mod"
  1,
#line 161 "cocp.mod"
  0x9L, sizeof(pOt_CHAR)
#line 161 "cocp.mod"
};
#line 161 "cocp.mod"

#line 161 "cocp.mod"

#line 161 "cocp.mod"
extern void pOt_Trap_COCP
#line 161 "cocp.mod"
#if pOt__ANSI_C
#line 161 "cocp.mod"
  (struct pOt__tag_3_COCT *pOt_x)
#line 161 "cocp.mod"
#else
#line 161 "cocp.mod"
  (pOt_x)
#line 161 "cocp.mod"
  struct pOt__tag_3_COCT *pOt_x;
#line 161 "cocp.mod"

#line 161 "cocp.mod"
#endif
#line 161 "cocp.mod"
{
#line 161 "cocp.mod"
  struct pOt__tag_0_COCP pOt_s;
#line 161 "cocp.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 161 "cocp.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 161 "cocp.mod"
  pOt__init_var((pOt__TypDsc**)&pOt_s,(pOt__TypDsc*)&pOt__td_0_COCP);
#line 161 "cocp.mod"

#line 161 "cocp.mod"
  pOt_FromLInt_Strings((pOt_LONGINT)((*pOt_x).pOt_intval),16,(pOt__ArrTypDsc**)&pOt_s);
  pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x264L],&pOt__str_td[0x1E]))));
  pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&pOt_s));
#line 163 "cocp.mod"
  pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0xE0L],&pOt__str_td[0x1]))));

#line 164 "cocp.mod"
pOt__Epilogue:;
#line 164 "cocp.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 164 "cocp.mod"
}
#line 164 "cocp.mod"

#line 164 "cocp.mod"
void pOt_COCP__body()
#line 166 "cocp.mod"
{
#line 166 "cocp.mod"
  static int pOt_COCP__loaded=0;
#line 166 "cocp.mod"
  if(!pOt_COCP__loaded){
#line 166 "cocp.mod"
    pOt_COCP__loaded=1;
#line 166 "cocp.mod"

#line 166 "cocp.mod"
    pOt_Strings__body();
#line 166 "cocp.mod"
    pOt_COCT__body();
#line 166 "cocp.mod"
    pOt_COCQ__body();
#line 166 "cocp.mod"
    pOt_COCN__body();
#line 166 "cocp.mod"

#line 166 "cocp.mod"
    pOt__gc_ptrs.next=pOt__gc_root;
#line 166 "cocp.mod"
    pOt__gc_root=(struct pOt__tag_gc_node*)&pOt__gc_strs;
#line 166 "cocp.mod"

#line 166 "cocp.mod"

#line 166 "cocp.mod"

#line 166 "cocp.mod"
  pOt__Epilogue:;
#line 166 "cocp.mod"
  }
#line 166 "cocp.mod"
}
#line 166 "cocp.mod"