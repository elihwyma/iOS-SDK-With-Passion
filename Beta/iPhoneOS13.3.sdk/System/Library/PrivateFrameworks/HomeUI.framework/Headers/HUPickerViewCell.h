/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class HFItem, NSIndexPath, NSString, UIPickerView;

@protocol HUPickerCellDelegate;

@interface HUPickerViewCell : UITableViewCell

{
    NSIndexPath *_selectedIndexPath;
    HFItem *_item;
    id <HUPickerCellDelegate> _delegate;
    UIPickerView *_pickerView;
    long long _numberOfValues;
}

@property (retain, nonatomic) UIPickerView *pickerView;
@property (nonatomic) long long numberOfValues;
@property (retain, nonatomic) HFItem *item;
@property (weak, nonatomic) id <HUPickerCellDelegate> delegate;
@property (nonatomic, readonly) NSIndexPath *selectedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)reloadPickerView;
- (_Bool)_canSelectValueAtIndex:(long long)arg1;
- (void)setSelectedIndex:(long long)arg1 animated:(_Bool)arg2;

@end
