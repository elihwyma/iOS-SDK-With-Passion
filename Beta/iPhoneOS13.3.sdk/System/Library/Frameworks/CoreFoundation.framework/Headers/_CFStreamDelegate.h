/*
 Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CFStreamDelegate : NSObject

{
    unsigned long long _flags;
    CDStruct_4210025a _client;
    union {
        CDUnknownFunctionPointerType _rcb;
        CDUnknownFunctionPointerType _wcb;
        CDUnknownFunctionPointerType genericCallback;
        void *genericPointer;
    } _cb;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (id)initWithStreamEvents:(unsigned long long)arg1 callback:(void *)arg2 context:(CDStruct_4210025a *)arg3;

@end
