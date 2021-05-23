/*
 Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

#import <UIKit/UIViewController.h>

@interface UIViewController (VSAdditions)

- (void)vs_beginIgnoringInteraction;
- (void)vs_endIgnoringInteraction;
- (void)vs_adjustContentScrollViewInsets;
- (long long)vs_ignoreInteractionCount;
- (void)vs_setIgnoreInteractionCount:(long long)arg1;
- (id)vs_addFocusGuideFromView:(id)arg1 toViews:(id)arg2 withDirection:(unsigned long long)arg3;

@end
