/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class HUQuickControlWheelPickerViewProfile, NSArray, NSNumber, NSString, UIImpactFeedbackGenerator, UIPickerView, UISelectionFeedbackGenerator;

@protocol HUQuickControlViewInteractionDelegate;

@interface HUQuickControlWheelPickerView : UIView

{
    _Bool _userInteractionActive;
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;
    unsigned long long _reachabilityState;
    HUQuickControlWheelPickerViewProfile *_profile;
    NSArray *_items;
    UIPickerView *_pickerView;
    UIView *_topGradientView;
    UIView *_bottomGradientView;
    UIView *_selectedRowSurroundingView;
    NSNumber *_selectedRow;
    double _maxTextWidth;
    UISelectionFeedbackGenerator *_selectionFeedbackGenerator;
    UIImpactFeedbackGenerator *_impactFeedbackGenerator;
}

@property (nonatomic, getter=isUserInteractionActive) _Bool userInteractionActive;
@property (retain, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) UIView *topGradientView;
@property (retain, nonatomic) UIView *bottomGradientView;
@property (retain, nonatomic) UIView *selectedRowSurroundingView;
@property (retain, nonatomic) NSNumber *selectedRow;
@property (nonatomic) double maxTextWidth;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator;
@property (copy, nonatomic) HUQuickControlWheelPickerViewProfile *profile;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) id secondaryValue;
@property (nonatomic) unsigned long long reachabilityState;
@property (weak, nonatomic) id <HUQuickControlViewInteractionDelegate> interactionDelegate;

+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithProfile:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)layoutSubviews;
- (void)tintColorDidChange;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)_updateUI;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (void)_updateSelectedRowBorderView:(id)arg1;
- (void)_updateUIForReachabilityState:(unsigned long long)arg1;
- (void)_prepareForTapticFeedback;
- (void)_actuateSelectionTapticFeedback;

@end
