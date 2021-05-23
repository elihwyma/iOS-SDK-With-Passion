/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class WFAccessibilityActionComponent;

@interface WFAccessibilityComponentView : UIView

@property (retain, nonatomic, setter=ck_setComponent:) WFAccessibilityActionComponent *ck_component;

- (id)accessibilityValue;
- (id)accessibilityAttributedValue;
- (struct CGPoint)accessibilityActivationPoint;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (_Bool)accessibilityActivate;
- (id)_ck_accessibilityTarget;

@end
