/* This code is generated by pOt. */
#line 12 "cocq.mod"

#line 12 "cocq.mod"
#include <pOtRTL.h>
#line 12 "cocq.mod"
#include "Strings.h"
#line 12 "cocq.mod"
#include "COCS.h"
#line 12 "cocq.mod"
#include "COCT.h"
#line 12 "cocq.mod"
#include "COCO.h"
#line 12 "cocq.mod"

#line 12 "cocq.mod"
#include "COCQ.hi"
#line 12 "cocq.mod"

#line 12 "cocq.mod"

#line 12 "cocq.mod"
struct pOt__tag_0_COCQ {
#line 12 "cocq.mod"
  pOt__ArrTypDsc *td;
#line 12 "cocq.mod"
  pOt_CHAR arr[0x1000L];
#line 12 "cocq.mod"
} ;
#line 12 "cocq.mod"
pOt__ArrTypDsc pOt__td_0_COCQ= {
#line 12 "cocq.mod"
  1,
#line 12 "cocq.mod"
  0x1000L, sizeof(pOt_CHAR)
#line 12 "cocq.mod"
};
#line 12 "cocq.mod"

#line 12 "cocq.mod"
static struct pOt__tag_0_COCQ pOt_CSeq_COCQ, pOt_Dup_COCQ;
#line 12 "cocq.mod"
pOt_INTEGER pOt_cslen_COCQ;
#line 12 "cocq.mod"

#line 12 "cocq.mod"
static struct {void *next, *vars[0x1];} pOt__gc_ptrs = {pOt_NIL,{
#line 12 "cocq.mod"
  pOt_NIL
#line 12 "cocq.mod"
}};
#line 12 "cocq.mod"
static struct {void *next, *vars[0x1];} pOt__gc_strs = {&pOt__gc_ptrs,{
#line 12 "cocq.mod"
  pOt_NIL
#line 12 "cocq.mod"
}};
#line 12 "cocq.mod"

#line 12 "cocq.mod"

#line 14 "cocq.mod"

#line 14 "cocq.mod"

#line 14 "cocq.mod"
extern void pOt_Append_COCQ
#line 14 "cocq.mod"
#if pOt__ANSI_C
#line 14 "cocq.mod"
  (pOt__DynArr *pOt_sfx)
#line 14 "cocq.mod"
#else
#line 14 "cocq.mod"
  (pOt_sfx)
#line 14 "cocq.mod"
  pOt__DynArr *pOt_sfx;
#line 14 "cocq.mod"

#line 14 "cocq.mod"
#endif
#line 14 "cocq.mod"
{
#line 14 "cocq.mod"
  pOt_INTEGER pOt_i, pOt_sfxlen;
#line 14 "cocq.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 14 "cocq.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 14 "cocq.mod"

#line 14 "cocq.mod"
  pOt_sfxlen=(pOt_INTEGER)((pOt_LONGINT)pOt__rngchk_i(__FILE__,__LINE__,pOt_Length_Strings(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt_sfx)))));
  if(( (pOt_INTEGER)pOt__addchk(__FILE__,__LINE__,(pOt_LONGINT)(pOt_sfxlen),(pOt_LONGINT)(pOt_cslen_COCQ),5)>4095)) {
#line 15 "cocq.mod"
    pOt_Mark_COCS((pOt_INTEGER)(215));
#line 15 "cocq.mod"
    goto pOt__Epilogue;
#line 15 "cocq.mod"
  }
#line 15 "cocq.mod"
  pOt_i=(pOt_INTEGER)(0);
  for(;;) {
    pOt_CSeq_COCQ.arr[pOt__inxchk(__FILE__,__LINE__,0x1000, (pOt_INTEGER)pOt__addchk(__FILE__,__LINE__,(pOt_LONGINT)(pOt_i),(pOt_LONGINT)(pOt_cslen_COCQ),5))]=(*((pOt_CHAR*)(((char *)pOt_sfx+sizeof(pOt__ArrTypDsc*)+sizeof(pOt_CHAR)*pOt__inxchk(__FILE__,__LINE__,(*(pOt_sfx))->nofel,pOt_i)))));
#line 17 "cocq.mod"
    if(( pOt_i==pOt_sfxlen)) {
      goto pOt__LoopLabel_1;
#line 18 "cocq.mod"
    }
#line 18 "cocq.mod"
    pOt_i+=(1);
#line 20 "cocq.mod"
  }
