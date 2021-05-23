/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITargetedProxy.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, _UIViewAnimationAttributes;

__attribute__((visibility("hidden")))
@interface _UIViewServiceImplicitAnimationDecodingProxy : _UITargetedProxy <Swift>

{
    SEL _implicitAnimationSelector;
    _UIViewAnimationAttributes *_animationAttributes;
    _Bool _animationsEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)proxyDecodingAnimationsForTarget:(id)arg1;

- (void)forwardInvocation:(id)arg1;
- (void)__animateNextInvocationOfSelector:(id)arg1 withAnimationAttributes:(id)arg2 animationsEnabled:(_Bool)arg3;

@end
