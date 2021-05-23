/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

#import <HomeUI/Swift-Protocol.h>

@class HUDynamicFormattingLabel, HUIconView, HUQuickControlSwitchViewProfile, NSString, UIImpactFeedbackGenerator;

@interface HUQuickControlSwitchView : UIView <Swift>

{
    unsigned long long _reachabilityState;
    HUQuickControlSwitchViewProfile *_profile;
    UIView *_wellView;
    UIView *_knobView;
    HUDynamicFormattingLabel *_supplementaryValueLabel;
    HUIconView *_decorationIconView;
    double _clippedValue;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    double _switchValue;
}

@property (retain, nonatomic) UIView *wellView;
@property (retain, nonatomic) UIView *knobView;
@property (retain, nonatomic) HUDynamicFormattingLabel *supplementaryValueLabel;
@property (retain, nonatomic) HUIconView *decorationIconView;
@property (nonatomic) double clippedValue;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) double switchValue;
@property (copy, nonatomic) HUQuickControlSwitchViewProfile *profile;
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
- (void)_updateSupplementaryValueLabelAnimated:(_Bool)arg1;
- (void)_updateKnobViewTintColorAnimated:(_Bool)arg1;
- (void)_actuateTapticFeedback;
- (struct CGRect)_knobFrameForMetrics:(CDStruct_2418a849)arg1 switchValue:(double)arg2;
- (struct CGSize)_knobSizeForMetrics:(CDStruct_2418a849)arg1;
- (struct CGPoint)_knobCenterForMetrics:(CDStruct_2418a849)arg1 switchValue:(double)arg2;
- (_Bool)_createDecorationIconViewIfNecessary;
- (void)_createSupplementaryValueLabelIfNecessary;

@end