#line 20 "cocq.mod"
pOt__LoopLabel_1:;
#line 20 "cocq.mod"
  pOt_cslen_COCQ+=(pOt_sfxlen);
#line 22 "cocq.mod"

#line 22 "cocq.mod"
pOt__Epilogue:;
#line 22 "cocq.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 22 "cocq.mod"
  pOt__rm_par((pOt__TypDsc**)pOt_sfx);
#line 22 "cocq.mod"
}
#line 22 "cocq.mod"

#line 22 "cocq.mod"

#line 26 "cocq.mod"

#line 26 "cocq.mod"

#line 26 "cocq.mod"
extern void pOt_Prepend_COCQ
#line 26 "cocq.mod"
#if pOt__ANSI_C
#line 26 "cocq.mod"
  (pOt__DynArr *pOt_pfx, pOt_INTEGER pOt_pos, pOt_INTEGER *pOt_nextpos)
#line 26 "cocq.mod"
#else
#line 26 "cocq.mod"
  (pOt_pfx, pOt_pos, pOt_nextpos)
#line 26 "cocq.mod"
  pOt__DynArr *pOt_pfx;
#line 26 "cocq.mod"
  pOt_INTEGER pOt_pos, *pOt_nextpos;
#line 26 "cocq.mod"

#line 26 "cocq.mod"
#endif
#line 26 "cocq.mod"
{
#line 26 "cocq.mod"
  pOt_INTEGER pOt_i, pOt_pfxlen;
#line 26 "cocq.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 26 "cocq.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 26 "cocq.mod"

#line 26 "cocq.mod"
  if(( pOt_pos==pOt_cslen_COCQ)) {
#line 26 "cocq.mod"
    pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt_pfx)));
#line 26 "cocq.mod"
    (*pOt_nextpos)=(pOt_INTEGER)(pOt_cslen_COCQ);
#line 26 "cocq.mod"
    goto pOt__Epilogue;
#line 26 "cocq.mod"
  }
#line 26 "cocq.mod"
  pOt_pfxlen=(pOt_INTEGER)((pOt_LONGINT)pOt__rngchk_i(__FILE__,__LINE__,pOt_Length_Strings(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt_pfx)))));
#line 28 "cocq.mod"
  if(( (pOt_INTEGER)pOt__addchk(__FILE__,__LINE__,(pOt_LONGINT)(pOt_pfxlen),(pOt_LONGINT)(pOt_cslen_COCQ),5)>4095)) {
#line 28 "cocq.mod"
    pOt_Mark_COCS((pOt_INTEGER)(215));
#line 28 "cocq.mod"
    pOt_i=(pOt_INTEGER)(pOt_pos);
#line 30 "cocq.mod"
  } else {
#line 30 "cocq.mod"
    pOt_i=(pOt_INTEGER)((pOt_INTEGER)pOt__addchk(__FILE__,__LINE__,(pOt_LONGINT)(pOt_cslen_COCQ),(pOt_LONGINT)(1),5));
#line 30 "cocq.mod"
    for(;;) {
#line 30 "cocq.mod"
      if(( pOt_i!=pOt_pos)); else break;
#line 30 "cocq.mod"
      pOt_i-=(1);
#line 30 "cocq.mod"
      pOt_CSeq_COCQ.arr[pOt__inxchk(__FILE__,__LINE__,0x1000, (pOt_INTEGER)pOt__addchk(__FILE__,__LINE__,(pOt_LONGINT)(pOt_i),(pOt_LONGINT)(pOt_pfxlen),5))]=pOt_CSeq_COCQ.arr[pOt__inxchk(__FILE__,__LINE__,0x1000, pOt_i)];
#line 30 "cocq.mod"
    }
#line 30 "cocq.mod"
    for(;;) {
      if(( pOt_i!=(pOt_INTEGER)pOt__addchk(__FILE__,__LINE__,(pOt_LONGINT)(pOt_pos),(pOt_LONGINT)(pOt_pfxlen),5))); else break;
#line 31 "cocq.mod"
      pOt_CSeq_COCQ.arr[pOt__inxchk(__FILE__,__LINE__,0x1000, pOt_i)]=(*((pOt_CHAR*)(((char *)pOt_pfx+sizeof(pOt__ArrTypDsc*)+sizeof(pOt_CHAR)*pOt__inxchk(__FILE__,__LINE__,(*(pOt_pfx))->nofel,(pOt_INTEGER)pOt__subchk(__FILE__,__LINE__,(pOt_LONGINT)(pOt_i),(pOt_LONGINT)(pOt_pos),5))))));
#line 31 "cocq.mod"
      pOt_i+=(1);
#line 31 "cocq.mod"
    }
#line 31 "cocq.mod"
    pOt_cslen_COCQ+=(pOt_pfxlen);
#line 33 "cocq.mod"
  }
