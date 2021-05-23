/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _NSThreadData : NSObject

{
    id dict;
    id name;
    id target;
    SEL selector;
    id argument;
    int seqNum;
    unsigned char qstate;
    BOOL qos;
    unsigned char cancel;
    unsigned char status;
    id performQ;
    NSMutableDictionary *performD;
    struct _opaque_pthread_attr_t {
        long long __sig;
        char __opaque[56];
    } attr;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *tid;
    double pri;
    double defpri;
}

@end
