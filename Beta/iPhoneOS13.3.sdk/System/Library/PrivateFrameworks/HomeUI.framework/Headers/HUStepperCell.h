/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, NSNumber, NSString, UILabel, UIStepper;

@protocol HUResizableCellDelegate, HUStepperCellDelegate;

@interface HUStepperCell : UITableViewCell <Swift>

{
    _Bool _disabled;
    HFItem *_item;
    NSNumber *_stepperValue;
    NSNumber *_minimumValue;
    NSNumber *_maximumValue;
    NSNumber *_stepValue;
    id <HUStepperCellDelegate> _stepperCellDelegate;
    UIStepper *_stepper;
    UILabel *_valueLabel;
}

@property (retain, nonatomic) UIStepper *stepper;
@property (retain, nonatomic) UILabel *valueLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (weak, nonatomic) id <HUStepperCellDelegate> stepperCellDelegate;
@property (copy, nonatomic) NSNumber *minimumValue;
@property (copy, nonatomic) NSNumber *maximumValue;
@property (copy, nonatomic) NSNumber *stepValue;
@property (copy, nonatomic) NSNumber *stepperValue;

- (void)prepareForReuse;
- (id)_valueDescription;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_stepperValueDidChange:(id)arg1;
- (void)_toggleValueChange:(id)arg1;

@end
