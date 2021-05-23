/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIView.h>

@class WFModuleTitleView;

@interface WFActionDescriptionTitleView : UIView

{
    WFModuleTitleView *_moduleTitleView;
}

@property (nonatomic, readonly) WFModuleTitleView *moduleTitleView;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)initWithModuleTitleView:(id)arg1;

@end
