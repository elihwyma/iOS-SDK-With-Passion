/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSFormatter, NSNumber, NSSet, NSString, UIPickerView;

@protocol HUControlViewDelegate, HUWheelControlViewDelegate;

@interface HUWheelControlView : UIView

{
    _Bool _canBeHighlighted;
    NSString *_identifier;
    id <HUControlViewDelegate> _delegate;
    NSNumber *_minValue;
    NSNumber *_maxValue;
    NSNumber *_stepValue;
    id <HUWheelControlViewDelegate> _wheelDelegate;
    NSFormatter *_valueFormatter;
    NSSet *_customValues;
    UIPickerView *_pickerView;
    NSArray *_wheelValues;
}

@property (retain, nonatomic) UIPickerView *pickerView;
@property (retain, nonatomic) NSArray *wheelValues;
@property (copy, nonatomic) NSNumber *minValue;
@property (copy, nonatomic) NSNumber *maxValue;
@property (copy, nonatomic) NSNumber *stepValue;
@property (weak, nonatomic) id <HUWheelControlViewDelegate> wheelDelegate;
@property (retain, nonatomic) NSFormatter *valueFormatter;
@property (retain, nonatomic) NSSet *customValues;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *identifier;
@property (weak, nonatomic) id <HUControlViewDelegate> delegate;
@property (retain, nonatomic) id value;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic) _Bool canBeHighlighted;

+ (Class)valueClass;

- (id)initWithFrame:(struct CGRect)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)_setupConstraints;
- (id)_defaultValueFormatter;
- (id)_defaultStepValue;
- (id)_defaultMaxValue;
- (id)_formatValue:(id)arg1;
- (void)_generateWheelValues;
- (id)_defaultMinValue;
- (void)_updateUIToReachable;

@end
