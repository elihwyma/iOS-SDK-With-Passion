/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/IMInvocationTrampoline.h>

@interface IMCapturedInvocationTrampoline : IMInvocationTrampoline

{
    id *_outInvocation;
}

- (void)forwardInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 outInvocation:(id *)arg2;

@end
