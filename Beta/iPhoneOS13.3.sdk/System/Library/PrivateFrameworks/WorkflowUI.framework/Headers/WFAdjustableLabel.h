/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UILabel.h>

@protocol WFAdjustableLabelDelegate;

@interface WFAdjustableLabel : UILabel

{
    id <WFAdjustableLabelDelegate> _adjustableDelegate;
}

@property (nonatomic) id <WFAdjustableLabelDelegate> adjustableDelegate;

- (id)accessibilityLabel;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;

@end
