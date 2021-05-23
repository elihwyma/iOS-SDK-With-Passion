/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIButton.h>

@interface WFDrawerPaneCloseButton : UIButton

{
    double _touchAreaAdjustment;
}

@property (nonatomic) double touchAreaAdjustment;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
