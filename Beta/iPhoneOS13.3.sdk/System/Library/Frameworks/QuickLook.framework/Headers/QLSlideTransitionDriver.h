/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLTransitionDriver.h>

__attribute__((visibility("hidden")))
@interface QLSlideTransitionDriver : QLTransitionDriver

- (void)tearDown;
- (void)animateTransition;
- (void)animateFinishTransition;
- (void)_animateTransitionUserSlideDismissal;
- (void)_animateTransition;

@end
