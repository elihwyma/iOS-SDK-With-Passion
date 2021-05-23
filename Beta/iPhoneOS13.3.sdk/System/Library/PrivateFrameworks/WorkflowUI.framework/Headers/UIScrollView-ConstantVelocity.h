/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIScrollView.h>

@interface UIScrollView (ConstantVelocity)

@property (nonatomic, setter=wf_setConstantVelocity:) struct CGPoint wf_constantVelocity;

- (void)wf_scroll;
- (_Bool)wf_scrollToTopAnimated:(_Bool)arg1;

@end
