/*
 Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIView.h>

@interface UIView (PLVideoOverlayButton)

+ (id)pl_videoOverlayButtonWithStyle:(long long)arg1;
+ (struct CGSize)pl_videoOverlayButtonSize;
+ (double)pl_setHiddenAnimationDuration;

- (void)pl_setHidden:(_Bool)arg1 delay:(double)arg2 animated:(_Bool)arg3;
- (_Bool)pl_isOnScreen:(id)arg1;
- (void)pl_drawBorderWithColor:(id)arg1 width:(double)arg2;
- (void)pl_setHidden:(_Bool)arg1 animated:(_Bool)arg2;

@end
