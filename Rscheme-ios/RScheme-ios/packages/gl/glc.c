#include "glc.h"

void * alloc_array(int t,obj pointer){
	void *p,*v;
    if(VECTOR_P(pointer)){
        int n = SIZEOF_PTR(pointer)/ SLOT(1);

        if(t==GL_BYTE){
            v=malloc(sizeof(char)*n);
        }else if(t==GL_SHORT){
            v=malloc(sizeof(short)*n);
        }else if(t==GL_FIXED){
            v=malloc(sizeof(int)*n);
        }else if(t==GL_FLOAT){
            v=malloc(sizeof(float)*n);
        }
        p=v;
        for(int i=0;i<n;i++){
            obj ref_item = gvec_ref( pointer, SLOT(i) );

            if(t==GL_FIXED){
                int *t=p;
                *t=fx2int(ref_item);
                t++;p=t;
            }else if(t==GL_FLOAT){
                float *t=p;
                *t=extract_float(ref_item);
                t++;p=t;
            }else if(t==GL_SHORT){
                short *t=p;
                *t=fx2int(ref_item);
                t++;p=t;
            }else if(t==GL_BYTE){
                char *t=p;
                *t=fx2int(ref_item);
                t++;p=t;
            }
        }
    }else if(PAIR_P(pointer)){
        obj pp=pointer;
        int n=0;
        while(PAIR_P(pp)){
            n++;
            pp=pair_cdr(pp);
        }
        if(t==GL_BYTE){
            v=malloc(sizeof(char)*n);
        }else if(t==GL_SHORT){
            v=malloc(sizeof(short)*n);
        }else if(t==GL_FIXED){
            v=malloc(sizeof(int)*n);
        }else if(t==GL_FLOAT){
            v=malloc(sizeof(float)*n);
        }
        p=v;
        pp=pointer;
        for(int i=0;i<n;i++){
            obj ref_item = pair_car(pp);

            if(t==GL_FIXED){
                int *t=p;
                *t=fx2int(ref_item);
                t++;p=t;
            }else if(t==GL_FLOAT){
                float *t=p;
                *t=extract_float(ref_item);
                t++;p=t;
            }else if(t==GL_SHORT){
                short *t=p;
                *t=fx2int(ref_item);
                t++;p=t;
            }else if(t==GL_BYTE){
                char *t=p;
                *t=fx2int(ref_item);
                t++;p=t;
            }
            pp=pair_cdr(pp);
        }
    }
    return v;
}