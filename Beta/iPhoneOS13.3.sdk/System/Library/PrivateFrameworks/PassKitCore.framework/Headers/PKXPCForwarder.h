/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@interface PKXPCForwarder : NSObject

{
    id _target;
    Class _targetClass;
}

- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithTarget:(id)arg1;
- (void)clearTarget;

@end
