/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCDetailTableViewCell.h>

@class CAShapeLayer, NSArray, NSString, NTKComplication, UIPickerView;

@protocol NTKCFaceDetailComplicationPickerCellDelegate;

@interface NTKCFaceDetailComplicationPickerCell : NTKCDetailTableViewCell

{
    long long _selectedIndex;
    _Bool _dateSlot;
    _Bool _isRichSlot;
    NSArray *_complications;
    NSString *_slot;
    id <NTKCFaceDetailComplicationPickerCellDelegate> _delegate;
    UIPickerView *_picker;
    CAShapeLayer *_selectionIndicator;
}

@property (retain, nonatomic) UIPickerView *picker;
@property (retain, nonatomic) CAShapeLayer *selectionIndicator;
@property (nonatomic, readonly) NSArray *complications;
@property (nonatomic, readonly) NSString *slot;
@property (nonatomic, readonly) _Bool dateSlot;
@property (nonatomic, readonly) _Bool isRichSlot;
@property (retain, nonatomic) NTKComplication *selectedComplication;
@property (weak, nonatomic) id <NTKCFaceDetailComplicationPickerCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)rowHeight;
+ (id)reuseIdentifier;

- (id)init;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)_nameForRow:(long long)arg1;
- (void)setComplications:(id)arg1 forSlot:(id)arg2 dateSlot:(_Bool)arg3 isRichSlot:(_Bool)arg4;

@end
