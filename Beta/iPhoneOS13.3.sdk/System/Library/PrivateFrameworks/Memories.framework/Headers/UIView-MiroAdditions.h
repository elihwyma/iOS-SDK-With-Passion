/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UIView.h>

@interface UIView (MiroAdditions)

+ (id)pm_videoOverlayButtonWithStyle:(long long)arg1;
+ (id)pm_videoOverlayButtonWithStyle:(long long)arg1 allowBackdropStatisticsSupression:(_Bool)arg2;

- (void)constrainToSuperview;
- (void)removeConstraintsWithSubView:(id)arg1;
- (void)constrainToSuperviewWithInsets:(struct UIEdgeInsets)arg1;
- (void)constrainToSuperviewWithAspectRatio:(double)arg1 andFill:(_Bool)arg2;

@end
