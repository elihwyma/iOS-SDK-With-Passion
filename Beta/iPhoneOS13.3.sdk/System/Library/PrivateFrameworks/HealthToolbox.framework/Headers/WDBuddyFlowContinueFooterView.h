/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton;

__attribute__((visibility("hidden")))
@interface WDBuddyFlowContinueFooterView : UIView

{
    double _width;
    double _bottomInset;
    NSLayoutConstraint *_continueButtonBaselineConstraint;
    NSLayoutConstraint *_continueButtonBaselineToBottomConstraint;
    UIButton *_continueButton;
}

@property (retain, nonatomic) UIButton *continueButton;

- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateForCurrentSizeCategory;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 bottomInset:(double)arg3 width:(double)arg4;

@end
