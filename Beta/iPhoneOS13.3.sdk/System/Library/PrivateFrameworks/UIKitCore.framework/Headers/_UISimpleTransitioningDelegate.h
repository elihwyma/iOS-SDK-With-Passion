/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@protocol UIViewControllerAnimatedTransitioning;

__attribute__((visibility("hidden")))
@interface _UISimpleTransitioningDelegate : NSObject <Swift>

{
    id <UIViewControllerAnimatedTransitioning> _animator;
    _Bool __suppressCrossFadeNavigationBarAnimation;
}

@property (nonatomic, setter=_setSuppressCrossFadeNavigationBarAnimation:) _Bool _suppressCrossFadeNavigationBarAnimation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)initWithAnimator:(id)arg1;
- (_Bool)_navigationControllerShouldCrossFadeNavigationBar:(id)arg1;

@end
