/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <AccessibilityUIUtilities/AXUISettingsEditableTableCellWithStepper.h>

@class NSNumber, NSString;

@protocol HUStepperCellDelegate;

@interface HUAccessibilityEditableTableCellWithStepper : AXUISettingsEditableTableCellWithStepper

{
    _Bool _disabled;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepperValue;
    NSNumber *_stepValue;
    id <HUStepperCellDelegate> _stepperCellDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <HUStepperCellDelegate> stepperCellDelegate;
@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *maximumValue;
@property (copy, nonatomic) NSNumber *stepValue;
@property (copy, nonatomic) NSNumber *stepperValue;
@property (nonatomic, getter=isDisabled) _Bool disabled;

- (void)_update;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)stringValueForSpecifier:(id)arg1;
- (double)valueForSpecifier:(id)arg1;
- (void)specifier:(id)arg1 setValue:(double)arg2;
- (double)stepValueForSpecifier:(id)arg1;
- (double)minimumValueForSpecifier:(id)arg1;
- (double)maximumValueForSpecifier:(id)arg1;
- (id)textFieldValue:(id)arg1;

@end