#line 33 "cocq.mod"
  (*pOt_nextpos)=(pOt_INTEGER)(pOt_i);
#line 35 "cocq.mod"

#line 35 "cocq.mod"
pOt__Epilogue:;
#line 35 "cocq.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 35 "cocq.mod"
  pOt__rm_par((pOt__TypDsc**)pOt_pfx);
#line 35 "cocq.mod"
}
#line 35 "cocq.mod"

#line 35 "cocq.mod"

#line 38 "cocq.mod"

#line 38 "cocq.mod"

#line 38 "cocq.mod"
extern void pOt_Rewind_COCQ()
#line 38 "cocq.mod"
{
#line 38 "cocq.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 38 "cocq.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 38 "cocq.mod"

#line 38 "cocq.mod"
  pOt_CSeq_COCQ.arr[pOt__inxchk(__FILE__,__LINE__,0x1000, 0)]='\0';
#line 38 "cocq.mod"
  pOt_cslen_COCQ=(pOt_INTEGER)(0);

#line 39 "cocq.mod"
pOt__Epilogue:;
#line 39 "cocq.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 39 "cocq.mod"
}
#line 39 "cocq.mod"

#line 39 "cocq.mod"

#line 42 "cocq.mod"

#line 42 "cocq.mod"

#line 42 "cocq.mod"
extern void pOt_Drop_COCQ
#line 42 "cocq.mod"
#if pOt__ANSI_C
#line 42 "cocq.mod"
  (struct pOt__tag_3_COCT *pOt_x)
#line 42 "cocq.mod"
#else
#line 42 "cocq.mod"
  (pOt_x)
#line 42 "cocq.mod"
  struct pOt__tag_3_COCT *pOt_x;
#line 42 "cocq.mod"

#line 42 "cocq.mod"
#endif
#line 42 "cocq.mod"
{
#line 42 "cocq.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 42 "cocq.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 42 "cocq.mod"

#line 42 "cocq.mod"
  pOt_cslen_COCQ=(pOt_INTEGER)((*pOt_x).pOt_qoffs);
#line 42 "cocq.mod"
  pOt_CSeq_COCQ.arr[pOt__inxchk(__FILE__,__LINE__,0x1000, pOt_cslen_COCQ)]='\0';
#line 42 "cocq.mod"
  (*pOt_x).pOt_qoffs=(pOt_INTEGER)(-1);

#line 43 "cocq.mod"
pOt__Epilogue:;
#line 43 "cocq.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 43 "cocq.mod"
}
#line 43 "cocq.mod"

#line 43 "cocq.mod"

#line 46 "cocq.mod"

#line 46 "cocq.mod"

#line 46 "cocq.mod"
extern void pOt_Link_COCQ
#line 46 "cocq.mod"
#if pOt__ANSI_C
#line 46 "cocq.mod"
  (struct pOt__tag_3_COCT *pOt_x)
#line 46 "cocq.mod"
#else
#line 46 "cocq.mod"
  (pOt_x)
#line 46 "cocq.mod"
  struct pOt__tag_3_COCT *pOt_x;
#line 46 "cocq.mod"

#line 46 "cocq.mod"
#endif
#line 46 "cocq.mod"
{
#line 46 "cocq.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 46 "cocq.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 46 "cocq.mod"

#line 46 "cocq.mod"
  (*pOt_x).pOt_qoffs=(pOt_INTEGER)(pOt_cslen_COCQ);

#line 47 "cocq.mod"
pOt__Epilogue:;
#line 47 "cocq.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 47 "cocq.mod"
}
#line 47 "cocq.mod"

