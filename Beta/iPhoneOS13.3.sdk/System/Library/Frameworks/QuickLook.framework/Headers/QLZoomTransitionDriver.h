/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <QuickLook/QLTransitionDriver.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface QLZoomTransitionDriver : QLTransitionDriver

{
    UIView *_uncroppedView;
}

+ (void)cropView:(id)arg1 toAvoidNavigationOffset:(double)arg2 presenting:(_Bool)arg3 animationDuration:(double)arg4;

- (void)tearDown;
- (void)animateTransition;
- (void)animateFinishTransition;
- (void)_performZoomTransition;

@end
