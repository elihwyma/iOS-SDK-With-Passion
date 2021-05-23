/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSProxy.h>

__attribute__((visibility("hidden")))
@interface _UITargetedProxy : NSProxy

{
    id __target;
}

@property (retain, nonatomic, setter=_setTarget:) id _target;

+ (id)proxyWithTarget:(id)arg1;

- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end
