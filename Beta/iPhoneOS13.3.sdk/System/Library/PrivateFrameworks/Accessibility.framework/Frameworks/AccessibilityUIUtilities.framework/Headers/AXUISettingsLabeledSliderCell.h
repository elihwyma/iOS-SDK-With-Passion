/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AccessibilityUIUtilities.framework/AccessibilityUIUtilities
 */

#import <Preferences/PSTableCell.h>

@class UILabel, UISlider, UIView;

@interface AXUISettingsLabeledSliderCell : PSTableCell

{
    _Bool _segmented;
    UIView *_leftView;
    UISlider *_sliderView;
    UIView *_rightView;
    UILabel *_rightLabel;
}

@property (retain, nonatomic) UIView *leftView;
@property (retain, nonatomic) UISlider *sliderView;
@property (retain, nonatomic) UIView *rightView;
@property (retain, nonatomic) UILabel *rightLabel;
@property (nonatomic) _Bool segmented;

- (void)traitCollectionDidChange:(id)arg1;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (double)initialValue;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)minimumValue;
- (double)maximumValue;
- (id)slider;
- (void)setLabelText:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)handleSliderBeingDragged:(id)arg1;
- (void)handleSliderDidFinishDrag:(id)arg1;
- (void)_updateRightLabelFont;
- (id)labelTextColor;

@end
