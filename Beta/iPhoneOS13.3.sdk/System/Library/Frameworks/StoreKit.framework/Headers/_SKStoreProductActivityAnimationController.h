/*
 Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _SKStoreProductActivityAnimationController : NSObject

{
    id <UIViewControllerContextTransitioning> _transitionContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (double)transitionDuration:(id)arg1;
- (void)animateTransition:(id)arg1;
- (void)endDelayingAnimation;

@end
