/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class NSArray, WFDrawerController, _UIGrabber;

@interface WFDrawerGrabberView : UIView

{
    NSArray *_accessibilityCustomActions;
    _UIGrabber *_grabber;
    WFDrawerController *_drawerController;
}

@property (weak, nonatomic) WFDrawerController *drawerController;

- (id)init;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (id)accessibilityHint;
- (_Bool)isAccessibilityElement;
- (_Bool)accessibilityActivate;
- (id)accessibilityCustomActions;
- (_Bool)accessibilityCollapseDrawer;
- (_Bool)accessibilityExpandDrawer;

@end
