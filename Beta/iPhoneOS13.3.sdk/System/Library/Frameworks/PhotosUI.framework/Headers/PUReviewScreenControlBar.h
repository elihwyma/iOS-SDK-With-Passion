/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSSet, UIButton;

@interface PUReviewScreenControlBar : UIView

{
    _Bool _shouldLayoutVertically;
    _Bool _useTransparentBackground;
    _Bool _useTransparentTouches;
    NSSet *_availableButtons;
    NSSet *_enabledButtons;
    UIButton *_editButton;
    UIButton *_markupButton;
    UIButton *_funEffectsButton;
    UIButton *_sendButton;
    UIView *_accessoryView;
    NSArray *__buttonsForLayout;
    struct CGPoint _layoutCenterAlignmentPoint;
}

@property (retain, nonatomic, setter=_setButtonsForLayout:) NSArray *_buttonsForLayout;
@property (copy, nonatomic) NSSet *availableButtons;
@property (copy, nonatomic) NSSet *enabledButtons;
@property (nonatomic) _Bool shouldLayoutVertically;
@property (nonatomic) struct CGPoint layoutCenterAlignmentPoint;
@property (nonatomic) _Bool useTransparentBackground;
@property (nonatomic) _Bool useTransparentTouches;
@property (nonatomic, readonly) UIButton *editButton;
@property (nonatomic, readonly) UIButton *markupButton;
@property (nonatomic, readonly) UIButton *funEffectsButton;
@property (nonatomic, readonly) UIButton *sendButton;
@property (retain, nonatomic) UIView *accessoryView;

+ (id)supportedButtons;
+ (struct CGRect)sendButtonAlignmentRectInHorizontalBounds:(struct CGRect)arg1 relativeCenterAlignmentPoint:(struct CGPoint)arg2;
+ (struct CGRect)sendButtonAlignmentRectInVerticalBounds:(struct CGRect)arg1 relativeCenterAlignmentPoint:(struct CGPoint)arg2 controlsCount:(unsigned long long)arg3;

- (void)setBounds:(struct CGRect)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_updateButtonText;
- (_Bool)_isButtonAvailable:(long long)arg1;
- (_Bool)_isButtonEnabled:(long long)arg1;
- (id)_buttonForButtonType:(long long)arg1;
- (void)_updateButtonVisibility;
- (void)_updateBackgroundTransparency;

@end
