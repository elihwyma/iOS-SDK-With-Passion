/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

#import <HomeUI/Swift-Protocol.h>

@class HFItem, NSArray, NSSet, NSString, UIStackView;

@protocol HUDayOfWeekPickerCellDelegate, HUResizableCellDelegate;

@interface HUDayOfWeekPickerCell : UITableViewCell <Swift>

{
    HFItem *_item;
    id <HUDayOfWeekPickerCellDelegate> _delegate;
    NSSet *_selectedRecurrences;
    NSArray *_buttons;
    UIStackView *_buttonStackView;
}

@property (retain, nonatomic) NSArray *buttons;
@property (retain, nonatomic) UIStackView *buttonStackView;
@property (weak, nonatomic) id <HUDayOfWeekPickerCellDelegate> delegate;
@property (retain, nonatomic) NSSet *selectedRecurrences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUResizableCellDelegate> resizingDelegate;

- (void)tintColorDidChange;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)_setupConstraints;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)_toggleWeekdayButton:(id)arg1;
- (void)_updateSelectedDays;

@end
