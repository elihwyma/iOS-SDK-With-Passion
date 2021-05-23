/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class WFAction;

@interface WFModuleHeadingView : UIView

{
    WFAction *_accessibilityAnnouncementAction;
}

@property (weak, nonatomic) WFAction *accessibilityAnnouncementAction;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)accessibilityActivate;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
