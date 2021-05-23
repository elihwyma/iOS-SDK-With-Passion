/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OITSUDeferredInvocationQueue : NSObject

{
    NSMutableArray *_invocations;
    id _target;
}

- (void)dealloc;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)prepareWithInvocationTarget:(id)arg1;
- (void)performInvocations;

@end