#line 47 "cocq.mod"

#line 50 "cocq.mod"

#line 50 "cocq.mod"

#line 50 "cocq.mod"
extern void pOt_Unlink_COCQ
#line 50 "cocq.mod"
#if pOt__ANSI_C
#line 50 "cocq.mod"
  (struct pOt__tag_3_COCT *pOt_x)
#line 50 "cocq.mod"
#else
#line 50 "cocq.mod"
  (pOt_x)
#line 50 "cocq.mod"
  struct pOt__tag_3_COCT *pOt_x;
#line 50 "cocq.mod"

#line 50 "cocq.mod"
#endif
#line 50 "cocq.mod"
{
#line 50 "cocq.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 50 "cocq.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 50 "cocq.mod"

#line 50 "cocq.mod"
  if(( (*pOt_x).pOt_qoffs==((pOt_INTEGER)(0)))) {
#line 50 "cocq.mod"
    pOt_PutSeq_COCO(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&pOt_CSeq_COCQ));
#line 50 "cocq.mod"
    pOt_Rewind_COCQ();
#line 50 "cocq.mod"
  }
#line 50 "cocq.mod"
  (*pOt_x).pOt_qoffs=(pOt_INTEGER)(-1);

#line 51 "cocq.mod"
pOt__Epilogue:;
#line 51 "cocq.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 51 "cocq.mod"
}
#line 51 "cocq.mod"

#line 51 "cocq.mod"

#line 54 "cocq.mod"

#line 54 "cocq.mod"

#line 54 "cocq.mod"
extern void pOt_Mark_COCQ
#line 54 "cocq.mod"
#if pOt__ANSI_C
#line 54 "cocq.mod"
  (struct pOt__tag_3_COCT *pOt_x)
#line 54 "cocq.mod"
#else
#line 54 "cocq.mod"
  (pOt_x)
#line 54 "cocq.mod"
  struct pOt__tag_3_COCT *pOt_x;
#line 54 "cocq.mod"

#line 54 "cocq.mod"
#endif
#line 54 "cocq.mod"
{
#line 54 "cocq.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 54 "cocq.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 54 "cocq.mod"

#line 54 "cocq.mod"
  (*pOt_x).pOt_qoffs=(pOt_INTEGER)(pOt_cslen_COCQ);

#line 55 "cocq.mod"
pOt__Epilogue:;
#line 55 "cocq.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 55 "cocq.mod"
}
#line 55 "cocq.mod"

#line 55 "cocq.mod"

#line 59 "cocq.mod"

#line 59 "cocq.mod"

#line 59 "cocq.mod"
extern void pOt_Release_COCQ
#line 59 "cocq.mod"
#if pOt__ANSI_C
#line 59 "cocq.mod"
  (struct pOt__tag_3_COCT *pOt_x)
#line 59 "cocq.mod"
#else
#line 59 "cocq.mod"
  (pOt_x)
#line 59 "cocq.mod"
  struct pOt__tag_3_COCT *pOt_x;
#line 59 "cocq.mod"

#line 59 "cocq.mod"
#endif
#line 59 "cocq.mod"
{
#line 59 "cocq.mod"
  pOt_INTEGER pOt_i;
#line 59 "cocq.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 59 "cocq.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 59 "cocq.mod"

#line 59 "cocq.mod"
  pOt_cslen_COCQ=(pOt_INTEGER)((*pOt_x).pOt_qoffs);
  if(( pOt_cslen_COCQ!=((pOt_INTEGER)(0)))) {
    pOt_i=(pOt_INTEGER)(0);
    for(;;) {
#line 62 "cocq.mod"
      pOt_Dup_COCQ.arr[pOt__inxchk(__FILE__,__LINE__,0x1000, pOt_i)]=pOt_CSeq_COCQ.arr[pOt__inxchk(__FILE__,__LINE__,0x1000, (pOt_INTEGER)pOt__addchk(__FILE__,__LINE__,(pOt_LONGINT)(pOt_i),(pOt_LONGINT)(pOt_cslen_COCQ),5))];
      if(((unsigned char) pOt_Dup_COCQ.arr[pOt__inxchk(__FILE__,__LINE__,0x1000, pOt_i)]==(unsigned char)'\0')) {
#line 63 "cocq.mod"
        goto pOt__LoopLabel_1;
#line 63 "cocq.mod"
      }
#line 63 "cocq.mod"
      pOt_i+=(1);
#line 65 "cocq.mod"
    }
#line 65 "cocq.mod"
  pOt__LoopLabel_1:;
#line 65 "cocq.mod"
    pOt_CSeq_COCQ.arr[pOt__inxchk(__FILE__,__LINE__,0x1000, pOt_cslen_COCQ)]='\0';
#line 67 "cocq.mod"
    pOt_PutSeq_COCO(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&pOt_Dup_COCQ));
  } else {
#line 68 "cocq.mod"
    pOt_PutSeq_COCO(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&pOt_CSeq_COCQ));
