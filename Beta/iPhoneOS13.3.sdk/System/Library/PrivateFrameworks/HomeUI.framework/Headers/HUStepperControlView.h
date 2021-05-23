/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class NSArray, NSFormatter, NSString, UILabel, UIStepper;

@protocol HUControlViewDelegate;

@interface HUStepperControlView : UIView

{
    id <HUControlViewDelegate> _delegate;
    NSString *_identifier;
    id _value;
    NSFormatter *_valueFormatter;
    UIStepper *_stepper;
    UILabel *_valueLabel;
    NSArray *_layoutConstraints;
}

@property (nonatomic, readonly) UIStepper *stepper;
@property (nonatomic, readonly) UILabel *valueLabel;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (nonatomic) double stepValue;
@property (retain, nonatomic) NSFormatter *valueFormatter;
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
+ (_Bool)requiresConstraintBasedLayout;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateConstraints;
- (void)_stepperValueChanged:(id)arg1;
- (void)_updateValueLabel;
- (id)_defaultValueFormatter;
- (void)_stepperTouchDown:(id)arg1;
- (void)_stepperTouchUp:(id)arg1;

@end
