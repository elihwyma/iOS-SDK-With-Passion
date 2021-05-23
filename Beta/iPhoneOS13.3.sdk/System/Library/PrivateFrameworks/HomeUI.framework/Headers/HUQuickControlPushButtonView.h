/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUIconView, HUQuickControlPushButtonViewProfile, HUQuickControlRoundButton, NSString, UIImpactFeedbackGenerator, UILabel, UILongPressGestureRecognizer;

@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlPushButtonView : UIView

{
    _Bool _userInteractionActive;
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;
    unsigned long long _reachabilityState;
    HUQuickControlPushButtonViewProfile *_profile;
    NSString *_descriptionText;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    HUQuickControlRoundButton *_roundButton;
    HUIconView *_decorationIconView;
    UILabel *_buttonLabel;
    unsigned long long _controlState;
}

@property (nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (retain, nonatomic) HUQuickControlRoundButton *roundButton;
@property (retain, nonatomic) HUIconView *decorationIconView;
@property (retain, nonatomic) UILabel *buttonLabel;
@property (nonatomic) unsigned long long controlState;
@property (copy, nonatomic) HUQuickControlPushButtonViewProfile *profile;
@property (copy, nonatomic) NSString *descriptionText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;
@property (weak, nonatomic) id <HUQuickControlViewInteractionDelegate> interactionDelegate;

+ (_Bool)requiresConstraintBasedLayout;

- (void)dealloc;
- (id)initWithProfile:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)handleTap:(id)arg1;
- (void)_updateUI;
- (void)_contentSizeCategoryDidChange;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)_prepareForTapticFeedback;
- (void)_animateToEnlargeView;
- (void)_actuateTapticFeedbackWithIntensity:(double)arg1;
- (void)_animateToShrinkView;
- (void)_updateDecorationIconDescriptorAnimated:(_Bool)arg1;

@end
