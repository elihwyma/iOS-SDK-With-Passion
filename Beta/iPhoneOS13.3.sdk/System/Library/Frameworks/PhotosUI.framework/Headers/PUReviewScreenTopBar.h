/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSSet, PUReviewScreenDoneButton, UIButton;

@interface PUReviewScreenTopBar : UIView

{
    NSSet *_availableButtons;
    NSSet *_enabledButtons;
    unsigned long long _backgroundStyle;
    PUReviewScreenDoneButton *_doneButton;
    UIButton *_retakeButton;
    struct CGPoint _doneButtonCenterAlignmentPoint;
}

@property (copy, nonatomic) NSSet *availableButtons;
@property (copy, nonatomic) NSSet *enabledButtons;
@property (nonatomic) unsigned long long backgroundStyle;
@property (nonatomic) struct CGPoint doneButtonCenterAlignmentPoint;
@property (nonatomic, readonly) PUReviewScreenDoneButton *doneButton;
@property (nonatomic, readonly) UIButton *retakeButton;

+ (id)supportedButtons;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)_updateBackgroundColor;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_isButtonAvailable:(long long)arg1;
- (_Bool)_isButtonEnabled:(long long)arg1;
- (id)_buttonForButtonType:(long long)arg1;
- (void)_updateButtonVisibility;

@end
