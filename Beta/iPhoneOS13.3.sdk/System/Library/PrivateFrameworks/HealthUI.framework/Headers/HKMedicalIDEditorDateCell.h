/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKMedicalIDEditorCell.h>

@class NSDate, UIDatePicker;

@interface HKMedicalIDEditorDateCell : HKMedicalIDEditorCell

{
    UIDatePicker *_picker;
    NSDate *_dateValue;
}

@property (retain, nonatomic) NSDate *dateValue;

- (void)beginEditing;
- (void)commitEditing;
- (void)_showDatePicker;
- (id)formattedValue;
- (void)_dateChanged:(id)arg1;
- (void)_configureDatePicker;
- (void)_hideDatePicker;

@end
