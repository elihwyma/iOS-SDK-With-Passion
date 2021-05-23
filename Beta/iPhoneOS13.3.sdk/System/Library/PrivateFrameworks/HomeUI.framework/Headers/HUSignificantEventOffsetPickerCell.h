/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSDateComponents, NSString, UIPickerView;

@protocol HUSignificantEventOffsetPickerDelegate;

@interface HUSignificantEventOffsetPickerCell : UITableViewCell

{
    NSString *_significantEvent;
    NSDateComponents *_currentOffset;
    id <HUSignificantEventOffsetPickerDelegate> _delegate;
    NSDateComponents *_selectedOffset;
    UIPickerView *_pickerView;
    NSArray *_offsetDateComponentOptions;
}

@property (nonatomic, readonly) UIPickerView *pickerView;
@property (retain, nonatomic) NSArray *offsetDateComponentOptions;
@property (retain, nonatomic) NSString *significantEvent;
@property (retain, nonatomic) NSDateComponents *currentOffset;
@property (weak, nonatomic) id <HUSignificantEventOffsetPickerDelegate> delegate;
@property (retain, nonatomic) NSDateComponents *selectedOffset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_defaultOffsetDateComponentOptions;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)_updateOffsetDateComponentOptions;
- (id)_titleForOffsetComponents:(id)arg1;

@end
