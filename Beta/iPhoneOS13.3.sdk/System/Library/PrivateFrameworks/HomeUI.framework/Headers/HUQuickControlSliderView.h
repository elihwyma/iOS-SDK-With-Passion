/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

#import <HomeUI/Swift-Protocol.h>

@class HUIconView, HUQuickControlSliderValueOverlayView, HUQuickControlSliderViewProfile, NSLayoutConstraint, NSString, UIImpactFeedbackGenerator;

@interface HUQuickControlSliderView : UIView <Swift>

{
    _Bool _showOffState;
    HUQuickControlSliderViewProfile *_profile;
    unsigned long long _reachabilityState;
    double _sliderValue;
    double _secondarySliderValue;
    double _rawSliderValue;
    UIView *_backgroundView;
    UIView *_borderView;
    HUQuickControlSliderValueOverlayView *_valueOverlayView;
    NSLayoutConstraint *_overlayTopConstraint;
    HUIconView *_decorationIconView;
    double _primaryNormalizedValue;
    double _secondaryNormalizedValue;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

@property (nonatomic) _Bool showOffState;
@property (nonatomic) double rawSliderValue;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIView *borderView;
@property (retain, nonatomic) HUQuickControlSliderValueOverlayView *valueOverlayView;
@property (retain, nonatomic) NSLayoutConstraint *overlayTopConstraint;
@property (retain, nonatomic) HUIconView *decorationIconView;
@property (nonatomic) double primaryNormalizedValue;
@property (nonatomic) double secondaryNormalizedValue;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) double sliderValue;
@property (nonatomic) double secondarySliderValue;
@property (copy, nonatomic) HUQuickControlSliderViewProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithProfile:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)_prepareForTapticFeedback;
- (void)_updateDecorationIconDescriptorAnimated:(_Bool)arg1;
- (void)_actuateTapticFeedback;
- (_Bool)_createDecorationIconViewIfNecessary;
- (CDStruct_c3b9c2ee)_permittedValueRange;
- (void)_updateOffState;

@end
