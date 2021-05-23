/*
 Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKMedicalIDEditorNameAndPhotoCell, NSString;

@protocol HKEmergencyCardRowHeightChangeDelegate;

@interface HKEmergencyCardNameAndPictureTableItem : HKEmergencyCardTableItem

{
    HKMedicalIDEditorNameAndPhotoCell *_cell;
    id <HKEmergencyCardRowHeightChangeDelegate> _rowHeightChangeDelegate;
}

@property (weak, nonatomic) id <HKEmergencyCardRowHeightChangeDelegate> rowHeightChangeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setData:(id)arg1;
- (id)title;
- (id)_cell;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)commitEditing;
- (id)initInEditMode:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndex:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndex:(long long)arg2;
- (void)medicalIDEditorCellDidChangeSelection:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCellDidBeginEditing:(id)arg1 keepRectVisible:(struct CGRect)arg2 inView:(id)arg3;
- (void)medicalIDEditorCell:(id)arg1 didChangeHeight:(double)arg2 keepRectVisible:(struct CGRect)arg3 inView:(id)arg4;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)_editPhotoTapped:(id)arg1;
- (double)_cellFittedHeightWithWidth:(double)arg1;

@end
