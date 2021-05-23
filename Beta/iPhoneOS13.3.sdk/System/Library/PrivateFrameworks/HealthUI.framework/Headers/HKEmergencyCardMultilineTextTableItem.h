/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKMedicalIDEditorMultilineStringCell;

@protocol HKEmergencyCardRowHeightChangeDelegate;

@interface HKEmergencyCardMultilineTextTableItem : HKEmergencyCardTableItem

{
    HKMedicalIDEditorMultilineStringCell *_editableCell;
    id <HKEmergencyCardRowHeightChangeDelegate> _rowHeightChangeDelegate;
}

@property (weak, nonatomic) id <HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate;

- (void)setData:(id)arg1;
- (void)commitEditing;
- (id)_placeholderText;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (void)medicalIDEditorCellDidChangeSelection:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCellDidBeginEditing:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(struct CGRect)arg3 inView:(id)arg4;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (id)_editableCell;
- (id)_multilineStringValue;
- (void)_updateMultilineStringValueWithValue:(id)arg1;
- (double)_cellFittedHeightWithWidth:(double)arg1;
- (void)_configureEditableCell:(id)arg1;

@end
