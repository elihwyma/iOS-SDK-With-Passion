/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <AppSupport/InvocationTrampoline.h>

@interface CapturedInvocationTrampoline : InvocationTrampoline

{
    id *_outInvocation;
}

- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 outInvocation:(id *)arg2;

@end