#line 68 "cocq.mod"
    pOt_CSeq_COCQ.arr[pOt__inxchk(__FILE__,__LINE__,0x1000, 0)]='\0';
  }
#line 69 "cocq.mod"
  (*pOt_x).pOt_qoffs=(pOt_INTEGER)(-1);
#line 71 "cocq.mod"

#line 71 "cocq.mod"
pOt__Epilogue:;
#line 71 "cocq.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 71 "cocq.mod"
}
#line 71 "cocq.mod"

#line 71 "cocq.mod"

#line 74 "cocq.mod"

#line 74 "cocq.mod"

#line 74 "cocq.mod"
extern void pOt_Dummy_COCQ()
#line 74 "cocq.mod"
{
#line 74 "cocq.mod"
  struct {void*next;} pOt__gc_ptrs;
#line 74 "cocq.mod"
  pOt__gc_ptrs.next = pOt__gc_root;
#line 74 "cocq.mod"

#line 74 "cocq.mod"
  if(( pOt_cslen_COCQ==((pOt_INTEGER)(0)))) {
#line 74 "cocq.mod"
    pOt_Append_COCQ(pOt__dup_arr(__FILE__,__LINE__,(pOt__ArrTypDsc**)&(*pOt__set_str_td(&pOt__strcon_buf[0x0L],&pOt__str_td[0x1]))));
  }
#line 75 "cocq.mod"

#line 75 "cocq.mod"
pOt__Epilogue:;
#line 75 "cocq.mod"
  pOt__gc_root=(struct pOt__tag_gc_node*)pOt__gc_ptrs.next;
#line 75 "cocq.mod"
}
#line 75 "cocq.mod"

#line 75 "cocq.mod"
void pOt_COCQ__body()
#line 77 "cocq.mod"
{
#line 77 "cocq.mod"
  static int pOt_COCQ__loaded=0;
#line 77 "cocq.mod"
  if(!pOt_COCQ__loaded){
#line 77 "cocq.mod"
    pOt_COCQ__loaded=1;
#line 77 "cocq.mod"

#line 77 "cocq.mod"
    pOt_Strings__body();
#line 77 "cocq.mod"
    pOt_COCS__body();
#line 77 "cocq.mod"
    pOt_COCT__body();
#line 77 "cocq.mod"
    pOt_COCO__body();
#line 77 "cocq.mod"

#line 77 "cocq.mod"
    pOt__gc_ptrs.next=pOt__gc_root;
#line 77 "cocq.mod"
    pOt__gc_root=(struct pOt__tag_gc_node*)&pOt__gc_strs;
#line 77 "cocq.mod"

#line 77 "cocq.mod"
    pOt__init_var((pOt__TypDsc**)&pOt_CSeq_COCQ,(pOt__TypDsc*)&pOt__td_0_COCQ);
#line 77 "cocq.mod"
    pOt__init_var((pOt__TypDsc**)&pOt_Dup_COCQ,(pOt__TypDsc*)&pOt__td_0_COCQ);
#line 77 "cocq.mod"

#line 77 "cocq.mod"

#line 77 "cocq.mod"
  pOt__Epilogue:;
#line 77 "cocq.mod"
  }
#line 77 "cocq.mod"
}
#line 77 "cocq.mod"