/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface TSUDeferredInvocationQueue : NSObject

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
